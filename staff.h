#ifndef _STAFF_H_
#define _STAFF_H_
#include<iostream>
#include<string>

using namespace std;

class Staff 
{
    private:
    string name;
    int days;
    public:
    Staff(const string &name);
    string get_name() const;
    int get_days() const;
    void show_info() const;
    

    
};


#endif

