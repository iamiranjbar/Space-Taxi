#include "spaceship.hpp"
#include <iostream>

std::string Spaceship::print_data(){
	std::string temp = number + " " + model + " " + pro_year + " " + color + " ";
	return temp;
}