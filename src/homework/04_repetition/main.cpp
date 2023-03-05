//write include statements
#include "dna.h"



using namespace std;


//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
int choice, num1, num2;
    char choice2;
    do{
	
        cout << "1-Factorial" << endl;
        cout << "2-Greatest Common Divisor" << endl;
        cout << "3-Exit" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Enter number ";
                cin >> num1;
                cout << "Factorial of " << num1 << " is " << factorial(num1) << endl;
                break;
            case 2:
                cout << "Enter number 1 ";
                cin >> num1;
                cout << "Enter number 2 ";
                cin >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            case 3:
                cout << "Are you sure you want to exit? Y/N  ";
                cin >> choice2;
                if(choice2 == 'N' || choice2 == 'n'){
                    choice = 0;
                }
            break;
            default:
            cout << "Incorrect choice." << endl;
        }

    }while(choice != 3);
    cout << "Goodbye!" << endl;
    return 0;

	
}