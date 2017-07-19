#include <bits/stdc++.h>
using namespace std; 

char names[10][110];
priority_queue<pair<int, int> > pq;

int main() {

	int t, c, n, count; 
	string s;
	cin>>t; 
	cin.ignore(); 
	c=1;
	while (t--){
		getline(cin, s); 
		count=0; 
		n=s.length(); 
		
		for (int i=0; i<n; i++){
		 if((s[i]=='a')||(s[i]=='d')||(s[i]=='g')||(s[i]=='j')||(s[i]=='m')||(s[i]=='p')||(s[i]=='t')||(s[i]=='w')||(s[i]==' '))
            count+=1;
                else if((s[i]=='b')||(s[i]=='e')||(s[i]=='h')||(s[i]=='k')||(s[i]=='n')||(s[i]=='q')||(s[i]=='u')||(s[i]=='x'))
            count+=2;
                    else if((s[i]=='c')||(s[i]=='f')||(s[i]=='i')||(s[i]=='l')||(s[i]=='o')||(s[i]=='r')||(s[i]=='v')||(s[i]=='y'))
            count+=3;
                        else if((s[i]=='s')||(s[i]=='z'))
            count+=4;
		}
		
		printf("Case #%d: %d\n", c, count); 
		c++; 
		
	}

	return 0;
}
