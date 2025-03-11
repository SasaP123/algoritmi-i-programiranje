#include <iostream>

using namespace std;

int main()
{
    int broj,zbroj=0;

    do
        {
            cout<<"Unesi broj: ";
                cin>>broj;  cout<<endl;
            if(broj==0)
                break;

            zbroj+=broj;

        }while(broj!=0);
    cout<<zbroj;
}
