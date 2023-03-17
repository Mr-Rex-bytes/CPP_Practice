
/* Assignment 3 : Linear Search
1. Write a program in C++, that first initializes an array of given 10 integer
numbers. The program must verify whether a given element belongs to this
array or not, using LINEAR SEARCH technique.
2. The element (to be searched) is to be entered at the time of execution. If the
number is found, the program should print: “The Number is Found”
otherwise, it should print: “The Number is not Found”.
3. Enter the program and verify proper execution of the same on the computer.
*/

#include<iostream>
using namespace std;
int main()
{
    int a[15],n,x,i;
    bool flag = false;
    cout<<"How many elements? You can enter upto 15 elements";
    cin>>n;
    cout<<"\nEnter elements of the array\n ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"\nEnter element to search: ";
    cin>>x;

    // Let's search it now
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag = true;
            break;
        }
    }

    if(flag == true )
        cout<<"\nThe Number is Found, at position " << i+1 ;
    else
        cout<<"\nThe Number is not Found";

    return 0;
}