#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool IsPrime=1;
    for(int i=2;i<n;i++){
       if(n%i==0) {
           IsPrime=0;
           break;
       }}
       if(IsPrime==0){
           cout<<"Not a Prime number";
       }
           else{
           cout<<"is a prime number";
       }
    
   
   
}
