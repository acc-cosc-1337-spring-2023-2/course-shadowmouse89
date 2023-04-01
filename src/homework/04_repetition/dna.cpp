//add include statements
#include "dna.h"
 using std::swap;




//add function(s) code here
int factorial (int num) 
{

    auto result = 1;
    for(int i = 1; i <= num; i++) {
    result *= i;
    }
    return result;
}

int gcd (int num1, int num2)
{
   while(num1 != num2){
        if(num1 < num2) 
        {
            swap(num2, num1);
        }
        else if(num1 > num2) 
        {
            num1 = num1 - num2;
        }
    
    
}
return num1;
}

