#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main()
{
 int t;
 cin>>t;
  while(t--)
  {
int n;
cin>>n;
int a[n+2];
for(int i=0;i<n;i++)cin>>a[i];
int cn=0,flag=0,tot=(n*(n+1))/2;
for(int i=0;i<n-1;i++)
{
if(a[i]==a[i+1]&&!flag){cn++;flag=1;}
else flag =0;
}
cout<<tot-(n+cn)<<endl;
}
}
