#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the no to print the pattren \n");
	scanf("%d",&n);
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=n ; j++)
		{
			if(j<=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}
