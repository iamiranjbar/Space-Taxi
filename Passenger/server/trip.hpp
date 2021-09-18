#ifndef TRIP_HPP
#define TRIP_HPP

#include <iostream>
#include <vector>
#include "time.hpp"

enum status{waiting , accepted , canceled};

class Trip{
public:
	Trip(std::vector <std::string> _addresses , int _vip , std::string _pas_us , int _cost ,
		int _distance , std::string _time) : addresses(_addresses) , vip(_vip) ,
		passenger_username(_pas_us) , trip_stat(waiting) , cost(_cost) ,
		distance(_distance) , ended(false) , rated(false){start_time.set_time(_time);}
	status get_trip_stat(){return trip_stat;}
	void set_trip_stat(status _stat){trip_stat = _stat;}
	std::string print_data();
	bool is_ended(){return ended;}
	void set_ended(std::string _time);
	std::string last_address(){return addresses[addresses.size()-1];}
	int get_cost(){return cost;}
	std::string get_passenger_username(){return passenger_username;}
	bool is_rated(){return rated;}
	void set_rated(){rated = true;}
	void set_driver_details(std::string _username ,std::string _address ,
		std::string model , std::string color);
	std::string get_d_username(){return driver_username;}
	std::string get_d_address(){return driver_address;}
	std::string get_ss_model(){return ss_model;}
	std::string get_ss_color(){return ss_color;}
	Time get_start_time(){return start_time;}
	Time get_end_time(){return end_time;}
	void set_rate(int _rate){rate = _rate;}
	int get_rate(){return rate;}
private:
	std::vector <std::string> addresses;
	int vip;
	int cost;
	int distance;
	status trip_stat;
	std::string passenger_username;
	bool ended;
	bool rated;
	int rate;
	std::string driver_username;
	std::string driver_address;
	std::string ss_model;
	std::string ss_color;
	Time start_time;
	Time end_time;
};
#endif
