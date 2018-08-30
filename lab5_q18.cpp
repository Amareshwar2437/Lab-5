//include all necessary libraries
#include<iostream>
using namespace std;
int main()
{ 

	//Programme to calculate profit and loss
	//Ask the user the cost price, sell price

	int costprice, sellprice, result;
	cout <<"Enter the cost price of the desirable product:";

	cin >> costprice;

	cout <<"Enter the sell price of the desirable product:";

	cin >> sellprice;

	result=(sellprice- costprice);

	if (result >0) {

		cout <<"The profit is"<<result<<endl;
							}
	else if (result <0) {

		cout <<"The loss is " <<-(result)<<endl;
							}
	else {

		cout <<"There is no net profit or loss."<<endl;
								}

	return 0;
}
		
