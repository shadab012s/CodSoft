// Simple Calculator
// Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.
#include<iostream>
using namespace std;
main()
{
    float number1;
    float number2;
    char Arthemetic_OP;
    float operation;
    cout<< "Enter First number: ";
    cin>> number1;
    cout<< "Enter Second number: ";
    cin>> number2;
    cout<< "Enter operation( + , - , * , / ) you want to perform: ";
    cin>> Arthemetic_OP;
    if(Arthemetic_OP == '+')
    {
        operation = number1 + number2;
        cout<< "Result is: " << number1 <<" "<< Arthemetic_OP <<" " << number2 <<" = " <<operation;
    }
    else if(Arthemetic_OP == '-')
    {
        operation = number1 - number2;
        cout<< "Result is: " << number1 <<" "<< Arthemetic_OP <<" " << number2 <<" = " <<operation;
    }
    else if(Arthemetic_OP == '*')
    {
        operation = number1 * number2;
        cout<< "Result is: " << number1 <<" "<< Arthemetic_OP <<" " << number2 <<" = " <<operation;
    }
    else if(Arthemetic_OP == '/')
    {
        operation = number1 / number2;
        cout<< "Result is: " << number1 <<" "<< Arthemetic_OP <<" " << number2 <<" = " <<operation;
    }
    else
    {
        cout<< "Wrong Input! Try Again" <<endl;

}
}