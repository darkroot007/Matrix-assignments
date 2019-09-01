////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Uper Matrix         \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int flag = 0;
	int mat[n][n];
	int i, j;
	for(i = 0; i < n; i++)
	{	
		for(j = 0; j < n; j++)
		scanf("%d",&mat[i][j]);
	}

	for (i = 1; i < n; i++)
	for (j = 0; j < i; j++)
	if (mat[i][j] != 0)
	flag = 0;
	else
	flag = 1;

	if (flag == 1)
	printf("Upper Triangular Matrix");
	else
	printf("Not an Upper Triangular Matrix");
	return 0;
}
