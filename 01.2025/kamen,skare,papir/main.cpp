#include <iostream>

using namespace std;

int main()
{
    int kamen = 0;
    int skare = 0;
    int papir = 0;

    int usp1;
    int usp2;

    string osoba1;
    string osoba2;
    string rematch = "rematch";

    while(rematch == "rematch")
                                                                            {

    cout<<"Neka 1. osoba unese sto zeli iskoristiti(kamen/skare/papir): ";
        cin>>osoba1;    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

            //kamen
            if(osoba1 == "kamen")
            {
                kamen = 2;
                skare = 1;
                papir = 3;
                usp1 = kamen;
            }

            //skare
            else if(osoba1 == "skare")
            {
                kamen = 3;
                skare = 2;
                papir = 1;
                usp1 = skare;
            }

            //papir
            else if(osoba1 == "papir")
            {
                kamen = 1;
                skare = 3;
                papir = 2;
                usp1 = papir;
            }

    cout<<"Sada neka 2. osoba unese svoj odabir (kamen/skare/papir): ";
        cin>>osoba2;    cout<<endl;


            if(osoba2 == "kamen")
            {
                usp2 = kamen;
            }
            else if(osoba2 == "skare")
            {
                usp2 = skare;
            }
            else if(osoba2 == "papir")
            {
                usp2 = papir;
            }

    if(usp1>usp2)
    {
        cout<<"Pobjednik je 1. osoba."<<endl;
    }
    else if(usp1<usp2)
    {
        cout<<"Pobjednik je 2. osoba."<<endl;
    }
    else if(usp1==usp2)
    {
        cout<<"Izjednaceno je"<<endl;
    }

    cout<<"Zelite li rematch?"<<endl<<"Unesite -rematch-: ";
        cin>>rematch;   cout<<endl<<endl;
                                                                                    }

    cout<<"Program se zavrsava..."<<endl<<endl;

    return 0;

}
