#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a,b,c,m_z1,delta,m_z2,odp,m_z,p,q;


    cout<<"Wybierz: "<<endl;
    cout<<"1 -> Liniowa: \n2 -> Kwadratowa: \n3 -> Zamiana kanoniczna na ogolna"<<endl;
    cin>>odp;



    if(odp == 1){ //Jezeli wybral liniowa


         cout<<"Wybrales funkcje liniowa"<<endl;

         cout << "Podaj a: " << endl; cin>>a;

         cout << "Podaj b: " << endl; cin>>b;


         m_z = (-b)/a;


        if(a==0){
            cout<<"Brak mikejsc zerowych"<<endl;

                if(b==0){
                    cout<<"Jest nieskonczenie wiele miejsc zerowych"<<endl;

                }
        }


        if(b==0){
            cout<<"miejsce zerowe funkcji liniowej to 0"<<endl;

        }else{

                m_z = (-b)/a;
                cout<<"Miejsce zerowe funkcji liniowej"<<m_z<<endl;
             }



    }else if (odp == 2){     //jezeli wybral kwadratowa

        cout<<"Wybrales funkcje kwadratowa"<<endl;

        cout << "Podaj a: " << endl;
        cin>>a;



        while(a==0){            //sprawdza a czy jest zerem
            cout << "Podales 0. ";
            cout << "Podaj a: " << endl;
            cin>>a;
        }


        cout << "Podaj b: " << endl;
        cin>>b;

        cout << "Podaj c: " << endl;
        cin>>c;


        delta = (b*b)-4*a*c;  //liczy delte
        delta = sqrt(delta);   //robi pierwiastek z delty


        if(delta > 0 ){
            delta = sqrt(delta);
            m_z1 = (-b-delta)/2*a;
            m_z2 = (-b+delta)/2*a;

            cout<<m_z1<<endl;
            cout<<m_z2<<endl;

        }else if (delta == 0 ){

             m_z1 = -b/2*a;

            cout<<m_z1<<endl;

        }else if(delta < 0){

            cout<<"Nie ma miejsc zerowych"<<endl;

        }else cout<<"Blad"<<endl;



    }else if (odp == 3){

  cout<<"Wybrales zamiane funkcji kanonicznej na liniowa"<<endl;

    cout << "Podaj a: " << endl; cin>>a;

    cout << "Podaj p: " << endl; cin>>p;

    cout << "Podaj q: " << endl; cin>>q;








 return 0;
}
