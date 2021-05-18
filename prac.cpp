// Assignment operators are : 


// #include<iostream>

// using namespace std;

// int main()
// {
//     int a = 3, b=4;
//     cout<<"The value of assignment operator a+b is: "<<a+b<<endl;
//     cout<<"The value of assignment operator a-b is: "<<a-b <<endl;
//     cout<<"The value of assignment operator a/b is: "<<a/b<<endl;
//     cout<<"The value of assignment operator a%b is: "<<a%b<<endl;
//     cout<<"The value of assignment operator a*b is: "<<a*b<<endl;
//     cout<<"The value of assignment operator a++ is: "<<a++<<endl;
//     cout<<"The value of assignment operator a-- is: "<<a--<<endl;
//     cout<<"The value of assignment operator ++a is: "<<++a<<endl;
//     cout<<"The value of assignment operator --a is: "<<--a<<endl;
    


//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
    
//     int num1, num2;
//     cout<<"Enter the Value of num1: \n";
//     cin>>num1;

//     cout<<"Enter the Value of num2: \n";
//     cin>>num2;

//     cout<<"The sum is: "<< num1+num2;



//     return 0;
// }


#include<iostream>
using namespace std;

void swap (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 5 ;
    cout << "The value of x is "<<x<<" and the value of y is " <<y<< endl;
    swap(x, y);
    cout << "The value of x is "<<x<<" and the value of y is " <<y<< endl;
    return 0;
}
