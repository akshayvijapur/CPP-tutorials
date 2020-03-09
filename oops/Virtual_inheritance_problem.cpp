//oops_concepts.cpp
//Multiple Inheritance : If there are two parent class, and have same function name say showdetails .
//if we have a derived class of both the parent class.
//If we call showdetails from derived class, we will get error saying it is an ambigous function.

//Now if we try to initilize  worker class. Now Base class will be called two times in manager and reportee class.
//Because there are two copies of base class in manager class and reportee class also.
//See the virtual_inheritance_solution to get the solution.


#include <iostream>
#include<string.h>

class Employee {
    protected:                                                                 
             int Emp_ID;
             char Employee_Name[100];
             int Emp_age;
    

    public:

            Employee(int ID, char* Name, int age){
                Emp_ID=ID;
                strcpy(Employee_Name, Name);
                Emp_age=age;
                  std::cout<<"Base Employee  Class \n";
            }

            void showBasicDetails(){
                std::cout<<"Employee ID : "<<Emp_ID<<"\n";
                std::cout<<"Employee Named : "<<Employee_Name<<"\n";
                std::cout<<"Employee Age : " <<Emp_age<<"\n";

            }
};

class Manager : public Employee{

private:

        int Manager_Org_ID;
        int Number_of_Reporties;

public:

 Manager(int ID,char* name, int age, int org_id,int num_reporties):Employee(ID,name,age){
         std::cout<<"Calling Manager class \n";
                Manager_Org_ID=org_id;
                Number_of_Reporties=num_reporties;

}

void showManagerDetails(){
    std::cout<<"Employee ID : "<<Emp_ID<<"\n";
                std::cout<<"Employee Named : "<<Employee_Name<<"\n";
                std::cout<<"Employee Age : " <<Emp_age<<"\n";
                std::cout<<"Employee Manager_Org_ID : " <<Manager_Org_ID<<"\n";
                std::cout<<"Employee Number_of_Reporties : " <<Number_of_Reporties<<"\n";
}

};

class Reportee : public Employee{

    private :

    int org_ID;
    int num_of_Collegues;

    public:
    Reportee(int ID,char* name, int age, int org_id,int num_reporties):Employee(ID,name,age){
        org_ID=org_id;
        num_of_Collegues=num_reporties;
         std::cout<<"Calling Reporte class \n";
    }

    void showReporteeDetails(){
        std::cout<<"Employee ID : "<<Emp_ID<<"\n";
                std::cout<<"Employee Named : "<<Employee_Name<<"\n";
                std::cout<<"Employee Age : " <<Emp_age<<"\n";
                std::cout<<"Employee org_ID : " <<org_ID<<"\n";
                std::cout<<"Employee num_of_Collegues : " <<num_of_Collegues<<"\n";
    }
};


class human : public Manager, public Reportee{
    private :
    bool isHuman;
    
    public :
    human(int ID,char* name, int age, int org_id,int num_reporties):Manager(ID,name,age,org_id,num_reporties),Reportee(ID,name,age,org_id,num_reporties){
        isHuman = true;
        std::cout<<"Calling worker class \n";
    };

   
} ;
 

int main(){  

   human m1(10,"akshay",25,255,10);  
  
   
    return 0 ;
}