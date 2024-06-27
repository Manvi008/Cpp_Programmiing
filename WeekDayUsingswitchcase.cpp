#include<iostream>
using namespace std;
int main(){
    int day ;
    cin>>day;
    cout<<endl;
    switch(day){
        case 1:
        cout<<"the day of the week is monday";
        break;
        
        case 2:
        cout<<"the day of the week is tuesday";
        break;
        
        case 3:
        cout<<"the day of the week is wednesday";
        break;
        
        case 4:
        cout<<"the day of the week is thursday";
        break;
        
        case 5:
        cout<<"the day of the week is friday";
        break;
        
        case 6:
        cout<<"the day of the week is saturday";
        break;
        
        case 7:
        cout<<"the day of the week is sunday";
        break;
        default:
        cout<<"invalid input";
    }
}
