#include<iostream>
using namespace std;
int power( ){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;}
        return ans;
}
int main(){
   /* int a,b;
    cin>>a>>b;*/
    int answer=power( );
    cout<<"the answer of a to the power b is "<<answer;
    return 0;
}
    