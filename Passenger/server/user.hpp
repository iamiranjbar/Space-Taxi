#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <vector>
#include <string>
#include "spaceship.hpp"
#include "dis_code.hpp"
#include "trip.hpp"

enum login_status{yes , no};
enum driver_signup_status{acceptt , checking};
enum driver_status{available , unavailable , in_trip};
enum passenger_can_req_status{can , cant};

class Driver;

class User{
public:
	User(std::string _username , std::string _pass) : username(_username) , pass(_pass)
		, is_logged_in(no) , account(0){}
	std::string get_username(){return username;}
	std::string get_pass(){return pass;}
	login_status get_status(){return is_logged_in;}
	void set_status(login_status stat){is_logged_in = stat;}
	std::vector <Trip *> get_trips(){return trips;}
	void increase_account(int amount);
	void decrease_account(int amount);
	int get_account(){return account;}
	void address_take_apart(std::string address , std::string& galaxy , std::string& planet);
protected:
	std::string username;
	std::string pass;
	login_status is_logged_in;
	int account;
	std::vector <Trip*> trips;
};


class Passenger : public User{
public:
	Passenger(std::string _username , std::string _pass , std::string _phone_number) :
		User(_username , _pass) , phone_number(_phone_number) , can_req(can)
		, too_trip(0){code = new Dis_code;}
	std::string get_phone_number(){return phone_number;}
	bool is_code_generated();
	void set_code(std::string _code);
	std::string take_dis_code(){return code->get_code();}
	std::string print_dis_code_data();
	void decrease_dis_code_credit();
	void set_req_status(passenger_can_req_status _can_req){can_req = _can_req;}
	bool can_request();
	void add_trip(Trip* trip);
	void cancel_trip();
	bool check_trip_existence(Driver* driver);
	std::string print_last_trip();
	std::string rate(int _rate);
	void check_too_trip_status(Time now);
	double get_too_trip(){return too_trip;}
private:
	Dis_code* code;
	std::string phone_number;
	passenger_can_req_status can_req;
	double too_trip;
};

class Driver : public User{
public:
	Driver(std::string _username , std::string _pass , Spaceship* ss) :
		User(_username , _pass) , spaceship(ss) , signup_status(checking) , stat(unavailable) ,
		rate(0) , rated_trip(0) , distance(0){}
	std::string get_ss_number();
	driver_signup_status get_signup_status(){return signup_status;}
	void set_signup_status(driver_signup_status stat){signup_status = stat;}
	std::string print_data();
	driver_status get_stat(){return stat;}
	void set_stat(driver_status _stat){stat = _stat;}
	void set_address(std::string _galaxy , std::string _planet);
	std::string get_galaxy(){return galaxy;}
	std::string get_planet(){return planet;}
	Spaceship* get_spaceship(){return spaceship;}
	virtual int get_type() = 0;
	virtual std::string print_vip() = 0;
	int get_rate(){return rate;}
	int get_distance(){return distance;}
	void set_distance(int _dis){distance = _dis;}
	void req(Trip* trip);
	std::string show_trip_requests();
	int find_end_trip(std::string &passenger , std::string _time);
	void update_rate(int _rate);
	std::string get_ss_model();
	std::string get_ss_color();
	int get_income(){return income;}
	void increase_income(int amount);
	std::string get_a_status();
private:
	Spaceship* spaceship;
	std::string address;
	driver_signup_status signup_status;
	driver_status stat;
	std::string galaxy;
	std::string planet;
	int rate;
	int rated_trip;
	int distance;
	int income;
};

class Ord_driver : public Driver{
public:
	Ord_driver(std::string _username , std::string _pass , Spaceship* ss) :
		Driver(_username , _pass , ss){}
	std::string print_vip();
	int get_type(){return 0;}
};

class VIP_driver : public Driver{
public:
	VIP_driver(std::string _username , std::string _pass , Spaceship* ss) :
		Driver(_username , _pass , ss){}
	std::string print_vip();
	int get_type(){return 1;}
};

#endif
