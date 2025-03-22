#include <iostream>

using namespace std;

int main()
{
//ZADATAK 1:
/*    int n,broj,pozitivni=0,negativni=0;

    cout<<"Unesi koliko brojeva se unosi (Broj 'n'): ";
        cin>>n; cout<<endl;

    for(int i=1; i<=n ;i++)
        {
            cout<<"Unesi broj: ";
                cin>>broj;

            if(broj>0)
                {
                    pozitivni++;
                }
            if(broj<0)
                {
                    negativni++;
                }

        }   cout<<endl;

    cout<<"Pozitivnih:"<<pozitivni<<endl;
    cout<<"Negativnih:"<<negativni<<endl;*/
//------------------------------------------------------------------------------
//ZADATAK 2:
    /*int n,broj,zbroj=0;
    float prosjek;

    cout<<"Unesi koliko brojeva se unosi (Broj 'n'): ";
        cin>>n; cout<<endl;

    for(int i=1; i<=n ;i++)
        {
            cout<<"Unesi broj: ";
                cin>>broj;

            zbroj+=broj;


        }
    prosjek=zbroj/(n*1.0);
    cout<<"Aritmeticka sredina: "<<prosjek;*/
//------------------------------------------------------------------------------
//ZADATAK 3:
    /*int broj1,broj2,visekratnik;

    cout<<"Unesi manji broj: ";
        cin>>broj1;
    cout<<"Unesi veci broj: ";
        cin>>broj2;
    cout<<"Unesi visekratnik: ";
        cin>>visekratnik;

    for(int i=broj1;i<=broj2;i++)
        {
            if(i%visekratnik==0 && i!=77)
                {
                    cout<<i<<endl;
                }
            if(i==77)
                {
                    cout<<"Sedamdeset i sedam"<<endl;
                }
        }*/
//------------------------------------------------------------------------------
//ZADATAK 4:
    /*int broj1,broj2,visekratnik,brojeva=0;

    cout<<"Unesi manji broj: ";
        cin>>broj1;
    cout<<"Unesi veci broj: ";
        cin>>broj2;
    cout<<"Unesi visekratnik: ";
        cin>>visekratnik;

    for(int i = broj1;i<=broj2;i++)
        {
            if(i%visekratnik==0)
                brojeva++;
        }
    cout<<brojeva;*/
//------------------------------------------------------------------------------
//ZADATAK 5:
    /*int n,parnih=0,broj,zbroj=0;

    cout<<"Unesi n: ";
        cin>>n; cout<<endl;

    for(int i=1;i<=n;i++)
        {
            cout<<"Unesi broj: ";
                cin>>broj;

            if(broj%2==0)
                {
                    parnih++;
                    zbroj+=broj;
                }
        }
    cout<<"Parnih: "<<parnih<<endl;
    cout<<"Zbroj: "<<zbroj<<endl;*/
//------------------------------------------------------------------------------
//ZADATAK 6:
    /*int n,broj,zbroj=0,zamjena;

    cout<<"Unesi n: ";
        cin>>n; cout<<endl;

    for(int i=1;i<=n;i++)
        {
            cout<<"Unesi broj: ";
                cin>>broj;

            zamjena=broj;

            if(broj>99 && broj<1000)
                {
                    while(zamjena>0)
                        {
                            zbroj+=zamjena%10;
                            zamjena/=10;
                        }
                    if(zbroj>=8)
                        {
                            cout<<broj<<endl;
                        }
                    zbroj=0;
                }
            else
                {
                    i--;
                }
        }*/
//------------------------------------------------------------------------------
}
