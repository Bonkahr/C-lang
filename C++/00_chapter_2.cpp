#include <iostream>

using namespace std;

/*  Assignment
    * Write a C++ program that prompts the user to enter their name, age, and grade and print it
    back to the user.

    * Write a C++ program that asks the user to input two numbers, perform addition, subtraction,
    multiplication, division, and modulus. Print the results in a readable format.
*/

// function prototype
void user_inputs();
void arithmetics();

// Main function
int main()
{
    user_inputs();
    arithmetics();

    return 0;
}


// Assignment one.
void user_inputs()
{
    cout << "Kindly give us your details below.\n";

    string name;

    cout << "\nWhat is your name: ";

    getline(cin, name);

    int age = 0;

    cout << "\nWhat is your age: ";

    cin >> age;
    cin.ignore();

    string grade;

    cout << "\nWhat is your grade: ";
    getline(cin, grade);

    cout << "\nYour details are:\n"
    << "\tName: " << name << "\n"
    << "\tAge: " << age << "\n"
    << "\tGrade: " << grade << "\n";
}

// Assignment two

void arithmetics()
{
    cout << "\nWe shall do several arithmetics, addition, substraction, multiplication, divison and modulo.\n"
         << "Kindly give me two numbers.\n";

    int number_one;
    int number_two;

    cout << "\nFirst number: ";
    cin >> number_one;
    cin.ignore();
    cout << "\nSecond Number: ";
    cin >> number_two;

    cout << "\nYour numbers are:" << number_one << " and " << number_two << "\n";

    cout << "\nHere is the results:\n"
         << "\tAddition: " << number_one + number_two << "\n"
         << "\tSubstraction: " << number_one - number_two << "\n"
         << "\tDivision: " << (float)number_one / (float)number_two << "\n"
         << "\tModulo: " << number_one % number_two << "\n";
}
