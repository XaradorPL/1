
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    long int x=120;
    cout<< x << endl;
    cout<< &x << endl;
    cout<< *&x << endl;
    cout <<sizeof(x) <<endl;

    long int *wskaznik = NULL; //deklaracja wskaźnika
    wskaznik = &x;
    cout<< wskaznik <<endl;
    cout<< *wskaznik <<endl;   //dereferererencejencja
   // wskaznik += 1;
   // cout << wskaznik << endl;
    *wskaznik += 1;
    cout<< *wskaznik<< endl;
    cout << x << endl;

	return 0;
}

