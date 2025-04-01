#include <iostream>

using namespace std;

int main()
{
    int broj,zbroj=0;

    do
        {
            cout<<"Unesi broj: ";
                cin>>broj;

            if(broj==0)
                break;

            if(broj<0)
                broj*=-1;

            while(broj>0)
                {
                    zbroj+=broj%10;
                    broj/=10;
                }
        }while(1);

    cout<<"Zbroj je "<<zbroj;
}

