//////////////////////////////////////////////////\
//                                               \/
//      Authore Name : Siva Pragasam.v           /\
//      Title        :sum of Diagonal Matrix     \/
//      Date         : 31/08/2019                /\
/////////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,sum=0,l;
	printf("Enter the array size\n");
	scanf("%d",&s);
	printf("Enter the array element size\n");
	scanf("%d",&l);
	int a[s][l];
	printf("Enter the array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<l;j++)
			scanf("%d",&a[i][j]);
	printf("\n");
	printf("Diagonal format\n");
	printf("\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<l;j++)
		{
			if(i==j)
			{
				printf(" %d",a[i][j]);
				sum=sum+a[i][j];
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	printf("Sum of diagonal values = %d\n",sum);
}

