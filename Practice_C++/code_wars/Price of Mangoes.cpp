#include <iostream>
#include <string>
using namespace std;

int mango(int quantity, int price)
{
    int totalPrice;
        int offer = quantity - (quantity/ 3);
        totalPrice = offer * price;
    
    return totalPrice;
}

int main()
{
    int p = mango(9, 3);
    cout << p;
}