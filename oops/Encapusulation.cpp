//oops_concepts.cpp
//Encapsulation: Binding Data Member with member functions.
//That Data Can be only used by those funtions.
//Even Object should not be able to access the data.
//This can Be impletemnted using Access Specifiers called private, Public , and protected


#include <iostream>
#include<string.h>

class Employee {
    private:                                                                 
             int Emp_ID;
             char Employee_Name[100];
             int Emp_age;
    

    public:

            Employee(int ID, char* Name, int age){
                Emp_ID=ID;
                strcpy(Employee_Name, Name);
                Emp_age=age;
            }

            void showDetails(){
                std::cout<<"Employee ID : "<<Emp_ID<<"\n";
                std::cout<<"Employee Named : "<<Employee_Name<<"\n";
                std::cout<<"Employee Age : " <<Emp_age<<"\n";

            }
};

 

int main(){
   Employee e1(10,"Akshay",25);
   e1.showDetails();
   
    return 0 ;
}