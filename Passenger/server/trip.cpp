#include "trip.hpp"

std::string Trip::print_data(){
	std::string temp;
	temp = passenger_username + " ";
	for (int i=0; i < addresses.size(); i++){
		temp = temp + addresses[i] + " ";
	}
	return temp + std::to_string(cost) + " " + std::to_string(distance) + "\n";
}

void Trip::set_driver_details(std::string _username ,std::string _address ,
	std::string model , std::string color){
	driver_username = _username;
	driver_address = _address;
	ss_model = model;
	ss_color = color;
}

void Trip::set_ended(std::string _time){
	end_time.set_time(_time);
	ended =true;
}
