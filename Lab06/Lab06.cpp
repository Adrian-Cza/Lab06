#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    // Zadanie 1
    /*
        int a = 7, b = 2;
        cout << a / b;
        cout << static_cast<double>(a) / b;
        cout << static_cast<double>(a / b);
    */
    
    // Zadanie 2
    /*
    double a = 3.99;
    double b = -3.99;

    int c = a;
    int d = b;

    int e = static_cast<int>(a);
    int f = static_cast<int>(b);

    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << e << " " << f << endl;
    */

    // Zadanie 3
    /*
    char a = 'A';
    int b = a;
    cout << b;

    int c = 66;
    char d = c;
    cout << endl << d;
    */

    // Zadanie 4
    /*
    int a = 5, b = 8, c = 10, d = 17;
    cout << (a + b + c) / 4 << endl;
    cout << static_cast<double>(a + b + c) / 4;
    */

    // Zadanie 5
    /*
    string a, b;
    double procent;
    try {
        cout << "Podaj liczbe wykonanych elementow: ", cin >> a;
        int c = stoi(a);
        cout << "Podaj liczbe wszystkich elementow: ", cin >> b;
        int d = stoi(b);
        if (d != 0) {
            procent = static_cast<double>(c) / d;
            cout << "Procent wykonania: " << procent * 100 << "%";
        }
        else {
            cout << "Nie mozna dzielic przez 0";
        }
        
    }
    catch (const invalid_argument& e) {
        cout << e.what();
    }
    */

    // Zadanie 6
    /*
    string a;
    getline(cin, a);
    cout << a.length();
    */  

}
