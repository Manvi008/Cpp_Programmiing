#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char operation;
    cin>>operation;
    switch(operation){
        case '+':
        cout<<"the sum of 2 number is "<<a+b;
        break;
        case '-':
        cout<<"the subtraction of two number is"<<a-b;
        break;
        case '*':
        cout <<"the multiplication of two number is "<<a*b;
        break;
        case '/':
        cout<<"the division of two number is"<<a/b;
        default:
        cout<<"invalid input";
    }
}
