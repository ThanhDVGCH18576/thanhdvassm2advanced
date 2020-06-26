#ifndef _APPROVER_H_
#define _APPROVER_H_
#include<iostream>
#include<string>

#include"./staff.h"

using namespace std;

class Approver

{
protected:
    string name;
    Approver *next_approver;
public:
    Approver(const string &name);
    virtual void approver(Staff &person);
    bool decide() const;
    void set_next(Approver *next);
    void inform_staff(const Staff &person, const string days_name) const;


};

class Supervisor : public Approver
{
public:
    Supervisor(const string &name);
    void approver(Staff &person);


};

class Manager : public Approver
{
public:
    Manager(const string &name);
    void approver(Staff &person);


};

class Director : public Approver
{
public:
    Director(const string &name);
    void approver(Staff &person);

};


#endif