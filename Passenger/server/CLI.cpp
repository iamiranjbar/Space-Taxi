#include "CLI.hpp"
#include <vector>

#define ZERO 0

void CLI::get_command(std::string message){
	command = message;
}

void CLI::devide_command(char delimeter){
	std::vector <std::string> result;
	std::string token;
	for(int i=0; i<command.length(); i++)
		if(command[i] != delimeter)
			token += command[i];
		else if(token.length()) {
			result.push_back(token);
			token = "";
		}
	if(token.length())
		result.push_back(token);
	command_parts = result;
}
