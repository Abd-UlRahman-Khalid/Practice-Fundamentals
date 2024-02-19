#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int>arr={1,2,3,4,1};
    int minValue=arr[0];
    
    for(int i=0 ; i<arr.size();i++){
        if(minValue>arr[i]){
            minValue=arr[i];
        }
    }
    
    
}