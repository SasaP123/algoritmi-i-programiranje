#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Unesi n: ";
        cin>>n; cout<<endl;

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(j==i)
                        cout<<"$";
                    else if(i==0 || i==n-1)
                        cout<<"#";
                    else if(j==0 || j==n-1)
                        cout<<"#";
                    else
                        cout<<"0";
                }

            cout<<endl;
        }

}
