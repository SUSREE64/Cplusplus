/* The OOP Concepts Notes */

#include <iostream>
using namespace std;
//1. Classes are to be declared outside main()
class Employee
{
    // By default, the members are private if not specified
    // Class needs to be terminated with ;
public:
    string Name;
    int Age;
    int Salary;
};

int main()
{
    // creating an object of  the class.
    Employee emp1;
    // give values to each variable of the class
    emp1.Name = "Sree";
    emp1.Age = 36;
    emp1.Salary = 1000;
    // print out these variables
    cout << "Name : " << emp1.Name << endl;
    cout << "Age : " << emp1.Age << endl;
    cout << "Salary : " << emp1.Salary << endl;

    return 0;
}
