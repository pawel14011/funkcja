#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a,b,c,m_z1,delta,m_z2;



    cout << "Podaj a: " << endl;
    cin>>a;



while(a==0){
    cout << "Podales 0. ";
    cout << "Podaj a: " << endl;
    cin>>a;
}


    cout << "Podaj b: " << endl;
    cin>>b;

    cout << "Podaj c: " << endl;
    cin>>c;



 delta = (b*b)-4*a*c;



delta = sqrt(delta);




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

 }else cout<<"B³¹d"<<endl;












    return 0;
}
