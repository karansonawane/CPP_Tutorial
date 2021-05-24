#include<iostream>
using namespace std;

// int sum (int a , int b){
//     int c = a + b;
//     return c;
// }
// ...........call by reference using pointers..........

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
int main(){
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<< endl;
    swap(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<< endl;

    return 0;
}

// ...........Swap a and b using pointer reference..........


// #include<iostream>
// using namespace std;

// int sum (int a , int b){
//     int c = a + b;
//     return c;
// }

// ...........call by reference using c++ reference variables..........


// void swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp; 
// }
// int main(){
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<< endl;
//     swap(x,y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<< endl;

//     return 0;
// }