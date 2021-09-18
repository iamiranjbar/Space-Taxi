#ifndef  DATA_HPP
#define DATA_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include "galaxy.hpp"

class Data{
public:
	Data(std::string vehicles_file , std::string topology_file);
	~Data();
	bool read_vehicles_file(std::string file_name);
	void read_vehicles_data(std::ifstream&file_data);
	bool read_topology_file(std::string file_name);
	void read_topology_data(std::ifstream&file_data);
	void print_topology_file();
	bool check_ss_model_existence(std::string ss_model);
	std::vector <Galaxy*> get_world(){return world;}
private:
	std::vector <std::string> spaceship_models;
	std::vector <Galaxy*> world;
};

#endif