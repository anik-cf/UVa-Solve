#include <bits/stdc++.h>
using namespace std; 

char names[10][110];
priority_queue<pair<int, int> > pq;

int main() {

	double hr, min, time, i, j, k, l, n, a; 
	
	while (scanf("%lf:%lf", &hr, &min) == 2){
		if (hr==0 && min ==0) break;
	
	i=((hr*30)+(min/2));
    j=(min*6);
	
	double t=i-j;  
	
	if (t<0.0)
	t*=-1; 
	if (t>180.0)
	t=360-t; 
	
	printf("%.3lf\n", t); 
	 
	}

	return 0;
}
