#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

main()
{
    char a[30] = "---Belajar Tipe Data---";
    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 10000;
    c = 100000;
    d = 10000000;
    e = 3.12;
    f = 3.12345;

    cout << a << endl;
    cout << "Tipe Data short : " << b << endl;
    cout << "Tipe Data Int : " << c << endl;
    cout << "Tipe Data long : " << d << endl;
    cout << "Tipe Data float : " << e << endl;
    cout << "Tipe Data Double : " << f << endl;

    cout << "Berikut Hasil Boolean : " << endl;
    cout << (g > h);
    cout << endl;       //akan menghasilkan nilai 0 (false) karena 1 kurang dari 2
    cout << (g < h);
    cout << endl;       //akan menghasilkan nilai 1 (True) karena 1 kurang dari 2
    cout << (g == h);
    cout << endl;       //akan menghasilkan nilai 0 (false) karena 1 tidak sama dengan  2
    cout << (g != h);
    cout << endl;       //akan menghasilkan nilai 1 (True) karena 1 tidak sama dengan  2
     
}

