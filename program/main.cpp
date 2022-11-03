#include <iostream>

using namespace std;

int main()
{

    float a,b,m_z;

    do{
    cout << "Podaj a: " << endl;
    cin>>a;

    }while(a==0);


    cout << "Podaj b: " << endl;
    cin>>b;


   m_z = (-b)/a;


cout<<"Miejsce zerowe funkcji "<<m_z<<endl;


    return 0;
}
