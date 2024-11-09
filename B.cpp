#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i;
        cin>>n;
        string ch;
        cin>>ch;
        int a=0,b=0,co=0;
        for(i=0;i<n;i++)
        {
            if(ch[i]=='U')
                b=b+1;
                if(a==1&&b==1)
                { co=1;
                    cout<<"YES"<<endl;
                    break;
                }

                if(ch[i]=='L')
                a=a-1;
                if(a==1&&b==1)
                { co=1;
                    cout<<"YES"<<endl;
                    break;
                }

            if(ch[i]=='R')
                a=a+1;
                if(a==1&&b==1)
                { co=1;
                    cout<<"YES"<<endl;
                    break;
                }
                if(ch[i]=='D')
                b=b-1;
                if(a==1&&b==1)
                { co=1;
                    cout<<"YES"<<endl;
                    break;
                }

        }
        if(co==0)
            cout<<"NO"<<endl;



    }
    return 0;

}
