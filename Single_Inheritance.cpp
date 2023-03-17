/*  Assignment 7 : Single inheritance / Implementing Inheritance 
1. Write a C++ program, using OOP to demonstrating the
implementation of single inheritance, having two classes.
2. Enter the program and verify the proper execution of the same
on the computer.
*/

#include<iostream>
using namespace std;
class Employee 
{
public:
    int eno;
    char name[20], des[20];

    void get() 
    {
        cout << "Enter the employee number:";
        cin>>eno;
        cout << "Enter the employee name:";
        cin>>name;
        cout << "Enter the designation:";
        cin>>des;
    }
};

class Salaried_Employee : public Employee 
{
    float bp, hra, da, pf, np;
public:
    void get1() 
    {
        cout << "Enter the Basic pay:";
        cin>>bp;
        cout << "Enter the Human Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Providend Fund:";
        cin>>pf;
    }

    void calculate() {
    np = bp + hra + da - pf;
    }
    void display() 
    {
        cout << eno << "\t" << name << "\t\t" << des << "\t" << bp
        << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
    }
};

int main() 
{
    int i, n;
    char ch;
    Salaried_Employee s[10];
    cout << "Enter the number of employees:";
    cin>>n;
    for (i = 0; i < n; i++) 
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout << "\ne_no \t e_name\t des \t bp \t hra \t da \t pf \t np \n";
    for (i = 0; i < n; i++) 
    {
        s[i].display();
    }

    return 1;
}