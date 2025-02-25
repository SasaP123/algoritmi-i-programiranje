#include <iostream>

using namespace std;

int main()
{
    int broj;

    cout<<"Unesi broj: ";
        cin>>broj;  cout<<endl;
    switch(broj){
        case 1 ... 100:
            cout<<"0< broj <100";
            break;
        case 101 ... 1000:
            cout<<"100< broj < 1000";
            break;
        default:
            cout<<"Van intervala";}

}
