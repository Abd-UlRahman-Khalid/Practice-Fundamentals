#include <iostream>
using namespace std;
const int  maxSize=100;
class stack {
    private:
        int top; // index of my stack 
        int item [maxSize];//array representing my stack
    public:
        stack():top(-1){}
        void push(int element){
            if(top>=maxSize-1){
                cout << "Stack is Full on Push"<< endl;
            }else{
            top++;
            item[top]=element;}
        
    }
        void pop(){
            if(top==-1){
                cout << " Stack is Empty"<<endl;
            }else
            top--;
        }
        void pop(int&element){
            if(top==-1){
                cout << " Stack is Empty"<<endl;
            }else{
            element=item[top];
            top--;
            }
        }
        void getTop(int&stackTop){
            if(top==-1){
                cout << " Stack is Emptyon getTop"<<endl;
            }else{
            stackTop=item[top];
            cout<<stackTop<<endl;
            }
        }
        void print(){
            cout<<"[ ";
            for(int i=top;i>=0;i--){
                cout<<item[i]<<" ";
            }
            cout<<']'<<endl;
        }
        
};

int main (){
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.print();
    int y=0;
    s.getTop(y);
    s.pop();
    s.print();
}