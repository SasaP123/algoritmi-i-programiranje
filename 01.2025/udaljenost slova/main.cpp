#include <iostream>

using namespace std;

int main()
{
    char a;
    char b;
    int b1;
    int b2;
    int r;

    cout<<"Unesite 1. slovo: ";
        cin>>a; cout<<endl;
    cout<<"Unesite 2. slovo: ";
        cin>>b; cout<<endl;

    b1=a;
    b2=b;

    r=b1-b2;

        if(r<0)
        {
            r=-1*r;
        }

    printf("Udaljenost slova %c i slova %c u abecedi je %i mjesta.",a,b,r);

}
