#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include "user.hpp"
#include "CLI.hpp"
#include "data.hpp"
#include <iostream>
#include <vector>
#include "galaxy.hpp"
#include "planet.hpp"
#include "trip.hpp"
#include "exception.hpp"
#include "time.hpp"
#include "snapshot.hpp"

class System{
public:
	System();
	~System();
	int check_user_existence(std::string username);
	bool is_login(int User_id);
	void check_command_parameter_number(int max_para , int min_para);
	bool check_tel_singularity(std::string tel);
	bool check_ss_number_singularity(std::string ss_number);
	bool check_ss_model_existence(std::string ss);
	bool check_pass(std::string pass, int user_id);
	int check_dis_code_existence(std::string code);
	std::string generate_dis_code();
	void check_address_existence(std::string address);
	void address_take_apart(std::string address , std::string& galaxy , std::string& planet);
	int calculate_distance(std::string start , std::string destination , std::vector <std::string>& path);
	int calculate_cost(int distance , int vip , double too_trip);
	std::vector <Driver*> find_drivers(int vip);
	void choose_req_drivers(std::vector <Driver*> available_drivers , int vip , Trip* trip);
	Galaxy* find_galaxy(std::string galaxy_name);
	Planet* find_planet(std::string planet_name , Galaxy* dest_galaxy);
	void get_command(std::string message);
	void take_command_apart();
	std::string check_admin_command();
	std::string check_run_command();
	std::string register_passenger_command();
	std::string register_driver_command();
	std::string acc_registeration_command();
	std::string rej_registeration_command();
	std::string show_reg_reqs();
	std::string login_command();
	std::string login_passenger_command();
	std::string login_driver_command();
	std::string logout_command();
	std::string get_discount_code_command();
	std::string set_status_command();
	std::string estimate_trip_command();
	std::string request_trip_command();
	std::string cancel_trip_command();
	std::string show_trip_reqs_command();
	std::string accept_trip_req_command();
	std::string trip_status_command();
	std::string arrived_command();
	std::string end_trip_command();
	std::string rate_command();
	std::string charge_account_command();
	std::string get_credit_command();
	std::string set_time_command();
	std::string passenger_report_command();
	std::string driver_report_command();
	std::string system_report_command();
	std::string get_status_command();
private:
	std::vector <std::string> parts;
	std::vector <Galaxy*> world;
	std::vector <Passenger*> passengers;
	std::vector <Driver*> drivers;
	User* admin;
	CLI* cli;
	Data* data;
	int account;
	std::vector<Trip*> trips;
	Time* _time;
	std::vector <Snapshot*> snapshots;
};

#endif
