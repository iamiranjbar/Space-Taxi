#include <iostream>
#include "dis_code.hpp"

std::string Dis_code::print_data(){
	return code + " " + std::to_string(available_count) + "\n";
}

void Dis_code::decrease_credit(){
	available_count--;
}