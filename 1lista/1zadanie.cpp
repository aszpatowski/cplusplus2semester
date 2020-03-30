#include <iostream>
 
using namespace std;

int main()
{
    int result=1;
    int n=30;
    //cout<<"Podaj N: ";
    //cin>>n;
    for(int i=1; i<=n;i++)
    {
        result=result*i;
        cout<<i<<". "<<result<<endl;
    }
    cout<<result<<endl;
    return 0;
}
