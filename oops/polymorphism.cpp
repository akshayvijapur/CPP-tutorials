//polymorphism.cpp
// Poly means many. this means many forms. 
// A same function can behave differently at different point of time(Compile time or run time)
// A simple emample. A human can be employee or a manager or a husband.

//Compile time Polymorphism


#include<iostream>
#include<string.h>

class Employee {

private :

int Employee_ID;
char Employee_name[100];

public:


void SetDetails(int ID){
    Employee_ID = ID;
}

void SetDetails( char* name){
 strcpy(Employee_name,name);
}

void showDetails(){
    std::cout<<"Employee Name "<<Employee_name<<"\n";
     std::cout<<"Employee ID "<<Employee_ID<<"\n";

}

};

int main(){
    Employee e1;
    e1.SetDetails(10);
    e1.SetDetails("AKshay");
    e1.showDetails();
    return 0;

}