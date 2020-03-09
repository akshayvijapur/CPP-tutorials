//polymorphism.cpp
//RUN time Polymorphism. 
//Consider an organization which wants to raise a salary for all employee.
// But does not want to create object for all different types of employees.
// We can create only one object, but can point to all different types of employees.

//Base class can contain one common method called "raise salary".
//We will create a base class pointer and will point to the appropriate derived class (manager/worker) and will raise the salary.
//The base class common method should be prepended with "virtual" keyword so that in runtime , The derived class common method should be called.



#include<iostream>
#include<string.h>

class Employees {

protected :

int Emp_ID;
int salary ;


public:

Employees(int ID, int sal){
    Emp_ID = ID;
    salary=sal;
}

virtual void RaiseSalary(int amount) = 0;

void showDetails(){
      std::cout<<"Employee base class\n";
    std::cout<<"Employee Salary "<<salary<<"\n";
     std::cout<<"Employee ID "<<Emp_ID<<"\n";

}

};

class Manager : public  Employees{
public :
    Manager(int ID, int sal):Employees(ID,sal){    }

void showDetails(){
    std::cout<<"Employee derived class\n";
    std::cout<<"Employee Salary "<<salary<<"\n";
     std::cout<<"Employee ID "<<Emp_ID<<"\n";

}

void RaiseSalary(int amount){
     salary = salary + amount;
}

};


class Worker : public  Employees{
public:

    Worker(int ID, int sal):Employees(ID,sal){    }

void showDetails(){
      std::cout<<"Employee derived class\n";
    std::cout<<"Employee Salary "<<salary<<"\n";
     std::cout<<"Employee ID "<<Emp_ID<<"\n";

}

void RaiseSalary(int amount){
     salary = salary + amount;
}

};

int main(){
   
Employees *e1;

Manager m(10,1000);
Worker e(9,100);

e1 = &m;
e1->showDetails();
e1->RaiseSalary(100);
e1->showDetails();

e1 = &e;
e1->showDetails();
e1->RaiseSalary(100);
e1->showDetails();

 std::cout<<"\n";
return 0;
}