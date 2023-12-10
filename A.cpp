#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char s2[n];
    for(i=0;i<n;i++){
        cin>>s2[i];
        if((s2[i]=='c')||(s2[i]=='o')||(s2[i]=='d')||(s2[i]=='e')||(s2[i]=='f')||(s2[i]=='r')||(s2[i]=='s'))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

}
return 0;
}
