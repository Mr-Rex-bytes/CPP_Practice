/* Practical No. 8 : Study of Virtual Function */

#include<iostream>
#include<string.h>

using namespace std;

class Person
{
public: 
    char name[10] = "Ramesh";  
    virtual void print()
    {
        cout<<"\n The default name of person is " <<  name << endl;
        cout << "This is coming from base class - Person" << endl;
    }
};

class Student: public Person
{
    
public:
    Student():Person()
    {
        strcpy(name , "Suresh");
    }

    void print()
    {
        cout<<"\nThe Name of Student is " << name << endl ;
        cout << "This is coming from the derived class - Student" << endl;
    }
};

int main()
{
    Person *p;
    Person p1;
    p=&p1;
    p->print();
    Student s1;
    p= &s1;
    p->print();
}