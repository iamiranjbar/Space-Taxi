#include "system.hpp"
#include "user.hpp"
#include "CLI.hpp"
#include "data.hpp"
#include "spaceship.hpp"
#include <algorithm>
#include <cstdlib>
#include "snapshot.hpp"

#define VEHICLES_FILE "vehicles.cfg"
#define TOPOLOGY_FILE "topology.cfg"
#define REGISTER_PASSENGER_COMMAND "register_passenger"
#define REGISTER_P_MAX_PARAMETERS 5
#define REGISTER_P_MIN_PARAMETERS 4
#define REGISTER_DRIVER_COMMAND "register_driver"
#define REGISTER_D_MAX_PARAMETERS 8
#define REGISTER_D_MIN_PARAMETERS 7
#define ACC_REGISTRATION "accept_registration"
#define ACC_REGISTRATION_PARAMETERS 3
#define REJ_REGISTRATION "reject_registration"
#define REJ_REGISTRATION_PARAMETERS 3
#define SHOW_REG_REQS "show_registration_requests"
#define SHOW_REG_REQS_PARAMETERS 2
#define LOGIN_PASSENGER_COMMAND "login_passenger"
#define LOGIN_DRIVER_COMMAND "login_driver"
#define LOGIN_COMMAND "login"
#define LOGIN_COMMAND_PARAMETERS 3
#define LOGOUT_COMMAND "logout"
#define LOGOUT_COMMAND_PARAMETERS 2
#define GET_DIS_CODE_COMMAND "get_discount_code"
#define GET_DIS_CODE_COMMAND_PARAMETERS 2
#define SET_STATUS_COMMAND "set_status"
#define SET_STATUS_COMMAND_MAX_PARAMETERS 4
#define SET_STATUS_COMMAND_MIN_PARAMETERS 3
#define ESTIMATE_TRIP_COMMAND "estimate_trip"
#define ESTIMATE_TRIP_COMMAND_MIN_PARAMETERS 4
#define REQ_TRIP_COMMAND "request_trip"
#define REQ_TRIP_COMMAND_MIN_PARAMETERS 4
#define CANCEL_TRIP_COMMAND "cancel_trip_request"
#define CANCEL_TRIP_COMMAND_PARAMETERS 2
#define SHOW_TRIP_REQS_COMMAND "show_trip_requests"
#define SHOW_TRIP_REQS_COMMAND_PARAMETERS 2
#define ACC_TRIP_REQ_COMMAND "accept_trip_request"
#define ACC_TRIP_REQ_COMMAND_PARAMETERS 3
#define TRIP_STATUS_COMMAND "trip_status"
#define TRIP_STATUS_COMMAND_PARAMETERS 2
#define ARRIVED_COMMAND "arrived"
#define ARRIVED_COMMAND_PARAMETERS 2
#define END_TRIP_COMMAND "end_trip"
#define END_TRIP_COMMAND_PARAMETERS 2
#define RATE_COMMAND "rate_driver"
#define RATE_COMMAND_PARAMETERS 3
#define CHARGE_ACCOUNT_COMMAND "charge_account"
#define CHARGE_ACCOUNT_COMMAND_PARAMETERS 3
#define GET_CREDIT_COMMAND "get_credit"
#define GET_CREDIT_COMMAND_PARAMETERS 2
#define SET_TIME_COMMAND "set_time"
#define SET_TIME_COMMAND_PARAMETERS 3
#define PASSENGER_REPORT_COMMAND "passenger_report"
#define PASSENGER_REPORT_COMMAND_PARAMETERS 3
#define DRIVER_REPORT_COMMAND "driver_report"
#define DRIVER_REPORT_COMMAND_PARAMETERS 5
#define SYSTEM_REPORT_COMMAND "system_report"
#define SYSTEM_REPORT_COMMAND_MIN_PARAMETERS 2
#define SYSTEM_REPORT_COMMAND_MAX_PARAMETERS 4
#define GET_TIME_COMMAND "get_time"
#define GET_STATUS_COMMAND "get_status"

System::System(){
	admin = new User("admin" , "s3cret");
	cli = new CLI;
	data = new Data(VEHICLES_FILE , TOPOLOGY_FILE);
	world = data -> get_world();
 	_time = new Time;
}

System::~System(){
	delete admin;
	delete cli;
	delete data;
}

int System::check_user_existence(std::string username){
	for (int i=0; i < passengers.size(); i++){
		if (passengers[i]->get_username() == username)
			return i+1;
	}
	for (int i =0; i < drivers.size(); i++){
		if (drivers[i]->get_username() == username)
			return i+1+passengers.size();
	}
	if (username == "admin")
		return 0;
	return -1;
}

bool System::is_login(int user_id){
	if (user_id == 0){
		if (admin->get_status() == yes){
			return true;
		}
	}
	else if (user_id <= passengers.size()){
		user_id -= 1;
		if (passengers[user_id] -> get_status() == yes)
			return true;
	}
	else if (user_id <= passengers.size() + drivers.size()){
		user_id -= (passengers.size() +1);
		if (drivers[user_id] -> get_status() == yes)
			return true;
	}
	return false;
}

void System::check_command_parameter_number(int max_para , int min_para){
	if (parts.size() < min_para || parts.size() > max_para){
		throw except("command parameters number");
	}
}

bool System::check_tel_singularity(std::string tel){
	for (int i=0; i < passengers.size(); i++){
		if (tel == passengers[i] -> get_phone_number())
			return false;
	}
	return true;
}

bool System::check_ss_number_singularity(std::string ss_number){
	for (int i=0; i < drivers.size(); i++){
		if (drivers[i]->get_ss_number() == ss_number){
			return false;
		}
	}
	return true;
}

bool System::check_ss_model_existence(std::string ss_model){
	return data->check_ss_model_existence(ss_model);
}

bool System::check_pass(std::string pass, int user_id){
	if (user_id == 0){
		return pass == admin -> get_pass();
	}
	else if(user_id <= passengers.size()){
		user_id -= 1;
		return pass == passengers[user_id] -> get_pass();
	}
	else if(user_id <= passengers.size() + drivers.size()){
		user_id -= (passengers.size() +1);
		return pass == drivers[user_id] -> get_pass();
	}
	return false;
}

int System::check_dis_code_existence(std::string code){
	if (code != ""){
		for (int i=0; i < passengers.size(); i++){
			if (passengers[i] -> take_dis_code() == code)
				return i;
		}
	}
	return -1;
}

void System::check_address_existence(std::string address){
	std::string galaxy , planet;
	address_take_apart(address , galaxy , planet);
	find_galaxy(galaxy);
	find_planet(planet , find_galaxy(galaxy));
}

void System::address_take_apart(std::string address , std::string& galaxy , std::string& planet){
	int comma_pos = address.find(",");
	galaxy = address.substr(0 , comma_pos);
	planet = address.substr(comma_pos+1);
}

int System::calculate_distance(std::string start , std::string destination ,
 std::vector <std::string>& path){
	std::string s_galaxy , s_planet , des_galaxy , des_planet;
	address_take_apart(start , s_galaxy , s_planet);
	address_take_apart(destination , des_galaxy , des_planet);
	Galaxy* start_galaxy = find_galaxy(s_galaxy);
	Planet* start_planet = find_planet(s_planet , start_galaxy);
	Galaxy* dest_galaxy = find_galaxy(des_galaxy);
	Planet* dest_planet = find_planet(des_planet , dest_galaxy);
	if (s_galaxy == des_galaxy){
		start_planet->find_path(des_planet , path);
	}
	else{
		start_planet->find_path(start_galaxy->get_root() , path);
		dest_planet->find_path(dest_galaxy->get_root() , path);
	}
	return path.size();
}

int System::calculate_cost(int distance , int vip , double too_trip){
	return distance * (1+vip-too_trip);
}

std::vector <Driver*> System::find_drivers(int vip){
	std::vector <Driver*> available_drivers;
	for (int i=0; i < drivers.size(); i++){
		if (drivers[i]->get_stat() == available){
			std::string galaxy , planet;
			address_take_apart(parts[2+vip] , galaxy , planet);
			if (drivers[i]->get_galaxy() == galaxy){
				if (drivers[i]->get_type() == vip){
					available_drivers.push_back(drivers[i]);
				}
			}
		}
	}
	return available_drivers;
}

void System::choose_req_drivers(std::vector <Driver*> available_drivers , int vip , Trip* trip){
  	for (int i=0; i< available_drivers.size(); i++){
		std::string d_location = drivers[i]->get_galaxy() + "," + drivers[i]->get_planet();
		std::vector<std::string> path;
		available_drivers[i]->set_distance(calculate_distance(d_location , parts[vip + 2] , path));
	}
  	Driver* temp;
  	for (int i=0; i < available_drivers.size(); i++){
    	for (int j=0; j< available_drivers.size(); j++){
    	 	if (available_drivers[i]->get_rate() + 10 - available_drivers[i]->get_distance() >
	        	available_drivers[j]->get_rate() + 10 - available_drivers[j]->get_distance()){
	         	temp = drivers[i];
	          	available_drivers[i] = available_drivers[j];
	          	available_drivers[j] = temp;
        	}
    	}
  	}
  int max_driver = 4;
  if (available_drivers.size() < 4)
    max_driver = available_drivers.size();
	for (int i=0; i < max_driver; i++){
		available_drivers[i]->req(trip);
	}
}

Galaxy* System::find_galaxy(std::string galaxy_name){
	for (int i=0; i < world.size(); i++){
		if (galaxy_name == world[i]->get_name())
			return world[i];
	}
	throw except("wrong galaxy");
}

Planet* System::find_planet(std::string planet_name , Galaxy* dest_galaxy){
	for (int j=0; j < dest_galaxy->get_size(); j++){
		if (planet_name == (dest_galaxy->get_planets())[j]->get_name() )
			return (dest_galaxy -> get_planets())[j];
	}
	throw except("wrong planet");
}

void System::get_command(std::string message){
	cli->get_command(message);
}

void System::take_command_apart(){
	cli->devide_command(' ');
	parts = cli -> get_command_parts();
}
std::string System::check_admin_command(){
	if (parts[1] == ACC_REGISTRATION)
		return acc_registeration_command();
	else if (parts[1] == REJ_REGISTRATION)
		return rej_registeration_command();
	else if (parts[1] == SHOW_REG_REQS)
		return show_reg_reqs();
	else if (parts[1] == LOGIN_COMMAND)
		return login_command();
	else if (parts[1] == LOGOUT_COMMAND)
		return logout_command();
	else if(parts[1] == SET_TIME_COMMAND)
		return set_time_command();
	else if(parts[1] == PASSENGER_REPORT_COMMAND)
		return passenger_report_command();
	else if(parts[1] == DRIVER_REPORT_COMMAND)
		return driver_report_command();
	else if(parts[1] == SYSTEM_REPORT_COMMAND)
		return system_report_command();
	else
		throw except("wrong command");
}

std::string System::check_run_command(){
	if (parts[1] == REGISTER_PASSENGER_COMMAND)
		return register_passenger_command();
	else if (parts[1] == REGISTER_DRIVER_COMMAND)
		return register_driver_command();
	else if (parts[1] == LOGIN_PASSENGER_COMMAND)
		return login_passenger_command();
	else if (parts[1] == LOGIN_DRIVER_COMMAND)
		return login_driver_command();
	else if (parts[1] == LOGOUT_COMMAND)
		return logout_command();
	else if(parts[1] == GET_DIS_CODE_COMMAND)
		return get_discount_code_command();
	else if(parts[1] == SET_STATUS_COMMAND)
		return set_status_command();
	else if(parts[1] == ESTIMATE_TRIP_COMMAND)
		return estimate_trip_command();
	else if(parts[1] == REQ_TRIP_COMMAND)
		return request_trip_command();
	else if(parts[1] == CANCEL_TRIP_COMMAND)
		return cancel_trip_command();
	else if(parts[1] == SHOW_TRIP_REQS_COMMAND)
		return show_trip_reqs_command();
	else if(parts[1] == ACC_TRIP_REQ_COMMAND)
		return accept_trip_req_command();
	else if(parts[1] == TRIP_STATUS_COMMAND)
		return trip_status_command();
	else if(parts[1] == ARRIVED_COMMAND)
		return arrived_command();
	else if(parts[1] == END_TRIP_COMMAND)
		return end_trip_command();
	else if(parts[1] == RATE_COMMAND)
		return rate_command();
  	else if(parts[1] == CHARGE_ACCOUNT_COMMAND)
		return charge_account_command();
  	else if(parts[1] == GET_CREDIT_COMMAND)
		return get_credit_command();
	else if(parts[1] == GET_TIME_COMMAND)
		return _time->get_time();
	else if (parts[1] == GET_STATUS_COMMAND)
		return get_status_command();
	else
		throw except("wrong command");
}

std::string System::register_passenger_command(){
	check_command_parameter_number(REGISTER_P_MAX_PARAMETERS , REGISTER_P_MIN_PARAMETERS);
	int user_id  = check_user_existence(parts[0]);
	if (user_id == -1){
		if (check_tel_singularity(parts[3])){
			Passenger* temp= new Passenger(parts[0] , parts[2] , parts[3]);
			passengers.push_back(temp);
			int dis_passenger_id = check_dis_code_existence(parts[4]);
			if (dis_passenger_id != -1 && dis_passenger_id != passengers.size()-1){
				passengers[dis_passenger_id]->increase_account(10);
				passengers[dis_passenger_id]->decrease_dis_code_credit();
				passengers[passengers.size()-1]->increase_account(10);
			}
			return "Successful.";
		}
		else{
			throw except("repeated tel");
		}
	}
	else{
		throw except("repeated username");
	}
}

std::string System::register_driver_command(){
	check_command_parameter_number(REGISTER_D_MAX_PARAMETERS , REGISTER_D_MIN_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id==-1){
		if (check_ss_number_singularity(parts[3])){
			parts[4] += '\r';
			if(check_ss_model_existence(parts[4])){
				Spaceship* ss_temp = new Spaceship(parts[3] , parts[4] , parts[5] , parts[6]);
				if (parts[7] == "VIP"){
					Driver* temp = new VIP_driver(parts[0] , parts[2] , ss_temp);
					drivers.push_back(temp);
					return "Successful.";
				}
				else if (parts[7]==""){
					Driver* temp = new Ord_driver(parts[0] , parts[2] , ss_temp);
					drivers.push_back(temp);
					return "Successful.";	
				}
				else{
					throw except("wrong parameter");
				}
			}
			else{
				throw except("ss model not exist");
			}
		}
		else{
			throw except("repeated ss number");
		}
	}
	else{
		throw except("repeated username");
	}
}

std::string System::acc_registeration_command(){
	check_command_parameter_number(ACC_REGISTRATION_PARAMETERS,ACC_REGISTRATION_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			int driver_id = check_user_existence(parts[2]);
			if (driver_id != -1){
				driver_id = driver_id - (passengers.size() + 1);
				if (drivers[driver_id] -> get_signup_status() == checking){
					drivers[driver_id] -> set_signup_status(acceptt);
					return "Successful.";
				}
				else{
					throw except("accepted");
				}
			}
			else{
				throw except("driver not found");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("Wrong access");
	}
}

std::string System::rej_registeration_command(){
	check_command_parameter_number(REJ_REGISTRATION_PARAMETERS,REJ_REGISTRATION_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			int driver_id = check_user_existence(parts[2]);
			if (driver_id != -1){
				driver_id = driver_id - (passengers.size() + 1);
				if (drivers[driver_id]-> get_signup_status() == checking){
					drivers.erase(drivers.begin()+driver_id);
					return "Successful.";
				}
				else{
					throw except("accepted");
				}
			}
			else{
				throw except("driver not found");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("Wrong access");
	}
}

std::string System::show_reg_reqs(){
	std::string temp = "";
	check_command_parameter_number(SHOW_REG_REQS_PARAMETERS , SHOW_REG_REQS_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			for (int i=0; i<drivers.size(); i++){
				if (drivers[i]->get_signup_status() == checking){
					temp = temp + drivers[i]-> print_data();
				}
			}
			return temp;
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("Wrong access");
	}
}

std::string System::login_command(){
	check_command_parameter_number(LOGIN_COMMAND_PARAMETERS, LOGIN_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (check_pass(parts[2] , user_id)){
			if (user_id == 0){
				admin -> set_status(yes);
				return "Admin, you're successfully login.";
			}
		}
		else{
			throw except("incorrect pass");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::login_passenger_command(){
	check_command_parameter_number(LOGIN_COMMAND_PARAMETERS, LOGIN_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (check_pass(parts[2] , user_id)){
			if(user_id <= passengers.size()){
				user_id -= 1;
				passengers[user_id] -> set_status(yes);
				return "successfully login.";
			}
			else{
				return "incompatible version!";
			}
		}
		else{
			throw except("incorrect pass");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::login_driver_command(){
	check_command_parameter_number(LOGIN_COMMAND_PARAMETERS, LOGIN_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (check_pass(parts[2] , user_id)){
			if(user_id > passengers.size() && user_id <= passengers.size() + drivers.size()){
				user_id -= (passengers.size() +1);
				if (drivers[user_id]->get_signup_status() == acceptt){
					drivers[user_id] -> set_status(yes);
					return "successfully login.";
				}
				else{
					throw except("not accepted");
				}
			}
			else{
				return "incompatible version!";
			}
		}
		else{
			throw except("incorrect pass");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::logout_command(){
	check_command_parameter_number(LOGOUT_COMMAND_PARAMETERS, LOGOUT_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (user_id == 0){
			admin -> set_status(no);
			return "successfully logout.";
		}
		else if(user_id <= passengers.size()){
			user_id -= 1;
			passengers[user_id] -> set_status(no);
			return "successfully logout.";
		}
		else if(user_id <= passengers.size() + drivers.size()){
			user_id -= (passengers.size() +1);
			drivers[user_id] -> set_status(no);
			return "successfully logout.";
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::get_discount_code_command(){
	check_command_parameter_number(GET_DIS_CODE_COMMAND_PARAMETERS, GET_DIS_CODE_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if(is_login(user_id)){
			user_id -= 1;
			if (passengers[user_id] -> is_code_generated() == false){
				std::string dis_code = generate_dis_code();
				passengers[user_id] ->set_code(dis_code);
			}
			return passengers[user_id] -> print_dis_code_data();
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::generate_dis_code(){
	srand(time(NULL));
	std::string code;
	while (check_dis_code_existence(code) != -1 || code.size() == 0){
		code.resize(0);
		for (int i=0; i < 5; i++){
			code.push_back((char)(rand() % 26 + 97));
		}
	}
	return code;
}

std::string System::set_status_command(){
	check_command_parameter_number(SET_STATUS_COMMAND_MAX_PARAMETERS, SET_STATUS_COMMAND_MIN_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if(is_login(user_id)){
			user_id -= (passengers.size()+1);
			if (drivers[user_id]->get_stat() != in_trip){
				if (parts[2] == "available"){
					drivers[user_id]->set_stat(available);
					std::string galaxy , planet;
					check_address_existence(parts[3]);
					address_take_apart(parts[3] , galaxy , planet);
					drivers[user_id]->set_address(galaxy , planet);
					return "successful.";
				}
				else if (parts[2] == "unavailable"){
					drivers[user_id]->set_stat(unavailable);
					return "successful.";
				}
				else{
					throw except("wrong parameter");
				}
			}
			else{
				throw except("can't change stat");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::estimate_trip_command(){
	check_command_parameter_number(parts.size() , ESTIMATE_TRIP_COMMAND_MIN_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= 1;
			int vip = (parts[2] == "VIP");
			int dis=0;
			std::vector <std::string> path;
			for (int i=2+vip; i < parts.size()-1; i++){
				dis += calculate_distance(parts[i] , parts[i+1] , path);
				path.resize(0);
			}
			passengers[user_id]->check_too_trip_status(*_time);
			int cost = calculate_cost(dis , vip , passengers[user_id]->get_too_trip());
			return std::to_string(cost) + "-" + std::to_string(dis);
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::request_trip_command(){
	check_command_parameter_number(parts.size() , REQ_TRIP_COMMAND_MIN_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= 1;
			if (passengers[user_id]->can_request()){
				int vip = (parts[2] == "VIP");
				int dis=0;
				std::vector <std::string> path;
				std::vector <std::string> addresses;
				for (int i=2+vip; i < parts.size()-1; i++){
					addresses.push_back(parts[i]);
					dis += calculate_distance(parts[i] , parts[i+1] , path);
					path.resize(0);
				}
					addresses.push_back(parts[parts.size()-1]);
					passengers[user_id]->check_too_trip_status(*_time);
					int cost = calculate_cost(dis , vip , passengers[user_id]->get_too_trip());
				if (passengers[user_id]->get_account() - cost > -10){
					Trip* temp = new Trip(addresses , vip , passengers[user_id]->get_username()
						, cost , dis , _time->get_time());
					passengers[user_id] -> set_req_status(cant);
					trips.push_back(temp);
					passengers[user_id]->add_trip(temp);
					std::vector <Driver*> available_drivers;
					available_drivers=find_drivers(vip);
					choose_req_drivers(available_drivers , vip , temp);
					if (available_drivers.size() == 0){
            			passengers[user_id]->set_req_status(can);
						throw except("no driver found");
        			}
        			return std::to_string(cost) + "-" + std::to_string(dis);
				}
				else {
					throw except("lack of money");
				}
				addresses.resize(0);
			}
			else{
				throw except("can't request");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::cancel_trip_command(){
	check_command_parameter_number(CANCEL_TRIP_COMMAND_PARAMETERS , CANCEL_TRIP_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id!=-1){
		if (is_login(user_id)){
			user_id -= 1;
			std::vector <Trip *> trips = passengers[user_id] -> get_trips();
			if (trips.size()!= 0 && trips[trips.size()-1]->get_trip_stat() == waiting){
				trips[trips.size()-1]->set_trip_stat(canceled);
				passengers[user_id] -> set_req_status(can);
				return "Successful.";
			}
			else
				throw except("no trip for cancel");
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::show_trip_reqs_command(){
	check_command_parameter_number(SHOW_TRIP_REQS_COMMAND_PARAMETERS , SHOW_TRIP_REQS_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= (passengers.size()+1);
			return "" + drivers[user_id] -> show_trip_requests();
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::accept_trip_req_command(){
	check_command_parameter_number(ACC_TRIP_REQ_COMMAND_PARAMETERS , ACC_TRIP_REQ_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= (passengers.size()+1);
			int passenger_id = check_user_existence(parts[2]);
			if (passenger_id != -1){
				passenger_id -= 1;
				if (passengers[passenger_id]->check_trip_existence(drivers[user_id])){
					drivers[user_id]->set_stat(in_trip);
					return "Successful.";
				}
				else{
					throw except("trip not exist");
				}
			}
			else{
				throw except("passenger not found");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::trip_status_command(){
	check_command_parameter_number(TRIP_STATUS_COMMAND_PARAMETERS , TRIP_STATUS_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= 1;
			return passengers[user_id]->print_last_trip();
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::arrived_command(){
	check_command_parameter_number(ARRIVED_COMMAND_PARAMETERS , ARRIVED_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id!= -1){
		if (is_login(user_id)){
			user_id -= (passengers.size()+1);
			return "Driver arrived.\n";
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::end_trip_command(){
	check_command_parameter_number(END_TRIP_COMMAND_PARAMETERS , END_TRIP_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id!=-1){
		if (is_login(user_id)){
			user_id -= (passengers.size()+1);
			std::string passenger;
			int cost = drivers[user_id]->find_end_trip(passenger , _time->get_time());
			if(cost != -1){
				int passenger_id = check_user_existence(passenger);
				passenger_id -= 1;
				passengers[passenger_id] ->decrease_account(cost);
				admin -> increase_account(cost);
				drivers[user_id] -> increase_income(cost * 0.8);
				return "Successful";
			}
			else{
				throw except("all ended");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::rate_command(){
	check_command_parameter_number(RATE_COMMAND_PARAMETERS , RATE_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= 1;
			if (atoi(parts[2].c_str()) < 10 && atoi(parts[2].c_str()) > 1){
				std::string driver_username = passengers[user_id] ->rate( atoi(parts[2].c_str()));
		        int driver_id = check_user_existence(driver_username);
		        driver_id -= (passengers.size()+1);
		        drivers[driver_id]->update_rate( atoi(parts[2].c_str()));
		        return "Successful";
			}
			else{
				throw except("wrong rate");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::charge_account_command(){
  check_command_parameter_number(CHARGE_ACCOUNT_COMMAND_PARAMETERS, CHARGE_ACCOUNT_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			user_id -= 1;
			passengers[user_id]->increase_account( atoi(parts[2].c_str()) );
			return "Successful";
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::get_credit_command(){
  check_command_parameter_number(GET_CREDIT_COMMAND_PARAMETERS , GET_CREDIT_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id != -1){
		if (is_login(user_id)){
			if (0 < user_id && user_id < passengers.size() +1){
				user_id -= 1;
	      		return std::to_string(passengers[user_id]->get_account()) + "\n";
	      	}
	      	else if (user_id > passengers.size()){
	      		user_id-=(passengers.size()+1);
	      		return std::to_string(drivers[user_id]->get_account()) + "\n";
	      	}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("not signup");
	}
}

std::string System::set_time_command(){
  check_command_parameter_number(SET_TIME_COMMAND_PARAMETERS , SET_TIME_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			if (_time->get_day() - Time(parts[2]).get_day() > 1){
				for (int i=0; i < drivers.size(); i++){
					drivers[i]->increase_account(drivers[i]->get_income());
					drivers[i]->increase_income(-drivers[i]->get_income());
				}
			}
			Snapshot* temp= new Snapshot(_time , account , trips.size() , drivers.size()
				, passengers.size());
			snapshots.push_back(temp);
			_time->set_time(parts[2]);
			return "Successful";
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("wrong access");
	}
}

std::string System::passenger_report_command(){
	check_command_parameter_number(PASSENGER_REPORT_COMMAND_PARAMETERS , PASSENGER_REPORT_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			int passenger_id = check_user_existence(parts[2]);
			passenger_id -= 1;
			if (0<=passenger_id && passenger_id < passengers.size()){
				return std::to_string(passengers[passenger_id]->get_account()) + "\n";
			}
			else{
				throw except("passenger not found");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("wrong access");
	}
}

std::string System::driver_report_command(){
	check_command_parameter_number(DRIVER_REPORT_COMMAND_PARAMETERS , DRIVER_REPORT_COMMAND_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			int driver_id = check_user_existence(parts[2]);
			driver_id -= (passengers.size()+1);
			Time temp(parts[3]);
			Time start_time = temp;
			Time tempo(parts[4]);
			Time end_time = temp;
			if (0<=driver_id && driver_id < drivers.size()){
				std::vector<Trip*> trips = drivers[driver_id] -> get_trips();
				int trips_count =0 , total_income =0 , total_rate = 0;
				for (int i=0; i < trips.size(); i++){
					if ((start_time < trips[i]->get_start_time()) && (trips[i]->get_start_time() < end_time)){
						trips_count++;
						total_income += trips[i]->get_cost();
						total_rate += trips[i]->get_rate();
					}
				}
				return std::to_string(trips_count) + " " + std::to_string(total_income) + " " + std::to_string(total_rate) + "\n";
			}
			else{
				throw except("driver not found");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("wrong access");
	}
}

std::string System::system_report_command(){
	check_command_parameter_number(SYSTEM_REPORT_COMMAND_MIN_PARAMETERS , SYSTEM_REPORT_COMMAND_MAX_PARAMETERS);
	int user_id = check_user_existence(parts[0]);
	if (user_id == 0){
		if (is_login(user_id)){
			if(parts.size() == 2){
				return std::to_string(account) + " " + std::to_string(trips.size()) + " " + std::to_string(drivers.size()) +
				 	" " + std::to_string(passengers.size()) + "\n";
			}
			else if (parts.size() == 4){
				Time start_time(parts[2]);
				Time end_time(parts[3]);
				int first_shot_andis = 0 , last_shot_andis =0;
				for (int i=0; i< snapshots.size();i++){
					if (start_time < snapshots[i]->get_time()){
						first_shot_andis = i;
						break;
					}
				}
				for (int i=0; i< snapshots.size();i++){
					if (end_time < snapshots[i]->get_time()){
						last_shot_andis = i-1;
						break;
					}
				}
				int credit = snapshots[last_shot_andis]->get_credit() - snapshots[first_shot_andis]->get_credit();
				int t_cnt = snapshots[last_shot_andis]->get_t_cnt() - snapshots[first_shot_andis]->get_t_cnt();
				int d_cnt = snapshots[last_shot_andis]->get_d_cnt() - snapshots[first_shot_andis]->get_d_cnt();
				int p_cnt = snapshots[last_shot_andis]->get_p_cnt() - snapshots[first_shot_andis]->get_p_cnt();
				return std::to_string(credit) + " " + std::to_string(t_cnt) + " " + std::to_string(d_cnt) + " " + std::to_string(p_cnt) + "\n";
			}
			else{
				throw except("command parameters number");
			}
		}
		else{
			throw except("not login");
		}
	}
	else{
		throw except("wrong access");
	}
}

std::string System::get_status_command(){
	int user_id = check_user_existence(parts[0]);
	user_id -= (passengers.size() + 1);
	return drivers[user_id]->get_a_status();
}