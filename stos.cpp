#include <iostream>
#include <cstdlib>

using namespace std;
void push(int stos[], int &sp,int sr, int dane) {
    sp++; // zwiększenie wskaźnika
    if (sp > -1 && sp < sr) {
        stos[sp] = dane;
        cout<< dane<< " ";
    } else {
       cout << "stack overflow";
    }
}

int pop(int stos[], int sr, int&sp){
        int dane = 0;
        if(sp > -1 && sp < sr) {
            dane = stos[sp];
        }else{
            cout << "stack overflow";
        }
    return dane;
}
int main(int argc, char **argv)
{
    int *stack = NULL; // wskaźnik
    int sr = 0; //rozmiar stosu
    int sp = -1; // wskaźnik stosu

    cout << "Podaj rozmiar: "; cin>> sr;
    if (!cin) {
        cout << "Błędne dane!";
        return -1;
    }

    stack = new int [sr]; // inicjacja tablicy
    srand(time(NULL));
    for(int i=0; i < sr;i++)
        push(stack, sr, sp, rand()%100 + 1);
    //cout << pop(stack, sr, sp);
    cout << endl;
    for (int i=0; i < sr; i++)
    cout<<pop(stack ,sr, sp) << " ";

    return 0;
}

