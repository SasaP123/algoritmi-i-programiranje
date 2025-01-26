#include <iostream>

using namespace std;

int main()
{
    cout<<"Ovo je mala igra koja se igra na srecu..."<<endl<<endl;
    string ime;
    string IME;
    string nastavak = "novo";
    string dodaj = "1";
    int zeton;
    int ZETON;
    int najvise = -1;

    while(nastavak == "novo")
    {

     cout<<"Unesi ime:";
        cin>>ime;   cout<<endl;
    zeton = rand() % 100 + 1;
    cout<<ime<<":"<<zeton;

    cout<<endl<<"Zelite li drugu sansu?Unesite 1: ";
        cin>>dodaj; cout<<endl;

        if(dodaj=="1")
        {
            cout<<"Druga sansa:"<<endl;
            zeton=rand() % 100 + 1;
            cout<<ime<<":"<<zeton;
            cout<<endl<<endl;
        }


    if(zeton>najvise)
    {
        najvise = zeton;
        ZETON = zeton;
        IME = ime;
    }

    cout<<"Za novog igraca unesite 'novo': ";
        cin>>nastavak;  cout<<endl;
    }

    cout<<"Igra zavrsava..."<<endl<<"Pobjednik je:"<<endl<<IME<<" sa "<<ZETON<<" zetona.";

    return 0;

}
