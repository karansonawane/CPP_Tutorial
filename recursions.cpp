//************** Recursions & Recursive Functions in C++ ***************

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int main(){
//     int a;
//     cout << "Enter a number " <<endl;
//     cin>> a;
//     cout << "The factorial of "<<a<<" is "<<factorial(a) <<endl;
//     return 0;
// }


//************* Indirect Recursions ***********

#include<iostream>
using namespace std;

int factorial1(int);
int factorial2(int);

int factorial1(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial2(n-1);
}

int factorial2(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial1(n-1);
}


int main(){
    int a;
    cout << "Enter a number " <<endl;
    cin>> a;
    cout << "The factorial of "<<a<<" is "<<factorial1(a) <<endl;
    return 0;
}

