#include <iostream>

using namespace std;

int main()
{
    /*int a=10;
    int b=100;
    int broj=0;
    int n[1000];

    for(int i=0;i<1000;i++)
        {
            n[i]=rand()%(b-a+1)+a;
        }

    for(int i=0;i<1000;i++)
        {
            if(n[i]>50)
                {
                    broj++;
                    cout<<n[i]<<endl;
                }

        }
    cout<<"\nBrojeva vecih od 50: "<<broj;*/
//--------------------------------------------------------------

    /*int a=10;
    int b=100;
    int broj=0;
    int n[1000];

    for(int i=0;i<1000;i++)
        {
            n[i]=rand()%(b-a+1)+a;
        }

    for(int i=0;i<1000;i++)
        {
            if(n[i]%2==0)
                {
                    cout<<n[i]<<endl;
                    broj++;
                }

        }cout<<"Parnih:"<<broj;*/
//--------------------------------------------------------------

    /*int a=10;
    int b=100;
    int broj=0;
    int n[1000];

    for(int i=0;i<1000;i++)
        {
            n[i]=rand()%(b-a+1)+a;
        }

    for(int i=0;i<1000;i++)
        {
            if(n[i]%2==1)
                n[i]=0;
        }
    for(int i=0;i<1000;i++)
        {
            cout<<n[i]<<endl;;
        }*/
//--------------------------------------------------------------

    /*int a=10;
    int b=100;
    int broj=0;
    int n[1000];

    for(int i=0;i<1000;i++)
        {
            n[i]=rand()%(b-a+1)+a;
        }

    for(int i=0;i<1000;i++)
        {
            if(n[i]%7==0)
                n[i]*=-1;
        }

    for(int i=0;i<1000;i++)
        {
            cout<<n[i]<<endl;;
        }*/
//--------------------------------------------------------------

    /*int a=10;
    int b=100;

    int n[1000];

    for(int i=0;i<1000;i++)
        n[i]=rand()%(91)+a;

    for(int i=0;i<1000;i++)
        {
            if(n[i]==20)
                {
                    for(int j=i;j<1000;j++)
                        cout<<n[j]<<endl;
                    break;
                }
        }

}
