#include <iostream>

using namespace std;

int main()
{
    char znak,znakPrije='0';
    int niz=0,najvece=0;

    while(znak!='x')
        {
            cout<<"Unesi znak: ";
                cin>>znak;

                    if(znak == znakPrije)
                        {
                            niz++;
                        }
                    else
                        {
                            if(niz>najvece)
                                {
                                    najvece=niz;
                                }
                            niz=1;
                            znakPrije=znak;
                        }
        }
    cout<<najvece;

}
