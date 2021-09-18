#ifndef SNAPSHOT_HPP
#define SNAPSHOT_HPP

#include "time.hpp"
#include <iostream>

class Snapshot{
public:
  Snapshot(Time* t , int credit , int t_cnt , int d_cnt , int p_cnt) :
    shot_time(t) , system_credit(credit) , trips_count(t_cnt) , drivers_count(d_cnt) ,
    passengers_count(p_cnt){}
  Time get_time(){return *shot_time;}
  int get_credit(){return system_credit;}
  int get_t_cnt(){return trips_count;}
  int get_d_cnt(){return drivers_count;}
  int get_p_cnt(){return passengers_count;}
private:
  Time* shot_time;
  int system_credit;
  int trips_count;
  int drivers_count;
  int passengers_count;
};
#endif
