/* Assignment 4 : Binary Search
1. Write a program in C++, that first initializes an array of
given 10 integer numbers. The program must verify
whether a given element belongs to this array or not, using
BINARY SEARCH technique.
2. The element (to be search) is to be entered at the time of
execution. If the number is found, the program should
print: “The Number is Found” otherwise, it should print:
“The Number is not Found”.
3. Enter the program and verify proper execution of the same on the computer.
*/ 

#include<iostream>
using namespace std;

// Binary Search function
int search(int a[], int n, int e)
{
    int f,l,m;
    f = 0;
    l = n-1;
    while(f <=l )
    {
        m = (f+l)/2;
        if(e==a[m])
            return m;
        else if(e > a[m] )
            f = m+1;
        else
            l = m-1;
    }
    
    return -1;
}

// Main Function
int main()
{
    int n,i,a[100],e,res;
    cout<<"How Many Elements: ";
    cin>>n;
    cout<<"\n Enter Elements of Array in Ascending order\n";
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }

    cout<<"\nEnter element to search: ";
    cin >> e;
    res = search(a,n,e);
    if(res !=-1 )
        cout<<"\nElement is Found at position "<< res+1;
    else
        cout<<"\nElement is not Found.";

    return 0;
}
