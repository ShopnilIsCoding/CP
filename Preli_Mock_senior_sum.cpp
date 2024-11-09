#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
	vector<int>vec(3);
	for(int i=0;i<3;i++){
		cin >> vec[i];
	}

	sort(vec.begin(),vec.end());

	if(vec[0]+vec[1]==vec[2]){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
}
	return 0;
}