/* Assignment 2 : Swapping call by Reference
1. Write a program in C++ that exchange data (Call by Reference)
using SWAP function that is void swap (int*, int*) to
interchange the given two numbers.
2. Enter the program and verify proper execution of the same on the
computer.
3. The output must list the given numbers before as well as after
swapping.
*/

#include<iostream>

using namespace std;

// This function swaps the values of arguments by reference
void swap(int *p1, int *p2)
{
    int temp;
    temp= *p1;
    *p1= *p2;
    *p2= temp;
}

// main function
int main()
{
    int a, b;
    cout<<"Enter two values:";
    cin>>a>>b;
   
    cout<<"\n Before swapping: a= " << a <<" b= "<< b ;
   
    swap(&a, &b);
   
    cout<<"\n After swapping: a= "<< a <<" b= "<< b << endl;
    cout<<"Note: In pass by reference, the swapped values are ratained outside the swap() function." <<endl;
       
    return 0;
}