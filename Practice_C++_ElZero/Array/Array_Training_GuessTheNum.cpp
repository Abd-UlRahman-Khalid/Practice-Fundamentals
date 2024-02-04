#include <iostream>
#include <array>
using namespace std;

int main()
{
    int points = 0;
    int sequances[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};
    int answers[3];
    cout << "write the Missing Number In Sequences\n";
    cout << "Q1:\n";
    cout << "1 | 5 | 10 | 16 | ?? \n";
    cin >> answers[0];
    cout << "Q2:\n";
    cout << "2 | 4 | 8  | 16 | ?? \n";
    cin >> answers[1];
    cout << "Q3:\n";
    cout << "1 | 1 | 2 | 3 | ?? \n";
    cin >> answers[2];

    if (answers[0] == sequances[0][4])
    {
        points++;
    }

    if (answers[1] == sequances[1][4])
    {
        points++;
    }
    if (answers[2] == sequances[2][4])
    {
        points++;
    }
    cout << "The Total points = " << points <<"out of three";

    return 0;
}