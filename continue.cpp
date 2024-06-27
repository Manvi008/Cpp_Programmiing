/* we skip  an iteration using continue(),continue statement is not valid in switch statement */
#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter a non-zero value: ";  //user input
	cin>>i;
	if(i)    // checks whether the user input is non-zero or not
	{
		cout<<"Valid input.\n";
	}
	else
	{
		cout<<"ERROR!";  //the program exists if the value is 0
		exit(0);
	}
	cout<<"The input was : "<<i;
}
/* Output:
main.cpp:10:9: error: continue statement not within a loop*/
