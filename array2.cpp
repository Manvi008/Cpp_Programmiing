/* to access the element of the array without indexing */
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    cout<<"the first element of the array is"<<*arr<<endl;
    cout<<"the second element of the array is"<<*(arr+1)<<endl;
    cout<<"the third element of the array is"<<*(arr+2)<<endl;
    cout<<"the fourth element of the array is "<<*(arr+3)<<endl;
    return 0;

}
/*the first element of the array is 1
the second element of the array is 2
the third element of the array is 3
the fourth eleement of the array is 4*/
