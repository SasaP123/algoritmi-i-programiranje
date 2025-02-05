#include <iostream>

using namespace std;

/* 1.Zadatak:
int main()
{
    int b5,b4,b3,b2;
    int broj;

    cout<<"Unesi bodovne granice pocevsi od najmanje: ";
        cin>>b2>>b3>>b4>>b5;    cout<<endl;

    cout<<"unesi broj bodova: ";
        cin>>broj;  cout<<endl;

    if(broj>=b5)
    {
        printf("(%i) Odlican",broj);
    }
    else if(broj>=b4)
    {
        printf("(%i) Vrlo dobar",broj);
    }
    else if(broj>=b3)
    {
        printf("(%i) Dobar",broj);
    }
    else if(broj>=b2)
    {
        printf("(%i) Dovoljan",broj);
    }
    else
    {
        printf("(%i) Nedovoljan",broj);
    }
    return 0;
}
*/
/* Zadatak 2.:
int main()
{

    int broj;

    cout<<"unesi broj: ";
        cin>>broj;  cout<<endl;

    if(broj>0)
    {
        printf("Broj %i je pozitivan",broj);
    }
    else
    {
        printf("Broj %i je negativan",broj);
    }
    return 0;
}
*/


/* Zadatak 3
int main()
{

    int broj;

    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;

    if(broj%2==0)
    {
        cout<<"paran";
    }
    else
    {
        cout<<"neparan";
    }
    return 0;

}
*/

/* zadatak 4.
int main()
{

    char a,b;
    int b1,b2;

    cout<<"Prvo unesi 1. slovo i onda 2. slovo:";
        cin>>a>>b;  cout<<endl;

    b1=a;
    b2=b;

    if(b1<b2)
    {
        cout<<"slova idu abecednim redom."<<endl;
    }
    else if(b1>b2)
    {
        cout<<"Slova ne idu abecednim redom."<<endl;
    }
    return 0;

} */


/* ZADATAK 5.
int main()
{

    int cijena;
    float r;

    cout<<"unesi cijenu: ";
        cin>>cijena;    cout<<endl;

    cout<<"Cijena bez PDV-a: "<<cijena<<endl;
    r=cijena*1.0+(cijena*0.25);
    cout<<"Cijena sa PDV-om: "<<r<<endl;
    return 0;

} */

int main()
{

    int U,R,I;
    char odabir;

    cout<<"unesi odabir za izracun (U/R/I): ";
        cin>>odabir;    cout<<endl;

    if(odabir=='U')
    {
        cout<<"Unesi I: ";
            cin>>I; cout<<endl;
        cout<<"Unesi R: ";
            cin>>R; cout<<endl;
        U=I*R;
        cout<<"U: "<<U<<endl;
    }
        if(odabir=='I')
    {
        cout<<"Unesi U: ";
            cin>>U; cout<<endl;
        cout<<"Unesi R: ";
            cin>>R; cout<<endl;
        I=U/R;
        cout<<"I: "<<I<<endl;
    }
        if(odabir=='R')
    {
        cout<<"Unesi I: ";
            cin>>I; cout<<endl;
        cout<<"Unesi U: ";
            cin>>U; cout<<endl;
        R=U/I;
        cout<<"R: "<<R<<endl;
    }
    return 0;
}

