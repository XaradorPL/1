

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char **argv)
{

//       cplusplus.com = dokumentacja cpp (#CzytajPanPapiery)
    int liczba = 255;

    //~ios_base::fmtflags fx;
    //~fx |= cout.oct;
    //~fx |= cout.showbase;

    //~cout.flags(fx);
    //~cout <<liczba << endl;

    cout.setf(ios_base::oct, ios_base::basefield);
    cout.setf(ios_base::showbase);
    cout.setf(ios_base::uppercase);
    cout << liczba << endl;

    cout.precision(3);
    cout.fill('-');
    cout.width(20);
    cout<<M_PI <<endl;

    printf("%E\n",10*M_PI);      //%e to format a /n to znak nowej linii #TheMoreYouKnow

    printf("%X\n",liczba);  //%X to system 16

    printf("%10.4f\n",10*M_PI);

    typedef string str;
    str tekst;
    cout<<"Podaj tekst"<<endl;
    cin>>tekst;
    cout<<"Rozmiar: "<< tekst.size()<<endl;
    for (int i = 0, i< tekst.size(); i++)
        cout<<

	return 0;
}

