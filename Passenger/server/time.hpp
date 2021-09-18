#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
#include "exception.hpp"

class Time{
public:
  Time() :  day(1) , hour(0) , minute(0) , second(0){}
  Time(std::string _time);
  Time(int _day , int _hour  , int _minute , int _second): day(_day) ,
    hour(_hour) , minute(_minute) , second(_second){}
  void set_time(std::string time);
  std::string get_time(){return (std::to_string(day)+"-"+std::to_string(hour)+":"+std::to_string(minute)+":"+std::to_string(second));}
  Time operator-(const Time& date)const;
	Time operator+(const Time& date) const;
  bool operator==(const Time &t) const;
  bool operator<(const Time &t) const;
  int get_day()const{return day;}
  int get_minute()const{return minute;}
  int get_hour()const{return hour;}
  int get_second() const{return second;}
private:
  int day;
  int hour;
  int minute;
  int second;
};

#endif
