#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,j,k,i,d=0;
    cin>>c;

    for( i=0;i<c;i++)
    {
            cin>>n;
            int a[n];
        for( j=0;j<n;j++)
        {


            for(k=0;k<4;k++){
                cin>>a[k];}
                if(a[0]<=(a[1]+a[2]+a[3]))
        {
                 d++;
        }
        if(a[0]>(a[1]+a[2]+a[3])){
            d--;
        }


    }
    if(d==n)
    cout<<"PASS"<<endl;
    if(d!=n)
        cout<<"FAIL"<<endl;}
return 0;
}
