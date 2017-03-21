#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void push(int stos[], int sr, int &sp, int dane) {
    sp++; // zwiększenie wskaźnika
    if (sp > -1 && sp < sr) {
        stos[sp] = dane;
        //cout << dane << " ";
    } else {
        cout << "Stack overflow!";
    }
}

int pop(int stos[], int sr, int &sp) {
    int dane = 0;
    if (sp > -1 && sp < sr) {
        dane = stos[sp];
        sp--;
    } else {
        cout << "Stack overflow!";
    }
    return dane;
}

int main(int argc, char **argv) {

    int *stack = NULL;
    int sr = 0;
    int sp = -1;






   string onp; // przechwuje wyrażenie onp
   cout<< "Podaj poprawne wyrażenie ONP oddzielając operandy i operatory spacjami "<<endl;
    getline(cin, onp);

    int rozmiar = onp.size();
    sr = rozmiar;
    for (int i = 0; i<rozmiar; i++){
        if (onp[i] ==' '){
            sr--; //ustawienie rozmiaru stosu
        }
    }

    stack = new int[sr];
    string element;
    for (int i = 0; i<rozmiar; i++){
        if(onp[i]!= ' '&&isdigit(onp[i])){
            if(isdigit(onp[i])){
                element += onp[i];
        }
    }
    if(onp[i] == ' '&& element.size()){
        cout<<" "<<element<<endl;
        push (stack,sr,sp,atoi(element.c_str() ));
        element.clear();
        cout<<" "<<element<<endl;
    }
}

    cout<< pop(stack,sr,sp)<<endl;
    cout<< pop(stack, sr, sp) <<endl;

	return 0;
}




