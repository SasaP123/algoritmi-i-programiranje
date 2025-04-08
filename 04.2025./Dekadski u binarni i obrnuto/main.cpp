#include <iostream>

using namespace std;

int main()
{
    char opcija;

    cout<<"Unesi koju vrstu broja zelis unijeti kako bi se pretvorilo u drugu vrstu...\n";
    cout<<"Unesi(d za dekadski/b za binarni):";
        cin>>opcija;    cout<<endl;

    if(opcija=='d')
        {
            int broj;

            cout<<"Unesi dekadski broj: ";
                cin>>broj;

            int B=broj;
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

            cout<<"Dekadski broj "<<B<<" je broj ";
            for(int i=n-1;i>=0;i--)
                {
                    cout<<niz[i];
                }
            cout<<" u binarnom obliku.";
        }
//---------------------------------------------------------------------
    if(opcija=='b')
        {
            int broj;
            int p=0;
            int znamenka=0;
            int zbroj=0;

            cout<<"Unesi binarni broj: ";
                cin>>broj;  cout<<endl;

            int B=broj;

            while(broj>0)
                {
                    if(broj%10==1) 
                        {
                            znamenka=1;
                            for(int i=0;i<p;i++) 
                                {
                                    znamenka*=2; 
                                }
                        }
                    broj/=10;
                    p++;
                    zbroj+=znamenka;
                    znamenka=0;
                }

            printf("Binarni broj %i je broj %i u dekadskom zapisu.",B,zbroj);
        }

}
