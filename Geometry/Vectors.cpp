#include<iostream>
#include<cmath>
using namespace std;

// This program defines class vector to calculate magnitude, slope and to perform vector operations

// @author - Vikram Jirgale

// Note : Vinay - I have written my code review comments with #VAJ tag in the code comments.
// Pleasec check the tag in the code and fix the comments

// #VAJ - Please write the description of the class here. - Move the comments from line 5 here
// #VAJ - To avoid confusion with vector data structure, you may use name as Vector3D, that is a general practice.
class Vector
{
    // #VAJ - If a,b, c are representing X, Y, Z coordinates, then using variables x, y,z would make more sense instead of a, b, c
    // Otherwise, if you would like your vector to be termed as ai+bj+ck, then mention so in the comments. In that case, ignore above comment
    float a,b,c;
    public:

        // #VAJ - Please write description in comments over each function.
        // E.g. Here, Default Constructor, Initializes all coordinates as 0.0
            Vector() 
            {
                a = 0;
                b = 0;
                c = 0;    
            }

            // #VAJ - Write comments
            Vector(int A, int B, int C)
            {
                a =A;
                b =B;
                c =C;
            }

            // #VAJ - Write Copy Constructor for the Vector class, also learn about overloading = operator and write it

            // #VAJ - Write Comments describing what this function does
            void   get_values()
            {
                cout << "We are representing our vector in ai+bj+ck format, where a, b, c are coefficients of X, Y, Z resp." <<endl;
                cout << "Enter coefficient of i" <<endl;
                cin >> a;
                cout << endl <<"Enter coefficient of j" <<endl;
                cin >> b;
                cout << endl <<"Enter coefficient of k" <<endl;
                cin >> c;
            }

            // #VAJ - Write Comments describing what this function does
            void display(Vector V)
            {
                cout <<endl <<"vector is : " <<a <<"i" << "+ " <<b <<"j" << "+ " <<c <<"k" <<endl;
            }

            // #VAJ - Write Comments describing what this function does
            double cal_magnitude(Vector V)
            {
                // #VAJ- ^ is a Binary XOR operator in C++.          
                // #VAJ- Refer to https://www.geeksforgeeks.org/power-function-cc/
                // #VAJ- use pow() - power function inside or write a*a for a^2.
                double magnitude = sqrt(a*a + b*b + c*c);
                return magnitude;
            }

            // #VAJ - Write Comments describing what this function does
            // #VAJ - You may also override an operator '*' for this
            // #VAJ - I would recommend to pass 'const Vector&' as arguments
            double dot_product(Vector V, Vector U)
            {
              double dot_product = ((V.a * U.a) + (V.b * U.b) + (V.c * U.c)) ;
              return dot_product;
            }

            // #VAJ - Write Comments describing what this function does
            // #VAJ - You may choose an operator symbol for this e.g. # - Try this
            // #VAJ - I would recommend to pass 'const Vector&' as arguments
            Vector cross_product(Vector V, Vector U)
            {
                // cross product = i(b1c2 -b2c1) -j(a1c2 -a2c1) + k(a1b2 - a2b1)
                Vector cross_product;
                cross_product.a = (V.b * U.c) - (V.c * U.b);
                cross_product.b = (V.c * U.a) - (V.a * U.c);
                cross_product.c = (V.a * U.b) - (V.b * U.a);
                return cross_product;
            }

            // #VAJ - Write Comments describing what this function does
            // #VAJ - I would recommend to pass 'const Vector&' as arguments
            float cal_angle(Vector V, Vector U)
            {
                //angle  = (v.u)/(vu)
                float cosign_angle = dot_product(V,U) / (cal_magnitude(V) * cal_magnitude(U));
                float angle = acos(cosign_angle);
                return angle;
                                
            }

            // #VAJ - Write Comments describing what this function does
            // #VAJ - Why this function ? There is a standard cos() function in cmath library.
            float cal_sin_angle(Vector V, Vector U)
            {
                float sin_theta = sin(cal_angle(V,U));
                return sin_theta;

            }

            // #VAJ - Write Comments describing what this function does
            // #VAJ - Check comments in the above function
            float cal_cos_angle(Vector V, Vector U)
            {
                float cos_theta;
                cos_theta = cos(cal_angle(V,U));
            }

            // #VAJ - Write Comments describing what this function does. You may also try to assign an operator for this.
            double cal_box_product(Vector V, Vector U, Vector W)
            {
                double box_product = dot_product(V,(cross_product(U,W)));
                return box_product;
            }

            // #VAJ - Write Comments describing what this function does. You may also try to assign an operator for this.
            Vector Vector_triple_product(Vector V, Vector U, Vector W)
            {
                Vector triple_prod;
                triple_prod.a = (dot_product(V,W) * U.a ) - (dot_product(V,U) * W.a );
                triple_prod.a = (dot_product(V,W) * U.b ) - (dot_product(V,U) * W.b );
                triple_prod.a = (dot_product(V,W) * U.c ) - (dot_product(V,U) * W.c );
                return triple_prod;

            }

            // #VAJ - Write Comments describing what this function does
            float Projection_h(Vector V, Vector U)
            {
                float projection = (dot_product(V,U) / cal_magnitude(U));
                return projection; 

            }

            // #VAJ - Write Comments describing what this function does
            float Projection_v(Vector V, Vector U)
            {
                float projection = (cal_magnitude(cross_product(V,U)) / cal_magnitude(U));
                return projection; 

            }


};


int main()
{
    
    return 0;
}
