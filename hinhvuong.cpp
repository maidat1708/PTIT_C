#include<stdio.h>
void inra(int a[][100], int k)  
{ 
	for (int i = 0; i < k; i++) 
	{ 
	    for (int j = 0; j < k; j++) 
		{ 
	    	printf ("%d",a[i][j]);
	    } 
	    printf ("\n"); 
	} 
} 
  
void xuly(int n) { 
int k= 2 * n - 1; 
int b = 0; 
int c = k - 1; 
int a[100][100]; 	
while (n != 0)  
{ 
    for (int i = b; i <= c; i++) 
	{ 
	    for (int j = b; j <= c; j++)
		{ 
	        if (i == b || i == c || 
	            j == b || j == c) 
	        a[i][j] = n; 
	    } 
    } 
    ++b; 
    --c; 
    --n; 
} 
	inra(a, k); 
} 
int main() 
{ 
    int n;
	scanf ("%d",&n);  
    xuly(n); 
      
return 0; 
} 
  
