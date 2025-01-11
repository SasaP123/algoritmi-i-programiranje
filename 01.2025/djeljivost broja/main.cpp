#include <iostream>

using namespace std;

int main()
{
    int broj;

    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;

    if(broj%2 == 0)
    {
        cout<<"Broj "<<broj<<" je djeljiv s 2."<<endl;
    }
    if(broj%3 == 0)
    {
            cout<<"Broj "<<broj<<" je djeljiv s 3."<<endl;
    }
    if(broj%6 == 0)
    {
        cout<<"Broj "<<broj<<" je djeljiv s 6."<<endl;
    }
    if(broj%8 == 0)
    {
        cout<<"Broj "<<broj<<" je djeljiv s 8"<<endl;
    }
    if(broj%9==0)
    {
        cout<<"Broj "<<broj<<" je djeljiv s 9"<<endl;
    }
    if(broj%2!=0 && broj%3!=0 && broj%6!=0 && broj%8!=0 && broj%9!=0)
    {
        cout<<broj<<" nije djeljiv ni s 2, ni s 3,ni s 6,ni s 8,niti 9."<<endl;
    }
    return 0;
}

