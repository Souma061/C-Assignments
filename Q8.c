#include <stdio.h>

int main()
{
	int N, C, F ;
	
	printf("\n\nEnter the Number: ") ;
	scanf("%d", &N) ;
	F = 0 ;
	for(C = 2; C < N; C++)
	{
		if(N % C == 0)
		{
			F = 1 ;
		}
	}
	if(F == 0)
	{
		printf("\n%d is Prime", N) ;
	}
	else
	{
		printf("\n%d is Composite", N) ;
	}
	return 0 ;
}