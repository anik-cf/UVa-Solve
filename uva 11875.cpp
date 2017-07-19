#include <bits/stdc++.h>
using namespace std; 

int main()
{

int tc, t=0, n, tmp;
int player[100];  

cin>> tc;

while(tc--){
	t++; 
	cin >> n; 
	
	tmp=0; 
	
	for(int i=0; i<n; i++){
		cin >> player[i]; 
	}
	
	//sorting 
	for (int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if (player[i]>player[j]){
				tmp=player[i]; 
				player[i]=player[j]; 
				player[j]=tmp; 
			}
		}
	}
	tmp = n/2; 
	
	printf("Case %d: %d\n", t, player[tmp]); 
	
} 


	


return 0;
}
