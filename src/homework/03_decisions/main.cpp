//write include statements
#include "decisions.h"


using std::cout; using std::cin;

int main() 
{
	auto grade = 0;
	cout<<"Enter the numerical grade: "<<"\n";
	cin>>grade;

	auto lettergrade = get__letter_grades_using_if(grade);

	
 	auto choice = 0;
	cout<<"Menu\n";
	cout<<"1 - Letter grade using if\n2 - Letter grade using switch\n3- Exit\n";
	cout<<"Enter your choice\n";
	cin>>choice;

	if(grade >= 0 && grade <= 100) 
	{

	
	if(choice == 1) 
	{
		auto lettergrade = get__letter_grades_using_if(grade);
		cout<<"\nThis is your letter grade "<<lettergrade<<"\n";
	}
	else if(choice == 2) 
	{
		auto lettergrade = get_letter_grade_using_switch(grade);
		cout<<"\nThis is your letter grade "<<lettergrade<<"\n";
	}
	else if (choice == 3) 
	{
		exit(0);
	}
	}
	else 
	{
		cout<<"Grade is invalid";
	}
	return 0;
}