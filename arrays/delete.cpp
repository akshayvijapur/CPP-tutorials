#include<iostream>
using namespace std;

bool checkelementexists(int array[], int element, int size){
  for(int j = 0 ; j < size; j++){
            if (element == array[j]){
               return true;
            }
        }  
        return false;
}
int getuniqueelements(int array[], int size){
    int temparray[size];
    int m = 0;
    temparray[m++] = array[0];
    for (int i= 1; i < size ; i++){
        if (!checkelementexists(temparray, array[i], m)){
             temparray[m++] = array[i];
        }
    }
    return m;
}
int main()
 {
     int num_of_tests = 0;
     cin>>num_of_tests;
     
     for( int test=0; test<num_of_tests;test++) {
        int array_size = 0;
        cin>>array_size;
        
        int array[array_size];
        
        for (int i = 0; i < array_size; i++){
            cin>>array[i];
        }
        int num_of_unique_elements= getuniqueelements(array,array_size);
        cout<<num_of_unique_elements<<"\n";
     }
	
	return 0;
}


