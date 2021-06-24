//************** Classes, Public and Private access modifier in C++ ***************


#include<iostream>
using namespace std;

class Employee
{
   private:
     int a, b, c;
   public:
     int d, e;
     void setData(int a1, int b1, int c1);
     void getData(){
        cout<<"The value of a is " <<a<<endl;
        cout<<"The value of b is " <<b<<endl;
        cout<<"The value of c is " <<c<<endl;
        cout<<"The value of d is " <<d<<endl;
        cout<<"The value of e is " <<e<<endl;

     }
    
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee kran;
    kran.d = 35;
    kran.e = 77;
    kran.setData(1,2,4);
    kran.getData();

    return 0;
}



// #include<iostream>
// using namespace std;

// class Employee
// {
// private:
//     int a, b, c;
// public:
//     int d, e;
//     void setData(int a1, int b1, int c1);
//     void getData(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
//     }
// };

// void Employee::setData(int a1, int b1, int c1)
// {
//     a = b1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee kran;
//     kran.d = 23;
//     kran.e = 56;
//     kran.setData(2, 6 ,7);
//     kran.getData();
//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Employee
// {
// private:
//     int salary;
// public:
//     void setSalary(int s){
//         salary = s;
//     }
//     int getSalary(){
//         return salary;
//     }
// };


// int main(){
//     Employee kran;
//     kran.setSalary(66000);
//     cout << kran.getSalary();
//     return 0;
// }