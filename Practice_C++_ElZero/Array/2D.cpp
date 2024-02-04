#include <iostream>
using namespace std;

int main (){
    int rows=3;
    int columns=3;
    // int point_a[3]={1,2,3};
    // int point_b[3]={4,5,6};
    // int point_c[3]={7,8,9};
    int points [rows][columns]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    cout<<points[1][2]<<"\n"; //6
    cout<<points[2][0]<<"\n"; //7
    cout<<points[2][2]<<"\n"; //9
    }