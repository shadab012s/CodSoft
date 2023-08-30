//NUMBER GUESSING GAME

/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
    srand(time(0));
    int random_number = ((rand()) % 20) +1;
    int user_gusess;
    int count=0;
    cout<< "Welcome to Number guessing game"<<endl<<endl;
    while (true)
    {
        cout << "Enter a Number between 1 amd 20: ";
        cin >> user_gusess;
        count++; 
        if (user_gusess == random_number)
        {
            cout<< "\t\tCongratulations! Your guess is correct"<<endl;
            break;
        }
        else if (user_gusess > random_number)
        {
            cout<< "\tIncorrect! Your guess is greator"<<endl;
        }
        else if (user_gusess < random_number)
        {
            cout<< "\tIncorrect! Your guess is less than number"<<endl;
        }
        else
        {
            cout<< "\tInvalid Input!"<<endl;
        }
    }

    cout<< "You guess the number in " << count <<" attempts";
}