/* Assignment 5. Constructor & destructor 
1. Write a C++ Program using OOP concept to create Line class
with constructor & destructor. 
2. The program must print the message “Object is being created” during initialization. 
3. The program must display “Object is being deleted” message when the destructor is called 
    for the object when it reached the end of it’s scope.
*/

#include <iostream>
using namespace std;

// Line Class
class Line 
{
public:
    void setLength( double len );
    double getLength( void );
    Line(); // This is the constructor declaration
    Line(double len) { length = len;}
    // Line(Line& l); // Copy Constructor
    ~Line(); // This is the destructor: declaration
private:
    double length;
};

// Member functions definitions 

// Constructor
Line::Line(void) 
{
    cout << "Object is being created" << endl;
}

// Destructor
Line::~Line(void) 
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength( double len ) 
{
    length = len;
}

double Line::getLength( void ) 
{
    return length;
}

// Main function for the program
int main() 
{
    Line line;
    Line line2(2);
    line = line2;
    // set line length
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() <<endl;
    return 0;
}