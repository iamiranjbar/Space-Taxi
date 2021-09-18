#ifndef DIS_CODE_HPP
#define DIS_CODE_HPP

class Dis_code{
public:
	Dis_code() : is_generated(false){}
	Dis_code(std::string _code) : code(_code) , available_count(5) , is_generated(true){}
	bool get_status(){return is_generated;}
	std::string get_code(){return code;}
	std::string print_data();
	void decrease_credit();
private:
	std::string code;
	int available_count;
	bool is_generated;
};

#endif