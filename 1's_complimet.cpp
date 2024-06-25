#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
  //  int ans;
    int mask=0;
    int m=n;
  if (n==0){
    cout<<"1";
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<<"1's compliment of the given number is "<<ans;
}
