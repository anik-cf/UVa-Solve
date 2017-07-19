#include <bits/stdc++.h>
using namespace std; 

int main(void){
	
	int t,n, a, b, c,count, sum=0;
	
	while (scanf("%d", &t) !=EOF){

	
	while (t--){
		cin >> count; 
		for(int i=0; i<count; i++){
			cin >> a >> b >> c; 
			sum += a*c; 
		}
		cout << sum << endl;
		sum = 0;  
	} 
		
	}
	 
}
