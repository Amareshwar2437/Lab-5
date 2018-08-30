//include all necessary libraries
#include<iostream>
using namespace std;
int main()
{
	//Programme to check if a number is positive, negative or zero
	//Ask the user for the variables

	int x;
	//x is the hence declared variables


	cout<<"Checking if a number is postive, negative or zero:";
	cin >>x; 
	
	if (x>0){
			cout<<"Then,x is a positive number"<<endl;
									}
	else if (x<0){
			cout<<"Then,x is a negative number"<<endl;
									}

	else {
			cout<<"Then,x is simply the number 0"<<endl;
									}

	return 0;
}
