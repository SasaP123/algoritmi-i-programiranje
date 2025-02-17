#include <iostream>

using namespace std;

int main()
{
    //C = (F - 32) × 5/9
    //F = C × (9/5) + 32
    float vrijednost;
    float rezultat;
    char opcija;

    cout<<"Unesite opciju F=# / C=# za odabir jedinice iz koje se pretvara u drugu."<<endl;
    scanf("%c=%f",&opcija,&vrijednost);    cout<<endl;

    if(opcija == 'F')
        {
            rezultat=(vrijednost-32)*(5.0/9.0);
            printf("C=%f",rezultat);
        }
    else if(opcija == 'C')
        {
            rezultat = vrijednost * (9.0/5.0) + 32;
            printf("F=%f",rezultat);
        }
        return 0;
}
