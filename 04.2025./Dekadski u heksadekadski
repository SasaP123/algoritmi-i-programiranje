#include <iostream>

using namespace std;

int main()
{
    int broj;
    int n=0;

    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;
    int brojZamjena=broj;


    while(brojZamjena>0)
        {
            brojZamjena/=16;
            n++;
        }
    int niz[n];

    for(int i=0;i<n;i++)
        {
            int znamenka = broj%16;

            niz[i]=znamenka;

            broj/=16;
        }

    for(int i=n-1;i>=0;i--)
        {
            if(niz[i]==15)
                cout<<"F";
            else if(niz[i]==14)
                cout<<"E";
            else if(niz[i]==13)
                cout<<"D";
            else if(niz[i]==12)
                cout<<"C";
            else if(niz[i]==11)
                cout<<"B";
            else if(niz[i]==10)
                cout<<"A";
            else
                cout<<niz[i];
        }
}
