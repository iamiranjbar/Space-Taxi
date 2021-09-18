#include "data.hpp"
#include <string>

Data::Data(std::string vehicles_file , std::string topology_file){
	read_vehicles_file(vehicles_file);
	read_topology_file(topology_file);
}

Data::~Data(){
	std::vector <Planet*> temp;
	for (int i=0; i < world.size(); i++){
		temp = world[i]->get_planets();
		for (int j=0; j < temp.size(); j++)
			delete temp[j];
		delete world[i];
	}
}

bool Data::read_vehicles_file(std::string file_name){
	std::ifstream data(file_name.c_str());
	if (!data){
	std::cerr << "can't open file [" << file_name << "]\n";
	  return false;
  	}
  	read_vehicles_data(data);
	data.close();
  	return true;
}

void Data::read_vehicles_data(std::ifstream& file_data){
	std::string line;
	while (file_data.tellg()!=EOF){
		getline(file_data,line);
		// line.erase(line.end());
		spaceship_models.push_back(line);
	}
}

bool Data::read_topology_file(std::string file_name){
	std::ifstream data(file_name.c_str());
	if (!data){
	std::cerr << "can't open file [" << file_name << "]\n";
	  return false;
  	}
  	read_topology_data(data);
	data.close();
  	return true;
}

void Data::read_topology_data(std::ifstream& file_data){
	std::string galaxy_name , planet_name;
	int galaxy_number , planets_num , neighbors_num;
	std::vector <Planet*> planets;
	Galaxy* g_temp;
	Planet* p_temp;
	Planet* n_temp;
	file_data >> galaxy_number;
	for (int i=0; i < galaxy_number; i++){
		file_data >> galaxy_name >> planets_num;
		g_temp = new Galaxy(galaxy_name);
		for (int j=0; j < planets_num; j++){
			file_data >> planet_name >> neighbors_num;
			p_temp = g_temp->check_planet_existence(planet_name);
			if (p_temp == NULL){
				p_temp = new Planet(planet_name);
			}
			for (int k=0; k < neighbors_num; k++){
				file_data >> planet_name;
				n_temp = g_temp->check_planet_existence(planet_name);
				if (n_temp == NULL){
					n_temp = new Planet(planet_name);
				}
				// if (!n_temp->has_this_neighbor(p_temp)){
				p_temp->add_neighbor(n_temp);
				// }
			} 
			g_temp->add_planet(p_temp);
		}
		world.push_back(g_temp);
	}
}

void Data::print_topology_file(){
	for (int i=0; i < world.size(); i++){
		std::cout << world[i] -> get_name() << ":" << std::endl;
		std::vector <Planet*> temp , nei_temp;
		temp = world[i]->get_planets();
		for (int k=0; k < temp.size(); k++){
			std::cout <<"\t" <<temp[k] -> get_name() << ":" << std::endl;
			nei_temp = temp[k] ->get_neighbors();
			for (int j=0; j < nei_temp.size(); j++){
				std::cout <<"\t\t" <<nei_temp[j] -> get_name() << std::endl;
			}
		}
	}
}

bool Data::check_ss_model_existence(std::string ss_model){
	for (int i=0; i < spaceship_models.size(); i++){
		if (ss_model == spaceship_models[i]){
			return true;
		}
	}
	return false;
}