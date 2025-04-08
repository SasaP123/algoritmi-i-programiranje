#include <iostream>

using namespace std;

int main()
{
    int broj;

    cout<<"Unesi broj: ";
        cin>>broj;

    int zamjenskiBroj=broj;
    int n=0;

    while(zamjenskiBroj>0)
        {
            zamjenskiBroj/=2;
            n++;
        }

    int niz[n];

    for(int i=0;i<n;i++)
        {
            niz[i]=broj%2;
            broj/=2;
        }

    for(int i=n-1;i>=0;i--)
        {
            cout<<niz[i];
        }

    return 0;
}
