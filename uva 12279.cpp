#include <bits/stdc++.h>
using namespace std; 

int main(){
	
	int t, count = 0; 
	 
	
	while (scanf("%d", &t) !=EOF){
		count++;
		if (t==0) break; 
		int sum=0, n; 
		for(int i=0; i<t; i++){
			
			cin >> n; 
			
			if (n>0)
			sum++; 
			else 
			sum--; 
			
		}
		cout << "Case " << count << ": "<< sum << endl; 
		
	}
	
}
