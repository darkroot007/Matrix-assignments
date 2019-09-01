////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Scalaor Matrix      \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
void fun(int *ptr,int m,int s);
int main()
{
	int s,i,j,m;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int a[s][s],b[s][s];
	printf("Enter the first array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&a[i][j]);
/*	printf("Enter the secand array values\n");
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			scanf("%d",&b[i][j]);*/
	printf("Enter the multiplayer value\n");
	scanf("%d",&m);
	fun(&a[0][0],m,s);
//	fun(&b[0][0],m,s);
}
void fun(int *ptr,int m,int s)
{
	int i,j;
	printf("Scalar matrix values\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf(" %d ",m*(*ptr));
			ptr++;
		}
		printf("\n");
	}
}
