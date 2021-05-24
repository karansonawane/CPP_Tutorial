
//******* 19_Function Overloading with Examples in C++ ******

#include<iostream>
using namespace std;

int sum(int a, int b){
    cout << "With two arguments is" << endl;
    return a + b;
};

int sum (int a ,int b, int c){
    cout << "With two arguments is" << endl;
    return a + b + c;
};

int volume(double r, int h){
    return (3.14* r* r* h);
};

int volume(int a){
    return(a*a*a);
};

int volume(int l, int b, int h){
    return(l*b*h);
};

int main(){
    cout << "The sum of 3 and 4 " << sum(3,4) <<endl ;
    cout << "The sum of 5, 5 and 5 " << sum(5,5,5) <<endl ;
    cout << "The volume of cylinder of radius 5 and height 5 is " << volume(5,5) <<endl ;
    cout << "The volume of Cube of side 3 is " << volume(3) <<endl ;
    cout << "The volume of cuboid of  6, 5, 5 is " << volume(6,5,5) <<endl ;
    

    return 0;
}




// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     cout<<"With two arguments ";
//     return a + b;
// };

// int volume(double r, int h){
//     return(3.14* r* r* h);
// };

// int volume(int a){
//     return(a*a*a);
// };

// int main(){
//     cout<< "The sum of 3 and 4 " << sum(3,4) <<endl;
//     cout<< "The volume of cylinder of radius 3 and height 4 is " << volume(3,4) <<endl;
//     cout<< "The volume of cube of 3 side " <<volume(7) <<endl;
//     return 0;
// }