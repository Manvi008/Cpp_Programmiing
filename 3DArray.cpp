#include<iostream>
using namespace std;
int main(){
    int arr[3][3][3];
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            for(int k=0;k<=3;k++){
            arr[i][j][k]=i+j+k;
        }
    }
    }
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            for(int k=0;k<=3;k++){
                cout<<arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }

}
/*output=0121
1232
2341
1232

1232
2343
3452
2343

2343
3454
4563
0324

0034
4445
5676
6789*/
