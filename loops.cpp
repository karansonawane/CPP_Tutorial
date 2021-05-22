// #include<iostream>

// using namespace std;

// int main()
// {
//     for (int i = 0 ; i < 100; i++)
//     cout<<i<<endl;
//     return 0;

//     int i = 1;
//      while (i<30)
//      {
//          /* code */
//          cout<<i<<endl;
//          i++;
//      }
     

// }











#include<iostream>

using namespace std;

int main()
{

// ********* Table of 6 using for loop *********



    for (int i = 1; i <= 10 ; i++)
    {
       cout<<i*6<<endl;

    }

    

// ********* Table of 6 using While loop *********


    int i = 1;
    while (i<=10)
    {
        /* code */
        cout<<i*6<<endl;
        i++;
    }



// ********* Table of 6 using Do-While loop *********

    int i=1;
     do
     {
         /* code */
          cout<<i*6<<endl;
          i++;
     } while (i<=10);
     
    
    
    return 0;
}
