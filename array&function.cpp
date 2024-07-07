/* how the fuction call is done*/
  #include<iostream>
using namespace std;
void print(){
    cout<<"you called the fuction rightly";
}
int main(){
  print();
  return 0;

}
/*arrays are always passed as pointers to the function.*/
/*we majorly pass array in three ways in the fuction
1. passing array as pointer
2  passing array as an unsized array
3  passing array as a sized array*/
#include<iostream>
using namespace std;
void unsizedArray(int arr[],int n){
    cout<<"the array is";
    for (int i=0;i<n;++i){
        cout<<*(arr+i)<<" " ;
        
    }
    cout<<endl;
}
void sizedArray(int arr[3],int n){
    cout<<"th array is";
    for (int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void pointerArray(int *ptr,int n){
    cout<<"the array using pointer is";
    for(int i=0;i<=n;i++){
        cout<<ptr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3};
    unsizedArray(arr,2);
    sizedArray(arr,2);
    pointerArray(arr,2);
    return 0;
}

/*o/p
  the array is 1 2 3 
  the array is 1 2 3 
  the array using pointer is 1 2 3 */
