/*1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.*/

#include<iostream>

using namespace std;

class Employ{
	public : 
			int salary;
			char company[100];
			void print1(){
			
			cout<<"Salary is = "<<endl;
			cin>>salary;
			cout<<"Company Name is = "<<endl;
			cin>>company;
			
			cout<<salary<<endl;
			cout<<company<<endl;
		}
};

class Manager
{
	public :
			int salary_manager;
			int staff;
			char companyname_m[100];
				void print2(){
			cout<<"Salary_M is = "<<endl;
			cin>>salary_manager;
			cout<<"STAFF = "<<endl;
			cin>>staff;
			cout<<"Company Name is = " <<endl;
			cin>>companyname_m;
			
			cout<<salary_manager<<endl;
			cout<<staff<<endl;
			cout<<companyname_m<<endl;
		}
			
};
class Admin : public Manager,public Employ
{
	public :
			char can_terminate[100];
				void print3(){
			cout<<"TERMINATE = "<<endl;
			cin>>can_terminate;
			
			cout<<can_terminate<<endl;
		}
};

int main(){
	Admin a1;
			
		a1.company;
		a1.salary;
		a1.print1();
		a1.companyname_m;	
		a1.salary_manager;
		a1.staff;
		a1.print2();
		a1.can_terminate;
		a1.print3();
	
	return 0;
	
	
}

