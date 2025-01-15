#include <iostream>

using namespace std;

int main()
{
    int broj1;
    int broj2;
    int rezultat;

    printf("Unesi 1. broj: ");
        cin>>broj1;

    printf("Unesi 2. broj: ");
        cin>>broj2;

        //zbrajanje:
        rezultat = broj1+broj2;
        printf("%i+%i=%i ,",broj1,broj2,rezultat);

        //oduzimanje
        rezultat = broj1-broj2;
        printf("%i-%i=%i ,",broj1,broj2,rezultat);

        //mnozenje
        rezultat= broj1*broj2;
        printf("%i*%i=%i ,",broj1,broj2,rezultat);

        //djeljenje
        rezultat = broj1/broj2;
        printf("%i/%i=%i ,",broj1,broj2,rezultat);


    return 0;
}
