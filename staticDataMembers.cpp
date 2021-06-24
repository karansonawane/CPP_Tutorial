#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id: " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << " The Id of Employee is: " << id << " and this is the employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is: " << count << endl;
    }
};

int Employee::count;

int main()
{
    Employee Karan, kran, kd;
    Karan.setData();
    Karan.getData();
    Employee::getCount();

    kran.setData();
    kran.getData();
    Employee::getCount();

    kd.setData();
    kd.getData();
    Employee::getCount();
    return 0;
}
