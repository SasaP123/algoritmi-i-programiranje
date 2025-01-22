#include <iostream>

using namespace std;

int main()
{
    int broj;
    int r;
    int sto;
    int jedinica;

    scanf("Broj je %i",&broj);

    sto=broj/100;
    jedinica=broj%10;

    r=sto-jedinica;

    if(r<0)
    {
        r=-1*r;
        cout<<"Stotica je manja od jedinice za "<<r<<" puta.";
    }
    else
    {
    cout<<"Stotica je veca od jedinice za "<<r<<" put.";
    }

    return 0;


}
