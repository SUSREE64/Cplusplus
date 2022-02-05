/* OOPs features of Constructor, Getter, setter method, Private variables manipulation
Instancing of objects etc */

#include <iostream>
using namespace std;
class Employee
{
private:
    string Name;
    int Age;
    int BasePay;
    //Parameters related to Salary calculations
    float pf_factor = 0.15;
    float hra_factor = 0.10;
    float Spl_factor = 0.25;

public:
    void show_details()
    {
        float HRA = BasePay * hra_factor;
        float PF = BasePay * pf_factor;
        float Spl = BasePay * Spl_factor;
        float Total = (BasePay + HRA + PF + Spl);
        cout << "Employee Name : " << Name << endl;
        cout << "Age :" << Age << endl;
        cout << "Salary :" << BasePay << endl;
        cout << "HRA :" << HRA << endl;
        cout << "Provident Fund :" << PF << endl;
        cout << "Special Allowance :" << Spl << endl;
        cout << "--------------------------------" << endl;
        cout << "Total Salary : ----" << Total << endl;
    }
    // Setter function to change something in private
    void setpf_factor(float new_pf_factor)
    {
        pf_factor = new_pf_factor;
    }
    // getter functions to show what is available in the variables
    string getName()
    {
        return Name;
    }

    //Constructor method
    // 1. This has to be in public space
    // 2. Its name has to be same as class
    // 3. It does not return any thing
    // 4. Its purpose is  to initialize the instance with variables.
    Employee(string name, int age, int basepay)
    {
        cout << "Object Created" << endl;
        Name = name;
        Age = age;
        BasePay = basepay;
    }
};

int main()
{
    Employee emp1 = Employee("Sree", 57, 15000);
    emp1.show_details();
    //change the pf_factor with a new value
    cout << "After PF Changed :" << endl;
    emp1.setpf_factor(0.25);
    emp1.show_details();

    // Showing a variable using getter function
    cout << "Name in the record : " << emp1.getName() << endl;

    return 0;
}
