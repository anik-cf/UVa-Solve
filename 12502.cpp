#include <bits/stdc++.h>
using namespace std;


int main(){
	
	int a, b, c, e, n;
	
	cin >> n; 
	
	while(n--){
		cin >> a >> b >> c; 
		
		e=c*(a+(a-b))/(a+b); 
		
		if (e<=0)
		cout << "0" << endl; 
		else 
		cout << e << endl; 
	}
	
    return 0;
}
	
