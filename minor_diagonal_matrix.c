//////////////////////////////////////////////////\
//                                               \/
//      Authore Name : Siva Pragasam.v           /\
//      Title        : Minor Diagonal Matrix     \/
//      Date         : 31/08/2019                /\
/////////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,sum=0,l,m;
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
	printf("Minor Diagonal format\n");
	printf("\n");
	m=s;
	m--;
	for(i=0;i<s;i++)
	{
		for(j=0;j<l;j++)
		{
			if(j==m)
			{
				printf(" %d",a[i][j]);
				sum=sum+a[i][j];
			}
			else
				printf(" ");
		}
		printf("\n");
		m--;
	}
	printf("\n");
	printf("Sum of Minor diagonal values = %d\n",sum);
}


