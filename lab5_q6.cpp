//include all necessary libraries
#include<iostream>
using namespace std;
int main()
{
 	//Programme to check whether a year is leap year or not
	//Ask the user for details

	int year;

	cout<<"Please enter the desired year in yyyy format: ";

	cin >>year;

	if (year % 4 ==0) {
		
		cout <<year<<" is a leap year";
							}
	else {
	
		cout <<year<<" is not a leap year";
							}

	return 0;
}
