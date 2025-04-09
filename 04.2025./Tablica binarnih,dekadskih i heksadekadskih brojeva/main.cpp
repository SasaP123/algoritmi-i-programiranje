#include <iostream>

using namespace std;

int main()
{

    char opcija;
    int broj;
    cout<<"d=dekadski/b=binarni\n"<<"Unesi vrstu broja i vrijednost broja(npr.d=50):"<<endl;
    scanf("%c=%i",&opcija,&broj);   cout<<endl;

//DEKADSKI:
    if(opcija=='d'){
    for(int z=0;z<1;z++){//dekadski u binarni:
        cout<<"DEKADSKI:\t"<<broj<<endl;

            int zamjenskiBroj=broj;
            int BROJzaZNM=broj;
            int n=0;
            while(BROJzaZNM>0)
                {
                    BROJzaZNM/=2;
                    n++;
                }

            int niz[n];

            for(int i=0;i<n;i++)
                {
                    niz[i]=zamjenskiBroj%2;
                    zamjenskiBroj/=2;
                }
            cout<<"BINARNI:\t";
            for(int i=n-1;i>=0;i--)
                {
                    cout<<niz[i];
                }cout<<endl;}


    for(int z=0;z<1;z++)//dekadski u heksadekadski
        {
            int BROJzaZNM=broj;
            int zamjenskiBroj=broj;
            int n=0;

            while(BROJzaZNM>0)
                {
                    BROJzaZNM/=16;
                    n++;
                }
            int niz[n];

            for(int i=0;i<n;i++)
                {
                    niz[i]=zamjenskiBroj%16;
                    zamjenskiBroj/=16;
                }cout<<"HEKSADEKADSKI:\t";

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
                }cout<<endl;
        }
        }

//BINARNI
    if(opcija=='b')
        {
        int dekadski;

        for(int z=0;z<1;z++){//binarni u dekadski
            int zamjenskiBroj=broj;
            int znamenka;
            int zbroj=0;
            int p=0;

            while(zamjenskiBroj>0)
                {
                    znamenka=zamjenskiBroj%10;
                    if(znamenka==1)
                        {
                            for(int j=0;j<p;j++)
                                {
                                    znamenka*=2;
                                }
                        }//-//

                    zbroj+=znamenka;
                    zamjenskiBroj/=10;
                    p++;
                }cout<<"DEKADSKI:\t"<<zbroj<<endl<<"BINARNI:\t"<<broj<<endl;    dekadski=zbroj;}

//Binarni u heksadekadski:...
        for(int z=0;z<1;z++)
            {
                int zamjenskiBroj=dekadski;
                int n=0;

                while(zamjenskiBroj>0)
                    {
                        zamjenskiBroj/=16;
                        n++;
                    }
                int niz[n];

                for(int i=0;i<n;i++)
                    {
                        niz[i]=dekadski%16;
                        dekadski/=16;
                    }
                cout<<"HEKSADEKADSKI:\t";
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
                    }cout<<endl;
            }
        }

}
