#ifndef  SPACESHIP_HPP
#define SPACESHIP_HPP

#include <iostream>

class Spaceship{
public:
	Spaceship(std::string _number ,std::string _model ,std::string _pro_year ,
		std::string _color) : number(_number) , model(_model), pro_year(_pro_year)
		, color(_color){}
	std::string get_number(){return number;}
	std::string print_data();
	std::string get_ss_model(){return model;}
	std::string get_ss_color(){return color;}
private:
	std::string number;
	std::string model;
	std::string pro_year;
	std::string color;
};

#endif
