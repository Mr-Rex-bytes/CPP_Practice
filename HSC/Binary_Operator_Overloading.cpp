/* Assignment 6. Binary Operator overloading 
1. Write a program in C++ for addition/subtraction of two complex
numbers using operator overloading. 
2. The program should print the given complex number and their addition/substraction.
*/ 

#include<iostream>
using namespace std;

// Class for Complex Number
class Complex 
{
    int a, b;
    public:
    void getvalue() 
    {
        cout << "Enter the value of Complex Numbers a,b:";
        cin >> a>>b;
    }

    // Operator '+' overloading 
    Complex operator+(Complex ob) 
    {
        Complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        
        return (t);
    }

    // Add function 
    Complex Add(Complex ob) 
    {
        Complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        
        return (t);
    }

    // Operator '-' overloading
    Complex operator-(Complex ob) 
    {
        Complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }

    // Print the Complex number
    void display() 
    {
        cout << a << " + " << b << "i" << "\n";
    }
};

int main() 
{
    Complex obj1, obj2, result1, result2;
    obj1.getvalue();
    obj2.getvalue();
    result1 = obj1 + obj2;
    result2 = obj1 - obj2;

    cout << "Input Values:\n";
    obj1.display();
    obj2.display();
    cout << "Result: \n";
    cout << "Addition : ";
    result1.display();
    cout << "Subtraction : ";
    result2.display();
    
    return 0;
}