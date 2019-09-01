////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Diagonal Matrix     \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,a,f;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int arr[s][s];
	printf("Enter the values\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Diagnoal format\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(i==j)
				printf(" %d",arr[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
}

