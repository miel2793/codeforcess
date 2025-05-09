#include<iostream>
#include<cctype>
using namespace std;
int main()
{

    char X;
    cin>>X;
    if(islower(X))
    {
        X=toupper(X);
    }
    else if(isupper(X))
    {
        X=tolower(X);
    }
    cout<<X;
}
