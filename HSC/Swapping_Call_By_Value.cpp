/* Assignment 1 : Swapping call by Value
1. Write a program in C++ that exchange data (Call by Value) using SWAP
function i.e. void swap (int, int) to interchange the given two numbers.
2. Enter the program and verify proper execution of the same on the computer
The output must list the given numbers before as well as after swapping
*/

#include <iostream>
using namespace std;

// Function to Swap two numbers by value
void swap(int num1,int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Note : The values are swapped within the function scope only
    cout<<" \nAfter Swapping inside swap() function: First Number: "<< num1 <<" Second Number: " << num2 << endl;
}

int main()
{
    int num1, num2;
    // Get the two numbers from user
    cout<<"Enter 1st Number: ";
    cin>>num1;
    
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    
    // Display numbers before swapping
    cout<< "Before Swapping: First Number: "<< num1 << " Second Number: "<< num2 << endl;

    // Swapping function call
    swap(num1, num2);
    
    cout<<" \nAfter Swapping in main() function: First Number: "<<num1 <<" Second Number: " << num2 << endl;
    cout<<"Note: Effect of swapping is not retained in main() for pass by value case." << endl;
    return 0;
}
