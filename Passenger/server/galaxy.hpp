#ifndef GALAXY_HPP
#define GALAXY_HPP

#include <iostream>
#include <vector>
#include "planet.hpp"	

class Galaxy{
public:
	Galaxy(std::string _name) : name(_name){}
	void add_planet(Planet* p);
	Planet* check_planet_existence(std::string _name);
	std::string get_name(){return name;}
	std::vector <Planet*> get_planets(){return planets;}
	int get_size(){return planets.size();}
	std::string get_root();
private:
	std::string name;
	std::vector <Planet*> planets;
};

#endif