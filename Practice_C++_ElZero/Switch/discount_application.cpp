#include <iostream>
using namespace std;

int main()
{
    int years;
    int price = 100;
    int discount = 10;
    cout << "Please Enter number of years";
    cin >> years;

    switch (years)
    {
    case 1:
        discount = 20;
        break;
    case 2:
        discount = 30;
        break;
    case 3:
        discount = 80;
        break;
    }
    cout << "The Price is:" << price - discount;
}