#include <iostream>

using namespace std;

int main()
{
    int broj;
    int p=0;
    int znamenka=0;
    int zbroj=0;

    cout<<"Unesi binarni broj: ";
        cin>>broj;  cout<<endl;

    int B=broj;

    while(broj>0)    //100,         0-0, 0-0, 1-*2*2
        {
            if(broj%10==1) //-ako je zadnja znamenka 1,neka se izdvaja
                {
                    znamenka=1;
                    for(int i=0;i<p;i++) //-neka vrti petlju toliko puta kolika je potencija
                        {
                            znamenka*=2; //1*2*2*2 -> p=3
                        }
                }
            broj/=10;
            p++;
            zbroj+=znamenka;
            znamenka=0;
        }

    printf("Binarni broj %i je broj %i u dekadskom zapisu.",B,zbroj);


}
