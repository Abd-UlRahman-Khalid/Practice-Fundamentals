#include <iostream>
using namespace std;

int main()
{
    
    int guessNumber = 7;
    int guessTries = 0;
    int choose;
    cout<<"please Guess a number from 1 to 10"<<endl;

    while(true){
        cin>>choose;
        if(choose==guessNumber){
            cout<<"Great, Correct Guess \n";
            break;;
        }else{
            cout<<"Sorry, Wrong Guess \n";
            guessTries++;
        }
        if(guessTries==3){
            cout<<"Sorry, The Correct Guess is \n"<<guessNumber;
            break;
        }
    }

    return 0;
}