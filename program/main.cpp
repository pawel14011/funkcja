#include <iostream>

using namespace std;

int main()
{

    float a,b,m_z;
/*
    do{
    cout << "Podaj a: " << endl;
    cin>>a;

    }while(a==0);

*/

    cout << "Podaj a: " << endl;
    cin>>a;

    cout << "Podaj b: " << endl;
    cin>>b;


    if(a==0){

             cout<<"Brak mikejsc zerowych"<<endl;

        if(b==0){

        cout<<"Jest nieskonczenie wiele miejsc zerowych"<<endl;

    }

    }  if(b==0){

        cout<<"miejsce zerowe to 0"<<endl;

    }else {

     m_z = (-b)/a;


cout<<"Miejsce zerowe funkcji "<<m_z<<endl;




    }






    return 0;
}
