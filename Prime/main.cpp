#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,k,i,j;
    cout<<"please enter N: ";
    cin>>n;
    cout<<"\nǰ"<<n<<"������Ϊ��";
    for(i=2;i<=n;i++)
    {
        k=sqrt(i);
        for(j=2;j<=k;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>k)
            cout<<i<<" ";
    }
    return 0;
}
