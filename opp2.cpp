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

    // method inside a class that prints out its values
    void show_details()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Salary : " << Salary << endl;
    }
};

int main()
{
    // creating an object of  the class.
    Employee emp1;
    // give values to each variable of the class
    emp1.Name = "Sree";
    emp1.Age = 36;
    emp1.Salary = 1000;
    // calling public function of class. 
    emp1.show_details();

    return 0;
}
