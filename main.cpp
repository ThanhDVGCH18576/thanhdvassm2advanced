#include <iostream>
#include"../include/approver.h"
#include"../include/staff.h"

using namespace std;

int main(int argc, char *argv[])
{
	Supervisor *sup_days = new Supervisor("Thanh");
	Manager *man_days = new Manager("Nguyen");
	Director *direct_days = new Director("Hung");


	sup_days->set_next(man_days);
	man_days->set_next(direct_days);



	Supervisor *sale_sup_days = new Supervisor("quocanh");
	sale_sup_days->set_next(direct_days);

	Staff paul("", "");
	Staff george("", "");


	sup_days->approver(paul);

	delete sup_days;
	delete man_days;
	delete direct_days;

}