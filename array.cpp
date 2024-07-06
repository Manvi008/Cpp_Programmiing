/* array*/
/*traversing an array*/
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    
    return 0;
}
/*to tell the size of array*/
#include<iostream>
using namespace std;
int main(){
    int arr[ ]={1,2,3,4,5};
    cout<<"size of an array element 1 is"<<sizeof(arr[0]);
    cout<<"size of the array is "<<sizeof(arr);
    int n;
    cout<<"number of elements in the array is"<<sizeof(arr)/sizeof(arr[0]);

    
    return 0;
}
