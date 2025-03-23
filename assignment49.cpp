#include<stdio.h>
#define N 4
void transpose (int A[][N], int B[][N])
{
	int i,j;
	for (i=0; i<N; i++)
	for (j=0; j<N; j++)
	B[i][j] = A[j][i];
}
int main()
{
	int A[N][N]= {{1 2 3 4},{5 6 7 8},{9 0 2 4},{1 3 8 6}};
				
int B[N][N], i,j;	
transpose (A,B);
printf(" result matrix is \n");		
for( i=0; i<N; i++)	
	{
		for( j=0;j<N;j++)
		printf("%d",B[i][j]);
		printf("\n");
	}
	return 0;
}
