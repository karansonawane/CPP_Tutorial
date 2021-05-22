#include<iostream>
using namespace std;

int main(){
    int array[4] = {45,78,87,56};
    int i = 0;
    // cout<< array[0] <<endl;

    // for( int i = 0; i < 4 ; i++)
    // {
    //      cout<< " The value of array "<<i<<" is "<<array[i]<<endl;
    // }

    // while (i<4)
    // {
    //     cout<< " The value of array "<<i<<" is "<<array[i]<<endl;
    //     i = i+1;
    // }

    // do{
    //     cout<< " The value of array "<<i<<" is "<<array[i]<<endl;
    //     i++;
    // }while (i<4);

    int* p = array;
    cout<<*p<<endl;
    cout<< "The value of *p is "<< *p<<endl;
    cout<< "The value of *(p+1) is "<< *(p+1)<<endl;
    cout<< "The value of *(p+2) is "<< *(p+2)<<endl;
    cout<< "The value of *(p+3) is "<< *(p+3)<<endl;

    return 0;
     
    

}