#include "time.hpp"
#include <iostream>
#include <cstdlib>
#include "exception.hpp"

Time::Time(std::string _time){
	day = 0;
	hour = 0;
	minute = 0;
	second = 0;
	this->set_time(_time);
}

void Time::set_time(std::string _time){
  int _day=0 , _hour=0 , _minute=0 , _second=0;
  int unders_loc = _time.find("-");
  _day = atoi (_time.substr(0 , unders_loc).c_str());
  int dcolon_loc = _time.find(":");
  _hour = atoi (_time.substr(unders_loc+1 , dcolon_loc).c_str());
  int dcolon2_loc = _time.find(":" , dcolon_loc+1);
  _minute = atoi (_time.substr(dcolon_loc+1 , dcolon2_loc).c_str());
  _second = atoi (_time.substr(dcolon2_loc+1).c_str());
  if ( (0 < _day && _day < 32) && (-1 < _hour && _hour < 24 ) && (-1 < _minute && _minute < 60)
    && (-1 < _second && _second < 60)){
      if(_day < day)
        throw except("back to the past");
      if (_hour < hour)
        throw except("back to the past");
      if (_minute < minute)
        throw except("back to the past");
      if (_second < second)
        throw except("back to the past");
        day = _day;
        hour = _hour;
        minute = _minute;
        second = _second;
    }
  else{
    throw except("wrong time format");
  }
}

Time Time::operator+(const Time& date)const{
	int s = second + date.second;
	int m = minute + date.minute;
	int h = hour + date.hour;
	int d = day + date.day;
	if (s > 59){
		m++;
		s = s - 60;
	}
	if (m > 59){
		h++;
		m = m - 60;
	}
	if (h > 23){
		d++;
		h = h - 24;
	}
	return Time(d, h, m, s);
}

Time Time::operator-(const Time& date) const{
	int s = second - date.second;
	int m = minute - date.minute;
	int h = hour - date.hour;
	int d = day - date.day;
	if (s < 0){
		m--;
		s = 60 + s;
	}
	if (m < 0){
		h--;
		m = 60 + m;
	}
	if (h < 0){
		d--;
		h = 24 + h;
	}
	return Time(d, h, m, s);
}

bool Time::operator==(const Time &t) const{
  return (day == t.get_day()) && (hour== t.get_hour()) && (minute == t.get_minute())
    && (second == t.get_second());
}

bool Time::operator<(const Time &t)const{
  if(day < t.get_day())
    return true;
  if (hour < t.get_hour())
    return true;
  if (minute < t.get_minute())
    return true;
  if (second < t.get_second())
    return true;
  return false;
}
