#include<stdio.h>
int main()
{
	char toss;
	printf("enter the coin result(H for heads,T for tails):");
	scanf("%c",&toss);
	if(toss='H'||toss=='T')
	{
		printf("heads\n");
	}
	else if (toss=='T'||toss=='H')
	{
		printf("tails\n");
	}
	else
	{
		printf("invalid input please enter 'H' or 'T'\n");
	}
	return 0;
}
