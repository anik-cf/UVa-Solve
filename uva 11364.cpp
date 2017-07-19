#include <bits/stdc++.h>

using namespace std; 

int main(){

int n,t,k, first, last; 

while (cin>>n){
	
	for (int i=0; i<n; i++){
		vector<int>v; 
		cin>>t;
		
		for (int j=0; j<t; j++){
			cin>>k; 
			v.push_back(k); 
		}
		
		sort(v.begin(), v.end()); 
		first = v[0]; 
		last = v[t-1]; 
		
		int ans = (last - first) * 2; 
		
		cout << ans << endl; 
		 
	}
	
}

	
}


