#include<iostream>
using namespace std;

typedef struct employee{

    int eId;
    char favChar;
    float salary;
}kd;


int main(){
    kd  karan;
    karan.eId = 1;
    karan.favChar = 'd';
    karan.salary = 120000000;

    cout<< "The empl id of karan is "<<karan.eId<<endl;
    cout<< "The Fav char of karan is "<<karan.favChar<<endl;
    cout<< "The salary of karan is "<<karan.salary<<endl;

    return 0;
}
