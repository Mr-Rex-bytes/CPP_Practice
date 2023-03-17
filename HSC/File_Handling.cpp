/* Practical 9 : /* File Handling in C++ */

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fcountry;
    ifstream fcap;
    char fnm1[20], fnm2[20], str1[20], str2[20];
    
    cout<<"Enter country file name- " << endl;
    cin>>fnm1;
    fcountry.open(fnm1) ;
    if(!fcountry)
        cout<<"Country file not found" << endl;
    else
    {
        cout<<"Enter capitals filename- " << endl;
        cin>>fnm2;
        fcap.open(fnm2);
        if(!fcap)
            cout<<"Capital file not found." << endl;
        else
        {
            cout<< "Country" << "\t \t" << "Capital" << endl;
            while(!fcountry.eof())
            {
                fcountry.getline(str1,20,'\n');
                cout<< str1 << "\t \t";
                fcap.getline(str2,20,'\n');
                cout<<str2<<endl;
            }
        }
    }
    fcap.close();
    fcountry.close();
}