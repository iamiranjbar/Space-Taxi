#include "user.hpp"
#include <iostream>
#include "trip.hpp"

void User::address_take_apart(std::string address , std::string& galaxy , std::string& planet){
	int comma_pos = address.find(",");
	galaxy = address.substr(0 , comma_pos);
	planet = address.substr(comma_pos+1);
}

std::string Driver::get_ss_number(){
	return spaceship-> get_number();
}

std::string Driver::print_data(){ 
	std::string temp , tempo;
	temp = spaceship -> print_data();
	tempo = print_vip();
	return username + " " + temp + tempo ;
}

std::string Ord_driver::print_vip(){
	return "\n";
}

std::string VIP_driver::print_vip(){
	return "VIP\n";
}

bool Passenger::is_code_generated(){
	return code -> get_status();
}

void Passenger::set_code(std::string _code){
	delete code;
	code = new Dis_code(_code);
}

std::string Passenger::print_dis_code_data(){
	return code -> print_data();
}

void User::increase_account(int amount){
	account += amount;
}

void User::decrease_account(int amount){
	account -= amount;
}

void Passenger::decrease_dis_code_credit(){
	code -> decrease_credit();
}

void Driver::set_address(std::string _galaxy , std::string _planet){
	galaxy = _galaxy;
	planet = _planet;
}

bool Passenger::can_request(){
	if (can_req == can){
		return true;
	}
	return false;
}

void Driver::req(Trip* trip){
	trips.push_back(trip);
}

void Passenger::add_trip(Trip* trip){
	trips.push_back(trip);
}

void Passenger::cancel_trip(){
	trips.erase(trips.end());
}

std::string Driver::show_trip_requests(){
	std::string temp = " ";
	for (int i=0; i < trips.size(); i++){
		if (trips[i] -> get_trip_stat() == waiting){
			temp = temp + trips[i] -> print_data();
		}
	}
	return temp;
}

bool Passenger::check_trip_existence(Driver* driver){
	int trip_andis = -1;
	for (int i=0; i < trips.size(); i++){
		if (trips[i]->get_trip_stat() == waiting)
			trip_andis = i;
	}
	if (trip_andis == -1)
		return false;
	trips[trip_andis] ->set_trip_stat(accepted);
	trips[trip_andis] -> set_driver_details(driver->get_username() ,
		driver->get_galaxy() + "," + driver->get_planet() ,
		driver->get_ss_model() , driver->get_ss_color());
	return true;
}

std::string Passenger::print_last_trip(){
	for (int i=trips.size()-1; i >= 0; i--){
		if (trips[i]->get_trip_stat() == waiting){
			return "waiting\n";
			
		}
		else if(trips[i]->get_trip_stat() == accepted){
			return "accepted " + trips[i]->get_d_username() + " "
				+ trips[i]->get_d_address() + " " + trips[i]->get_ss_model()
				+ " " + trips[i]->get_ss_color() + "\n";
		}
	}
}

int Driver::find_end_trip(std::string& passenger , std::string _time){
	for (int i=trips.size()-1; i >= 0; i--){
		if (trips[i]->get_trip_stat() == accepted && (!trips[i] -> is_ended())){
			set_stat(available);
			std::string galaxy , planet;
			address_take_apart(trips[i]->last_address() , galaxy , planet);
			set_address(galaxy , planet);
			trips[i]->set_ended(_time);
			passenger = trips[i]->get_passenger_username();
			return trips[i]->get_cost();
		}
	}
	return -1;
}

 std::string Passenger::rate(int _rate){
	for (int i=trips.size()-1; i >=0; i--){
		if (trips[i]->get_trip_stat() == accepted &&  !trips[i]->is_rated()){
			set_req_status(can);
			trips[i]->set_rate(_rate);
			trips[i]->set_rated();
			return trips[i]->get_d_username();
		}
	}
}

void Driver::update_rate(int _rate){
	rate *= rated_trip;
	rated_trip++;
	rate += _rate;
	rate /= rated_trip;
}

std::string Driver::get_ss_model(){
	return spaceship->get_ss_model();
}

std::string Driver::get_ss_color(){
	return spaceship->get_ss_color();
}

void Passenger::check_too_trip_status(Time now){
	if (trips.size() < 3)
		return;
	if (too_trip == 0){
		Time temp = (trips[trips.size()-1]->get_start_time() - trips[trips.size()-2]->get_end_time())+
			(trips[trips.size()-2]->get_start_time() - trips[trips.size()-3]->get_end_time());
		if (temp < Time("1-00:00:00"))
			too_trip = 0.5;
	}
	else {
		Time temp= now - trips[trips.size()-1] -> get_end_time();
		if (Time("2-00:00:00") < temp)
			too_trip = 0;
	}
}

void Driver::increase_income(int amount){
	income += amount;
}

std::string Driver::get_a_status(){
	if (stat == unavailable){
		return "unavailable";
	}
	else if (stat == available){
		return "available in " + galaxy + ":" + planet;
	}
	else if(stat == in_trip){
		return "in_trip";
	}
}