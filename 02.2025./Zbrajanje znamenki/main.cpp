#include <iostream>

using namespace std;

int main()
{
    int broj,zbroj=0,z;

    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;

    for(int i=0;i>=0;i++)
    {
        if(broj>0)
        {
            z+=broj%10;
            broj/=10;
        }
    }
    cout<<"Zbroj znamenki je "<<z;
    return 0;
}
