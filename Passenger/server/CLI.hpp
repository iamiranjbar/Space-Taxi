#ifndef CLI_HPP
#define CLI_HPP

#include <iostream>
#include <vector>

class CLI{
public:
	void get_command(std::string message);
	void devide_command(char delimeter);
	std::vector<std::string> get_command_parts(){return command_parts;}
private:
	std::string command;
	std::vector <std::string> command_parts;
};

#endif