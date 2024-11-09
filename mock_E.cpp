#include<bits/stdc++.h>
using namespace std;
int main(){
	int test=0;
	cin>>test;
	while(test--){
		map<string,bool> a;
		int n;
		cin>>n;
		string s[n+1];
		for(int i=1;i<=n;i++){
			cin>>s[i];
			a[s[i]]=1;
		}
		for(int i=1;i<=n;i++){
			bool b=0;
			for(int j=1;j<s[i].size();j++){
				bool w1=a[s[i].substr(0,j)],w2=a[s[i].substr(j,s[i].size()-j)];
				if(w1&&w2) b=1;
			}
			cout<<b;
		}
		cout<<"\n";
	}
}
