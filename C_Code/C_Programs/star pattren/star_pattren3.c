# include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("enter the no to print star patteren \n");
	scanf("%d",&n);

	for(i=0 ; i<n ;	i++)
	{
		for(j=0 ; j<n-i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
