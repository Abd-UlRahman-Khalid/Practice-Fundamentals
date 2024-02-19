#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> list){
    int minValue=list[0];
    for(int i=0;i<list.size();i++){
        if(minValue>list[i]){
            minValue=list[i];
        }
    }
    
    cout<<minValue<<"\n";
    return minValue;
}

int max(vector<int> list){
    int maxValue=list[0];
    for(int i=0;i<list.size();i++){
        if(maxValue<list[i]){
            maxValue=list[i];
        }
    }
    
    cout<<maxValue<<"\n";
    return maxValue;
}

int main(){
    max({-52, 56, 30, 29, -54, 0, -110} );
    min({-52, 56, 30, 29, -54, 0, -110} );
}