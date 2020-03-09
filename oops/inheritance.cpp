//oops_concepts.cpp
//Abstarction : Binding Data Member with member functions.
//That Data Can be only used by those funtions.
//Even Object should not be able to access the data.
//This can Be impletemnted using Access Specifiers called private, Public , and protected


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
            }

            void showDetails(){
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
        
                Manager_Org_ID=org_id;
                Number_of_Reporties=num_reporties;

}

void ShowManagerDetails(){
    std::cout<<"Employee ID : "<<Emp_ID<<"\n";
                std::cout<<"Employee Named : "<<Employee_Name<<"\n";
                std::cout<<"Employee Age : " <<Emp_age<<"\n";
                std::cout<<"Employee Manager_Org_ID : " <<Manager_Org_ID<<"\n";
                std::cout<<"Employee Number_of_Reporties : " <<Number_of_Reporties<<"\n";
}

};

 

int main(){  

   Manager m1(10,"akshay",25,255,10);  
   m1.showDetails();
    m1.ShowManagerDetails();
    return 0 ;
}