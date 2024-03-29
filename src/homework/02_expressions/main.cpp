﻿//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout<<"Enter the cost of your meal "<<"\n";
	cin>>meal_amount;

	 tax_amount = get_sales_tax_amount(meal_amount);
	
	cout<<"Please enter the percent tip youd like to leave ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	 total = tip_amount + tax_amount + meal_amount;

	cout<<"Receipt: "<<"\n";
	cout<<"Meal amount: "<<meal_amount<<"\n";
	cout<<"Sales tax: "<<tax_amount<<"\n";
	cout<<"Tip amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";

	

	return 0;
}
