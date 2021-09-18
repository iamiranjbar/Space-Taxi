#include "galaxy.hpp"

void Galaxy::add_planet(Planet* p){
	planets.push_back(p);
}

Planet* Galaxy::check_planet_existence(std::string _name){
	for (int i=0; i < planets.size(); i++){
		if (_name == planets[i]-> get_name()){
			return planets[i];
		}
	}
	return NULL;
}

std::string Galaxy::get_root(){
	return planets[0] -> get_name();
}