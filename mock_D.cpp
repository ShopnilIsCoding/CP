#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include<stack>
#include<set>
#include <unordered_map>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n+2];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int res=0,n1=n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            string s;
            cin>>s;
            res=arr[i];
            for (int j = 0; j < a; j++)
            {
                if (s[j]=='D')
                {
                    if (res==9)
                    {
                        res=0;
                    }
                    else
                    {
                        res++;
                    }

                }
                else if (s[j]=='U')
                {
                    if (res==0)
                    {
                        res=9;
                    }
                    else
                    {
                        res--;
                    }

                }


            }
            v.push_back(res);

        }
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;



    }
    return 0;

}
