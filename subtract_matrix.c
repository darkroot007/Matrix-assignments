////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Subtract Matrix     \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,s1,i,j,t;
	printf("Enter the first array size\n");
	scanf("%d",&s);
	printf("Enter the secand array size\n");
	scanf("%d",&s1);
	int a[s][s],b[s1][s1];
	printf("Enter the first array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the secand array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&b[i][j]);
	printf("Subtract of matrix\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf(" %d",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
}



