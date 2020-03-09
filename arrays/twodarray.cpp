#include <iostream>
#include <conio.h>

int main()
{
    int a[3][2] = {{10,20},{30,40},{50,60}};

for (int i=0;i<3;i++){
    for (int j=0;j<2;j++){
        std::cout<<a[i][j]<<"\t";
    }
 std::cout<<"\n";
}

//transpose this matrix
int b [2][3];

for (int i=0;i<3;i++){
    for (int j=0;j<2;j++){
        b[j][i]=a[i][j];

    }
}

for (int j=0;j<2;j++){
    for (int i=0;i<3;i++){
        std::cout<<b[j][i]<<"\t";
        
    }
    std::cout<<"\n";
}


}