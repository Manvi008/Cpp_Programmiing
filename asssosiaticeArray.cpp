/*associative array is also knownn as map where the 
indexing can be done using anything */
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>marks{{"Rishu",34},{"Suraj",23},{"Manvi",20},{"Sarthak",23}};
    map<string , int>::iterator i;
    cout<<"the marks of all the student is "<<endl;
    for(auto i=marks.begin();i!=marks.end();i++){
        cout<< i->second<<" ";
        cout<<endl;
    }
    return 0;
}
/*O/P
  the marks of all student is 
  34
  23
  20
  23*/
