#include <iostream>

using namespace std;

int main()
{
    char s1,s2;

    cout<<"Unesi 1. slovo: ";
        cin>>s1;    cout<<endl;
    cout<<"Unesi 2. slovo: ";
        cin>>s2;    cout<<endl;
//----------AKO JE 2. SLOVO VECE OD 1. SLOVA----------
    if(s1<s2)
    {
    for(s2;s2!=s1;s2++)
        {
                if(s2>122)
                {
                    s2='a';
                }
            cout<<s2<<" ";
        }
    }
//----------AKO JE 1. SLOVO VECE OD 2. SLOVA----------
    if(s1>s2)
    {
        for(s1;s1!=s2;s1++)
        {
            if(s1>122)
                {
                    s1='a';
                }
        cout<<s1<<" ";
        }
    }
    return 0;
}
