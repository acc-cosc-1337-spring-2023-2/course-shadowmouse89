//write include statement for decisions header
#include "decisions.h"

using std::string;

//Write code for function(s) code here
string get__letter_grades_using_if(int grade) 
{

    string lettergrade;

    if(grade >= 90) 
    {
        lettergrade = 'A';
    }
    else if (grade < 90 && grade >= 80) 
    {
         lettergrade = 'B';
    }
    else if (grade < 80 && grade >=70) 
    {
        lettergrade = 'C';
    }
    else if (grade < 70 && grade >= 60)
    {
        lettergrade = 'D';
    }
    else if (grade < 60) 
    {
        lettergrade = 'F';
    }
    else 
    {
        lettergrade = "invalid option";
    }

    return lettergrade;
}

string get_letter_grade_using_switch(int grade) 
{
    string lettergrade;

    switch(grade / 10) 
    {
        case 9:
            lettergrade = "A";
            break;
        case 8:
            lettergrade = "B";
            break;
        case 7:
            lettergrade = "C";
            break;
        case 6:
            lettergrade = "D";
            break;
        default:
            lettergrade = "F";
            break;
    }
         return lettergrade;
}