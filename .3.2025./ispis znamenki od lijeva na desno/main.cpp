#include <iostream>

using namespace std;

int main()
{
    int broj,znamenki=0,postaje,z;
    int djelitelj=1;

    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;

    postaje=broj;

    while(postaje>0)
        {
            postaje/=10;
            znamenki+=1;
        }
    cout<<"Znamenki: "<<znamenki<<endl;

    cout<<"Broj:"<<broj<<endl;

    while(broj>0)   //2345           2345 z=3
        {
            znamenki-=1;

            for(int i=1;i<=znamenki;i++)
                {
                    djelitelj*=10;  //10,100,1000
                }
            z=broj/djelitelj;
            cout<<z<<" ";
            broj%=djelitelj;
            djelitelj=1;
        }
    return 0;
}
