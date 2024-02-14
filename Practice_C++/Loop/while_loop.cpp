#include <iostream>
using namespace std;

int main()
{
    // int i = 0;
    // while (i < 6)
    // {
    //     cout << i << "\n";
    //     // if (i == 2)
    //     // {
    //     //     break;
    //     // } // to print 0,1,2
    //     i++;
    // }
    
    int i = 6;
    while (i < 6)
    {
        cout << i << "\n";
        i++;
    } //print nothing

    do  //do first
    {
        cout << i << "\n";
        i++;
    } while (i < 6); // print 6

    return 0;
}