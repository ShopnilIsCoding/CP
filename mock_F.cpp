#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c,an,k,p,x;
    char ch;
    cin>>t;
    while(t--)
    {an=0;
        cin>>n;
        int a[n][n];
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {cin>>ch;
            a[i][j]=ch-'0';
            }
            for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                c=0;k=i;p=j;
                for(x=0;x<4;x++)
            {
            c+=a[k][p];
            swap(k,p);
            p=n-p-1;
            }
            an+=min(c,4-c);
            }
        cout<<an/4<<"\n";
    }
    return 0;
}
