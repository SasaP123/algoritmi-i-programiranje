#include <iostream>;

using namespace std;

int main()
{

    int broj,najveci,najmanji,prvi=1,pozitivan=0,negativan=0,paran=0,neparan=0;

    do
        {
            cout<<"Unesi broj: ";
                cin>>broj;  cout<<endl;
            if(broj==0)
                break;
            if(prvi==1)
                {
                    najveci=broj;
                    najmanji=broj;
                    prvi--;
                    continue;
                }

            if(broj>najveci)
                najveci=broj;
            if(broj<najmanji)
                najmanji=broj;
            if(broj%2==0)
                paran+=1;
            else
                neparan+=1;
            if(broj>0)
                pozitivan+=1;
            else
                negativan+=1;

        }while(broj!=0);

    cout<<"Parnih: "<<paran<<endl;
    cout<<"Neparnih: "<<neparan<<endl;
    cout<<"Pozitivnih: "<<pozitivan<<endl;
    cout<<"Negativan: "<<negativan<<endl;
    cout<<"Najmanji: "<<najmanji<<endl;
    cout<<"Najveci: "<<najveci<<endl;
}
