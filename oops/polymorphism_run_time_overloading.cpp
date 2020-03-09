//polymorphism.cpp
// Poly means many. this means many forms. 
// A same function can behave differently at different point of time(Compile time or run time)
// A simple emample. A human can be employee or a manager or a husband.

//Compile time Polymorphism


#include<iostream>
#include<string.h>

class Box {

private :

int height;
int weight ;


public:


void SetDetails(int height1, int weight1){
    height = height1;
    weight=weight1;
}

Box operator + (Box b1){
    Box b;
    b.height = b1.height + height;
    b.weight = b1.weight + weight;
    std::cout<<"height"<<b1.height;
    return b;
}

void showDetails(){
    std::cout<<"Employee Name "<<height<<"\n";
     std::cout<<"Employee ID "<<weight<<"\n";

}

};

int main(){
    Box b1,b2, b3;
    
    b1.SetDetails(10,20);
    b2.SetDetails(30,40);
    
    b3 = b1+b2;
    b3.showDetails();
   
    return 0;

}