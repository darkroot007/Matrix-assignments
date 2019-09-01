//////////////////////////////////////////////////////\
//                                                   \/
//      Authore Name : Siva Pragasam.v               /\
//      Title        : Two Matrix Multiplication     \/
//      Date         : 31/08/2019                    /\
/////////////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,m,a1=0,t=0,s1=0,k;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int a[s][s],b[s][s];
	printf("Enter the first array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the secand array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&b[i][j]);
	printf("Scalar matrix values\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			for(k=0;k<s;k++)
			{
				s1=a[i][k]*b[k][j];
				t=t+s1;
			}
			printf(" %d ",t);
			t=0;
		}
		printf("\n");
	}
}


