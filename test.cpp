#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int d=0;
        int n;cin>>n;int a[4];
        for(i=0;i<n;i++)
        {
            for(j=0;j<4;j++)
            {
                cin>>a[j];
            }
        }

        for(i=0;i<n;i++){
        if(a[0]>=a[1]+a[2]+a[3])
        {
            d++;
        }
        else
        {
            d--;
        }
        }

        if(d==n)cout<<"FAIL"<<endl;
        if (d!=n) cout<<"PASS"<<endl;
    }
}
