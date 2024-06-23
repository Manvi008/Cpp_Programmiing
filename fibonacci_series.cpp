#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a=0;
    int b=1;
    for(int i=1;i<=10;i++){
        int number=a+b;
        cout<<number<<" ";
        a=b;
        b=number;

    }
   
}
/* 1 2 3 5 8 13 21 34 56 
