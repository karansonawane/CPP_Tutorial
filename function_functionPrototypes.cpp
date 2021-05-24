// ...........Function..........

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//    int c = a+b;
//    return c;
// }
// int main(){
//     int num1, num2;
//     cout<<"Enter the first number "<<endl;
//     cin >> num1;

//     cout<<"Enter the second number "<<endl;
//     cin >> num2;

//     cout<<"The Sum is  "<<endl <<sum(num1, num2);
//     return 0;
// }

// ...........Function Prototype..........


// #include<iostream>
// using namespace std;

// int sum(int , int);

// int main(){
//     int num1, num2;
//     cout<<"Enter the first number "<<endl;
//     cin >> num1;

//     cout<<"Enter the second number "<<endl;
//     cin >> num2;

//     cout<<"The Sum is  "<<endl <<sum(num1, num2);
//     return 0;
// }
// int sum(int a, int b){
//    int c = a+b;
//    return c;
// }


#include<iostream>
using namespace std;

int product(int a, int b){
   return a*b;
}
int main(){
    int num1, num2;
    cout<<"Enter the first number "<<endl;
    cin >> num1;

    cout<<"Enter the second number "<<endl;
    cin >> num2;

    cout<<"The Sum is  "<<endl <<product(num1, num2);
    return 0;
}

// ...........Finding max value by calling Function..........


// #include<iostream>
// using namespace std;

// int max (int x , int y);

// int main(){

//     int a = 100;
//     int b = 280;
//     int ret ;

//     ret = max(a, b);
//     cout << "Maximum number is " << ret << endl;
    
//     return 0;
// }
// int max (int x, int y){
//     int result;

//     if (x > y)
//     result = x;

//     else 
//     result = y;

//     return result;
// }

