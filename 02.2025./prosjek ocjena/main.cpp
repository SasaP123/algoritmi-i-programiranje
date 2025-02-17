#include <iostream>

using namespace std;

int main()
{

    int n,zbroj=0,ocjena;
    float prosjek;

    cout<<"Unesi broj ocjena: ";
        cin>>n; cout<<endl;

    for(int i = 1;i<=n;i++)
    {
        cout<<"Unesi ocjenu: ";
            cin>>ocjena;    cout<<endl;
        zbroj+=ocjena;
    }
    prosjek = zbroj/(n*1.0);
    printf("Prosjek je %f",prosjek);

    return 0;
}
