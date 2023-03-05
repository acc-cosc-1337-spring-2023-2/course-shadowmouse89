#include "decimals.h" //tell C++ where to find double 1 function
#include<iostream>//we want to use cout

using std::cout;//explicitly tell c++ that we are only using cout from an iostream and std

int main()
{
    double num = 0;
    double num1 = add_to_double_1(num);

    //we do something with num1
    num1 = num1 + 1;

    cout<<"Addingto a double: "<<num1<<"\n";//here we are using the function

    return 0;
}