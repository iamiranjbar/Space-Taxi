#ifndef PLANET_HPP
#define PLANET_HPP 

#include <iostream>
#include <vector>

class Planet{
public:
	Planet(std::string _name) :	name(_name){}
	std::string get_name(){return name;}
	bool has_this_neighbor(Planet* p);
	void add_neighbor(Planet* p);
	void erase_neighbor(Planet* p);
	std::vector <Planet*> get_neighbors(){return neighbors;}
	void find_path(std::string des_planet , std::vector <std::string>& path);
	bool path_existence(std::string des_planet , std::string before_in_path);
private:
	std::string name;
	std::vector <Planet*> neighbors;
};

#endif