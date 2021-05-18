/*
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n";
    cin>>num1;

    cout<<"Enter the value of num2:\n";
    cin>>num2;

    cout<<"The Sum is: "<< num1+num2;

    return 0;
}
*/




// #include<iostream>
// using namespace std;

// int main()
// {

//      int num1,num2;
//      cout<<"Enter the value of num1:\n";
//      cin>>num1;

//      cout<<"Enter the value of num2:\n";
//      cin>>num2;

//      cout<<"The sum is: "<<num1+num2;

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int num1,num2,mult;
//     cout<<"Enter two integers: ";
//     cin>> num1 >> num2;

//     mult = num1 * num2;

//     cout<< mult <<"=" << num1 <<"*" <<num2;
//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int divident, divisor , quotient , remainder;
    cout<<"Enter the divident: ";
    cin>>divident;

    cout<<"Enter the divisor> ";
    cin>>divisor;

    quotient = divident / divisor;
    remainder = divident % divisor;

    cout<<"Quotient = "<<quotient << endl;
    cout<<"Remainder = "<<remainder; 
    return 0;
} 
