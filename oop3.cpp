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
    int Basic_Salary;

    //constructor function to initialize the class members
    Employee(string name, int age, int sal)
    {
        Name = name;
        Age = age;
        Basic_Salary = sal;
    }
    // method inside a class that prints out its values
    void show_details()
    {
        int pf = Basic_Salary * (0.15);
        int HRA = Basic_Salary * (0.1);
        int SplAllowance = Basic_Salary * (0.3);
        int Total = Basic_Salary + HRA + SplAllowance;

        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Salary : " << Basic_Salary << endl;
        cout << "Provident Fund :" << pf << endl;
        cout << "H.R.A : " << HRA << endl;
        cout << "Special Allowance :" << SplAllowance << endl;
        cout << "Total Salary :" << Total << endl;
    }
};

int main()
{
    // creating an object of  the class.
    Employee emp1 = Employee("Sreenivas", 57, 23456);
    // calling public function of class.
    emp1.show_details();
    return 0;
}
