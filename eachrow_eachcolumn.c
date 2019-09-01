//////////////////////////////////////////////////////////\
//                                                       \/
//      Authore Name : Siva Pragasam.v                   /\
//      Title        : Each row an column add Matrix     \/
//      Date         : 31/08/2019                        /\
/////////////////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,row=0,col=0,r,c,ro=0,co=0;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int a[s][s];
	printf("Enter the first array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<s;i++)
	{
		co++;
		for(j=0;j<s;j++)
		{
			c=a[i][j];
			col=col+c;
		}
		printf("%d column sum = %d\n",co,col);
		col=0;
	}
	for(i=0;i<s;i++)
	{
		ro++;
		for(j=0;j<s;j++)
		{
			r=a[j][i];
			row=row+r;
		}
		printf("%d row sum = %d\n",ro,row);
		row=0;
	}
}
			
