#include <iostream>

using namespace std;

int main()
{

    int ocjena,broj=0;
    float zbroj=0,prosjek;

    cout<<"Unesite 0 za prekid!"<<endl;
    //---ponavljanje unosenja ocjene---
    for(int i = 1;i>0;i++)
    {
        cout<<"Unesite ocjenu:";
            cin>>ocjena;    cout<<endl;
        //---provjera za nastavak programa---
            if(ocjena==0)
            {
                break;
            }
        zbroj+=ocjena;
        broj+=1;
    }
    prosjek=zbroj/broj;
    cout<<prosjek;

}
