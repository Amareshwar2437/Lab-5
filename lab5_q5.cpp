//include all necessary libraries
#include<iostream>
using namespace std;
int main()
{
	//Programme to check if a number is either odd or even
	//Ask the user to define the variable

	int a, remainder;
	cout<<"Enter the desired number"<<endl;

	cin >>a;

	remainder = a % 2;

	if (remainder == 0) {
	
		cout<<a<< "is an even integer" <<endl;
									}

	else {
		
		cout<<a<< "is an odd integer"<<endl;
									}
									

	return 0;
}
