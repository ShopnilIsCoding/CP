#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];int i,m=1,b=1;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    for(i=1;i<n;i++)
    {
        if(a[i+1]==a[i])
            m++;
        else
            (m=b);}

    if(m>b)
    cout<<m;
    else
        cout<<b;
    return 0;
}
