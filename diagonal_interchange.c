////////////////////////////////////////////////////////\
//                                                     \/
//      Authore Name : Siva Pragasam.v                 /\
//      Title        : Diagonal InterechangeMatrix     \/
//      Date         : 31/08/2019                      /\
///////////////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,c1,a1;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int a[s][s];
	c1=s;
	printf("Enter the array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<s;i++)
	{
		c1--;
		for(j=0;j<s;j++)
		{
			if(i==j)
			{
				a1=a[i][c1];
				a[i][c1]=a[i][j];
				a[i][j]=a1;
			}	
		}
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
			printf(" %d ",a[i][j]);
		printf("\n");
	}
}

