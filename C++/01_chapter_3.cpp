#include <iostream>
#include <string>

using namespace std;

/* Assignment
    * Write a C++ program that defines a class named Student with public data members name,
    marks1, and marks2. The class should include a member function that calculates and returns the
    average of the two marks. Create two Student objects, assign appropriate values to their names
    and marks, use the member function to compute the average for each student, and display the
    results on the screen.
    * Create a class BankAccount with data members accountNumber and balance. Use a constructor
    to initialize the account and member functions to deposit and display the balance.
*/

// Class Student
class Student{
    public:
        string name;
        int marks_1;
        int marks_2;
    
    float calculate_avaerage(int mark_1, int mark_2)
    {
        return mark_1 / mark_2;
    }
};


// Bank class
class Bank{
    public:
        int account_number;
        double balance;
    
    Bank(){
        account_number = 12345678;
        balance = 0;
    }

    Bank(int account, double bal)
    {
        account_number = account;
        balance = bal;
    }

    void annouce_details ()
    {
        cout << "\n\tAccount Number: " << account_number << "\n\tBalance: " << balance << "\n";
    }
};

int main()
{
    // Student class
    Student student_1;
    Student student_2;

    student_1.marks_1 = 56;
    student_1.marks_2 = 50;

    student_2.marks_1 = 98;
    student_2.marks_2 = 43;

    cout << "Student One marks:\n"
         << "\tSubject 1: " << student_1.marks_1 << "\n"
         << "\tSubject 2: " << student_1.marks_2 << "\n"
         << "\tAverage: " << student_1.calculate_avaerage(student_1.marks_1, student_1.marks_2) << "\n";

    cout << "Student Two marks:\n"
         << "\tSubject 1: " << student_2.marks_1 << "\n"
         << "\tSubject 2: " << student_2.marks_2 << "\n"
         << "\tAverage: " << student_2.calculate_avaerage(student_2.marks_1, student_2.marks_2) << "\n";
    
    // Bank details
    Bank member_1;
    Bank member_2(8765432, 56.98);

    cout << "\nMember one details:\n\t";
    member_1.annouce_details();
    cout << endl;
    cout << "Member two details: \n\t";
    member_2.annouce_details();

    return 0;
}
