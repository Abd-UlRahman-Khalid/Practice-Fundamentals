#include <iostream>
#include <string>
using namespace std;


std::string even_or_odd(int number)
{
    if (number % 2 == 0){
        cout<<"even"<<"\n";
        return "Even";
    }else {
        cout<<"odd"<<"\n";
        return "Odd";
    }
        
}

int main(){
    even_or_odd(5);
}