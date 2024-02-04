#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter Your Number To Check :";
    cin >> number;
    if(number%2==0)
    {
        cout<< "The Number"<<number<<"Even Number";
    }else{
        cout<<"The Number"<<number<<"Odd Number";
    }
    // cout << (number % 2 == 0 ? "Even Number" : "Odd number");
    return 0;
}