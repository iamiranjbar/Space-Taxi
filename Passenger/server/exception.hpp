#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

class except{
public:
	except(std::string _type) : type(_type){}
	std::string get_type(){return type;}
private:
	std::string type;
};

#endif
