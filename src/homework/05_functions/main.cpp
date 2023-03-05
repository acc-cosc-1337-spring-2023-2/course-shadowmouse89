#include "func.h"

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
int option;
string dna_string;

	do
	{
		cout<<"\nMenu\n";
		cout<<"\n1-Get GC Content";
		cout<<"\n2-Get DNA Complement";
		cout<<"\n3-Exit\n";
		cout<<"\nChoose an option: ";
		cin>>option;

		switch(option)
		{
		case 1:
			cout<<"Enter DNA string: ";
			cin>>dna_string;
			cout<<"\nGC Content: "<<get_gc_content(dna_string) * 100<<"%\n";
			break;
		case 2:
			cout<<"Enter DNA string: ";
			cin>>dna_string;
			cout<<"\nDNA Complement: "<<get_dna_complement(dna_string)<<"\n";
			break;
		case 3:
			break;
		default:
			cout<<"Invalid Option.";
			break;
		}

	}
	while (option != 3);

	return 0;
}

