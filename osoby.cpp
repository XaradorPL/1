


#include <iostream>
using namespace std;

struct osoba {

char imie[20];
char nazwisko [20];
int wiek;
};

void pobierzDane(osoba tb[],int ile)
{

    for (int i = 0; i<ile; i++){

        cout<<"Imię: ";cin>>tb[i].imie;
        cout<<"Nazwisko: ";cin>>tb[i].nazwisko;
        cout<<"Wiek: ";cin>>tb[i].wiek;
        cout<<endl;
    }


}

void wyswietlDane(osoba tb[], int ile)
{

    for (int i = 0; i<ile; i++){

        cout<<"Imię: "<<tb[i].imie<<"  ";
        cout<<"Nazwisko: "<<tb[i].nazwisko<<"  ";
        cout<<"Wiek: "<<tb[i].wiek<<"  ";
        cout<<endl;
    }

}

int main(int argc, char **argv)
{
    int ile=0;
    cout<<"Dane ilu osób wprowadzisz? "<<endl;
    cin>>ile;

    osoba *tbOsoby = new osoba[ile];

    pobierzDane(tbOsoby,ile);
    wyswietlDane(tbOsoby, ile);


	return 0;
}

