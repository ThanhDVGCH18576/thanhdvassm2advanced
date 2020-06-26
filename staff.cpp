#include"../include/staff.h"

using namespace std;

Staff::Staff(const string &name)
{
    this->name = name;

}

string Staff::get_name() const{
    return name;
}

int Staff::get_days()const{
    return days;
}


void Staff::show_info()const{
    
}