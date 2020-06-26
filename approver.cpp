#include"../include/approver.h"
#include<iostream>
#include<string>

using namespace std;
Approver::Approver(const string &name){
    this->name = name;
    next_approver = NULL;
}

bool Approver::decide() const
{
    
    cout << "Enter the number of holidays: ";
    int numberdays;
    cin >> numberdays;
    return numberdays;

}

void Approver::set_next(Approver *next)
{
    next_approver = next;
}

void Approver::inform_staff(const Staff &person, const string days_name) const
{
    cout << "  " << person.get_name() << "   " << days_name;
}

Supervisor::Supervisor(const string &name) : Approver(name)
{

}


void Supervisor::approver(Staff &person)
{
    
    cout << "Approver: " << name << endl;
    cout << "Check some holidays!" << person.get_name();
    
    if (this->decide() == true)
    {
        
        if (next_approver != NULL)
        {
            next_approver->approver(person);
        }
    }
    else
    {
        inform_staff(person, "OK");
    }
}


Manager::Manager(const string &name) : Approver(name)
{

}

void Manager::approver(Staff &person)
{
    cout << " " << name << endl;
    cout << " " << person.get_name();
    
    if (this->decide() == true)
    {
        
        if (next_approver != NULL)
        {
            next_approver->approver(person);
        }
    }
    else
        inform_staff(person, "");
}

Director::Director(const string &name) : Approver (name)
{
}
void Director::approver(Staff &person)
{
    cout << "" << name << endl;
    cout << "" << person.get_name();
   
    if (this->decide() == true)
    {
        
    cout << "You approver!" << endl;
    }
    else
        inform_staff(person, "");
}

