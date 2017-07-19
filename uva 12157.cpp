#include <bits/stdc++.h>
using namespace std; 

int main()
{

int t, n, mileCost, juiceCost, min; 

cin >> t; 

for (int i=1; i<=t; i++ ){
	mileCost=0, juiceCost=0; 
	cin >> n; 
	while (n--){
		cin >> min; 
		
		mileCost += (min/30) * 10 + 10; 
		juiceCost += (min/60) * 15 + 15; 
	}
	cout << "Case " << i << ": "; 
	
	if (mileCost<juiceCost)
	cout << "Mile " << mileCost << endl; 
	else if (mileCost==juiceCost)
	cout << "Mile "; 
	
	if (juiceCost<=mileCost)
	cout << "Juice " << juiceCost << endl; 
}

return 0;
}
