#include <iostream>
#include <cmath>
using namespace std;

int main()
{

   double a, b, c, m_z1, delta, m_z2, odp, m_z, p, q;


    cout << "Wybierz: " << endl;
    cout << "1 -> Liniowa: \n2 -> Kwadratowa: \n3 -> Miejce zerowe funkcji kwadratowej w postaci kanonicznej \n4 -> Zamiana z postaci kanoniczna na ogolna" << endl;
    cout << "5 -> Zmiana z postaci ogolnej na kanoniczna \n6 -> Zamiana z postaci ilooczynowej na ogolna \n7 -> Zmiana z postaci ogolnej na iloczynowa " << endl;
    cout << "8 -> Zmiana z postaci iloczynowa na kanoniczna \n9 -> Zamiana z postaci kanoniczna na iloczynowa " << endl;
    cin >> odp;



    if (odp == 1) { //Jezeli wybral liniowa


        cout << "Wybrales funkcje liniowa" << endl;

        cout << "Podaj a: " << endl; cin >> a;

        cout << "Podaj b: " << endl; cin >> b;


        m_z = (-b) / a;


        if (a == 0) {
            cout << "Brak mikejsc zerowych" << endl;

            if (b == 0) {
                cout << "Jest nieskonczenie wiele miejsc zerowych" << endl;

            }
        }


        if (b == 0) {
            cout << "miejsce zerowe funkcji liniowej to 0" << endl;

        }
        else {

            m_z = (-b) / a;
            cout << "Miejsce zerowe funkcji liniowej" << m_z << endl;
        }



    }
    else if (odp == 2) {     //jezeli wybral kwadratowa

        cout << "Wybrales funkcje kwadratowa" << endl;

        cout << "Podaj a: " << endl;
        cin >> a;



        while (a == 0) {            //sprawdza a czy jest zerem
            cout << "Podales 0. ";
            cout << "Podaj a: " << endl;
            cin >> a;
        }


        cout << "Podaj b: " << endl;
        cin >> b;

        cout << "Podaj c: " << endl;
        cin >> c;


        delta = (b * b) - 4 * a * c;  //liczy delte
        delta = sqrt(delta);   //robi pierwiastek z delty


        if (delta > 0) {
            delta = sqrt(delta);
            m_z1 = (-b - delta) / 2 * a;
            m_z2 = (-b + delta) / 2 * a;

            cout << m_z1 << endl;
            cout << m_z2 << endl;

        }
        else if (delta == 0) {

            m_z1 = -b / 2 * a;

            cout << m_z1 << endl;

        }
        else if (delta < 0) {

            cout << "Nie ma miejsc zerowych" << endl;

        }
        else cout << "Blad" << endl;



    }
    else if (odp == 3) {
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj p: ";
        cin >> p;
        cout << "Podaj q: ";
        cin >> q;
        cout << " \n ";

        if (a == 0)cout << "a w postaci kanonicznej funkcji kwadratowej nie moze byc równe 0";
        else
        {

            b = -((2 * a) * p);
            delta = -((4 * a) * q);

            if (delta == 0)
            {
                m_z1 = (-b) / (2 * a);
                cout << "Miejcem zerowym funkcji kwadratowej  jest: " << m_z1 << "\n\n";
            }
            else if (delta > 0)
            {
                delta = sqrt(delta);
                m_z1 = (((-b) - delta)) / (2 * a);
                m_z2 = (((-b) + delta)) / (2 * a);

                cout << "Miejscami zerowymi funkcji kwadratowej  jest: " << m_z1 << " oraz " << m_z2 << "\n\n";

            }
            else if (delta < 0)
            {
                cout << "Ta Funkcji kwadratowa nie posiada miejsc zerowych \n\n";
            }

        }

    }
    else if (odp == 4) {
        cout << "Wybrales zamiane z postaci kanoniczna na ogolna" << endl;

        do {
            cout << "Podaj a rozne od 0: ";
            cin >> a;
        } while (a == 0);
        cout << "Podaj p: "; cin >> p;
        cout << "Podaj q: "; cin >> q;
        b = -((2 * a) * p);
        delta = -((4 * a) * q);
        c = ((b * b) - delta) / (4 * a);
        if (a > 0) {

            if (b == 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << c << "\n";
            }
            else if (b > 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << b << "x" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << b << "x+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << b << "x" << c << "\n";

            }
            else if (b < 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2-" << b << "x" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << b << "x+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << b << "x" << c << "\n";

            }


        }
        else {
            if (b == 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2" << c << "\n";
            }
            else if (b > 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << b << "x" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << b << "x+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << b << "x" << c << "\n";

            }
            else if (b < 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2-" << b << "x" << "\n";
                else if (c > 0) cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2-" << b << "x+" << c << "\n";
                else if (c < 0) cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2-" << b << "x" << c << "\n";

            }

        }








    }
    else if (odp == 5) {
        cout << "Wybrales zamiane funkcji  z postaci ogolnej na kanoniczna" << endl;

        do {
            cout << "Podaj a rozne od 0: ";
            cin >> a;
        } while (a == 0);
        cout << "Podaj b: ";
        cin >> b;
        cout << "Podaj c: ";
        cin >> c;
        cout << " \n\n ";
        delta = (b * b) - 4 * a * c;
        p = -(b) / (2 * a);
        q = -(delta) / (4 * a);
        if (p == 0) {
            if (q == 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x)^2 \n";
            else if (q > 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x)^2+" << q << "\n";
            else if (q < 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x)^2-" << -q << "\n";


        }
        else if (p > 0) {
            if (q == 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x-" << p << ")^2";
            else if (q > 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x-" << p << ")^2+" << q << "\n";
            else if (q < 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x-" << p << ")^2-" << -q << "\n";

        }
        else if (p < 0) {
            if (q == 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x+" << -p << ")^2";
            else if (q > 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x+" << -p << ")^2+" << q << "\n";
            else if (q < 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x+" << -p << ")^2-" << -q << "\n";
        }




    }
    else if (odp == 6) {
        cout << "Wybrales zamiane z postaci ilooczynowej na ogolna" << endl;
        do {
            cout << "Podaj a rozne od 0: ";
            cin >> a;
        } while (a == 0);
        cout << "Podaj x1: ";
        cin >> m_z1;
        cout << "Podaj x2: ";
        cin >> m_z2;
        b = -(a) * (m_z1 * m_z2);
        c = a * m_z1 * m_z2;
        if (a > 0) {

            if (b == 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << c << "\n";
            }
            else if (b > 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << b << "x" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << b << "x+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2+" << b << "x" << c << "\n";

            }
            else if (b < 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2-" << b << "x" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << b << "x+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: " << a << "x^2" << b << "x" << c << "\n";

            }


        }
        else {
            if (b == 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2" << c << "\n";
            }
            else if (b > 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << b << "x" << "\n";
                else if (c > 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << b << "x+" << c << "\n";
                else if (c < 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2+" << b << "x" << c << "\n";

            }
            else if (b < 0) {
                if (c == 0)cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2-" << b << "x" << "\n";
                else if (c > 0) cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2-" << b << "x+" << c << "\n";
                else if (c < 0) cout << "Wzor tej funkcji w postaci ogolnej to: -" << a << "x^2-" << b << "x" << c << "\n";

            }

        }



    }
    else if (odp == 7) {
        cout << "Wybrales zmiane z postaci ogolnej na iloczynowa" << endl;
        do {
            cout << "Podaj a rozne od 0: ";
            cin >> a;
        } while (a == 0);
        cout << "Podaj b: ";
        cin >> b;
        cout << "Podaj c: ";
        cin >> c;
        cout << " \n\n ";
        delta = (b * b) - 4 * a * c;  //liczy delte
        delta = sqrt(delta);   //robi pierwiastek z delty


        if (delta > 0) {
            delta = sqrt(delta);
            m_z1 = (-b - delta) / 2 * a;
            m_z2 = (-b + delta) / 2 * a;

            if (m_z1 == 0) {
                if (m_z2 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2 \n";
                else if (m_z2 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x-" << m_z2 << ")^2 \n";
                else if (m_z2 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x+" << -m_z2 << ")^2 \n";
            }
            else if (m_z1 > 0) {
                if (m_z2 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x-" << m_z1 << ")^2 \n";
                else if (m_z2 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x-" << m_z1 << ") ^ 2 * " << "(x - " << m_z2 << ") ^ 2 \n";
                else if (m_z2 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x-" << m_z1 << ")^2*" << "(x+" << -m_z2 << ")^2 \n";
            }
            else if (m_z1 < 0) {
                if (m_z2 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x+" << -m_z1 << ")^2 \n";
                else if (m_z2 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x+" << -m_z1 << ") ^ 2 * " << "(x - " << m_z2 << ") ^ 2 \n";
                else if (m_z2 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x+" << -m_z1 << ")^2*" << "(x+" << -m_z2 << ")^2 \n";
            }

        }
        else if (delta == 0) {
            m_z1 = -b / 2 * a;
            if (m_z1 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2 \n";
            else if (m_z1 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x-" << m_z1 << ")^2 \n";
            else if (m_z1 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x+" << -m_z1 << ")^2 \n";



        }
        else if (delta < 0)cout << "Wzor tej funkcji w postaci iloczynowej to: " << a << "\n";



    }
    else if (odp == 8) {
        cout << "Wybrales zamiane funkcji  z postaci iloczynowa na kanoniczną" << endl;
        do {
            cout << "Podaj a rozne od 0: ";
            cin >> a;
        } while (a == 0);
        cout << "Podaj x1: ";
        cin >> m_z1;
        cout << "Podaj x2: ";
        cin >> m_z2;
        p = (m_z1 + m_z2) / 2;
        q = a * (p - m_z1) * (p - m_z2);

        if (p == 0) {
            if (q == 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x)^2 \n";
            else if (q > 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x)^2+" << q << "\n";
            else if (q < 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x)^2-" << -q << "\n";


        }
        else if (p > 0) {
            if (q == 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x-" << p << ")^2";
            else if (q > 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x-" << p << ")^2+" << q << "\n";
            else if (q < 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x-" << p << ")^2-" << -q << "\n";

        }
        else if (p < 0) {
            if (q == 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x+" << -p << ")^2";
            else if (q > 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x+" << -p << ")^2+" << q << "\n";
            else if (q < 0)cout << "Wzor tej funkcji w postaci kanonicznej to: " << a << "(x+" << -p << ")^2-" << -q << "\n";
        }




    }
    else if (odp == 9) {
        cout << "Wybrales zamiane  z postaci kanoniczna na iloczynowa" << endl;
        do {
            cout << "Podaj a rozne od 0: ";
            cin >> a;
        } while (a == 0);
        cout << "Podaj p: "; cin >> p;
        cout << "Podaj q: "; cin >> q;
        c = -(q)/(a);
        if (c < 0)c = -c;
        c = sqrt(c);

        m_z1 = p +c;
        m_z2 = p -c;


        if (m_z1 == 0) {
            if (m_z2 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2 \n";
            else if (m_z2 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x-" << m_z2 << ")^2 \n";
            else if (m_z2 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x+" << -m_z2 << ")^2 \n";
        }
        else if (m_z1 > 0) {
            if (m_z2 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x-" << m_z1 << ")^2 \n";
            else if (m_z2 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x-" << m_z1 << ")^2*" << "(x-" << m_z2 << ") ^ 2 \n";
            else if (m_z2 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x-" << m_z1 << ")^2*" << "(x+" << -m_z2 << ")^2 \n";
        }
        else if (m_z1 < 0) {
            if (m_z2 == 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x)^2*" << "(x+" << -m_z1 << ")^2 \n";
            else if (m_z2 > 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x+" << -m_z1 << ")^2*" << "(x-" << m_z2 << ") ^ 2 \n";
            else if (m_z2 < 0)cout << "Wzor tej funkcji w postaci ilozynowej to: " << a << "(x+" << -m_z1 << ")^2*" << "(x+" << -m_z2 << ")^2 \n";
        }


    }





    return 0;
        }


