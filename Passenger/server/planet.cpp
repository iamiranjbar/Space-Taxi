#include "planet.hpp"

bool Planet::has_this_neighbor(Planet* p){
	for (int i=0; i < neighbors.size(); i++)
		if (p->get_name() == neighbors[i] -> get_name())
			return true;
	return false;
}

void Planet::add_neighbor(Planet* p){
	neighbors.push_back(p);
}

void Planet::erase_neighbor(Planet* p){
	for (int i=0; i < neighbors.size(); i++){
		if (p->get_name() == neighbors[i] -> get_name())
			neighbors.erase(neighbors.begin()+i);
	}
}

void Planet::find_path(std::string des_planet , std::vector <std::string>& path){
	if (name == des_planet){
		return;
	}
	for (int i=0; i < neighbors.size(); i++){
		if (neighbors[i] -> path_existence(des_planet , name)){
			neighbors[i]->find_path(des_planet , path);
			path.push_back(name);
			return;
		}
	}
}

bool Planet::path_existence(std::string des_planet , std::string before_in_path){
	if (name == des_planet)
		return true;
	for (int i=0; i < neighbors.size(); i++){
		if (neighbors[i]->get_name() != before_in_path){
			return neighbors[i] -> path_existence(des_planet , name);
		}
	}
	return false;
}