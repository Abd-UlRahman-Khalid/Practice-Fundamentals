#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,4> points={1,2,3,4};
    cout<<points[0]<<endl;
    cout<<points[1]<<endl;
    cout<<points[2]<<endl;
    cout<<points[3]<<endl;
    cout<<"The Noumber of elements in array : "<<points.size()<<endl;
    cout<<points.back()<<endl;//4
    cout<<points.front()<<endl;//1
    cout<<points.at(1)<<endl;//2
    cout<<points.empty()<<endl; //false=>0
    return 0;
    }