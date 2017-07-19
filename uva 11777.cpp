#include <bits/stdc++.h>
using namespace std; 

int main()
{

int t, term1, term2, final, att, ct, c, total ;
int array[3], i, largest1, largest2, temp;

cin >> t; 

c=1; 

while (t--){
	
	cin >> term1 >> term2 >> final >> att; 
	for (i=0; i<3; i++){
		cin >> array[i]; 
	}
	
	// Logic to calculate CT 	
	  largest1 = array[0];
    largest2 = array[1];
    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    for (i = 2; i < 4;	i++)
    {
        if (array[i] >= largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2)
        {
            largest2 = array[i];
        }
    }
    
    ct = (largest1+largest2)/2; 
    
    // Counting Total 
    total = term1 + term2 + final + att + ct ; 
    
    if (total>=90)
    cout << "Case " << c << ": A"<< endl; 
	else if (total>=80)
	cout << "Case " << c << ": B"<< endl; 
	else if (total>=70)
	cout << "Case " << c << ": C"<< endl;
	else if (total>=60)
	cout << "Case " << c << ": D"<< endl;
	else
	cout << "Case " << c << ": F"<< endl;
    
    
    c++; 
}

return 0;
}
