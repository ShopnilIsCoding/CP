#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,i,j,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>s;
        for(j=0;j<n;j++){
        if(s[j]=='0'&& s[n-1]=='1'){
        s.erase(j,1);
        s.erase(n-1,1);
        }
        else if(s[n-1]=='0'&&s[j]=='1'){
            s.erase(n-1,1);
            s.erase(j,1);
            }
        }
    }
cout<<s;
}
