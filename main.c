#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int factorial(int n)
{
	int res=1, i;
	for(i=1; i<=n; i++)
	    res = res*i;
	
	return res;    
}

int combination(int n, int r)
{
	return(factorial(n)/(factorial(n-r)*factorial(r)));	
	
}


int main(int aintrgc, char *argv[]) {
	int n;
	printf("n= ");
	scanf("%d", &n);
	
	int r;
	printf("r= ");
	scanf("%d", &r);

	printf("C(%d, %d) = %d\n", n, r, combination(n,r));
	
	return 0;
}

