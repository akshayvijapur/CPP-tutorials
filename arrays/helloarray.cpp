#include<iostream>
#include<conio.h>


 void getsum(int *array) {
    for(int i=0;i< sizeof(array);i++){
        std::cout<<"value from pointer "<<array[i]<<"\n";
    }
}

int main()
{
    //Learn


    //int a[1] = {10}';
    // This will declare an array with size 1.
    // So it can store the value at a[0] only
    // not at a[1]

    std::cout<<"Hello C++";
    int a[1] = {50};
    std::cout<<"\n"<<a[0]<<"\n";

    
    // int a[3/2] = {10}
    // will store data at a[1]

    int b[10];
    b[3/2]=10;
    std::cout<<b[1]<<"\n";


    // Pointers  in arrays 

    int c[10] = {10,20,30,40,50,60,70,80,90,100};

    for(int i=0;i<10;i++){
        std::cout<<"value at address "<<&c[i]<<" is "<<c[i]<<"\n"; 
    }

    // passing array as pointers
    // Cannot assign pointer as value to an array.
    //Finally 
    // an array variable is an pointer which just declares that this is an array 
    // pointer will move the variables
    getsum(c);

    int d[10] = { 10,20,30,40,50};
    for(int i=0;i<10;i++){
        std::cout<<"value at address "<<&d[i]<<" is "<<d[i]<<"\n"; 
    }

    int *e;
    e = d;

    for(int i=0;i<10;i++){
        std::cout<<"new value at address "<<&e[i]<<" is "<<e[i]<<"\n"; 
    }

    e[9] = 20 ;
    std::cout<<e[9];
     return 0;
}

