////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Null Matrix         \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
void fun(int *ptr,int a ,int b);
int main()
{
	int r,c,cou=0,i,j;
	printf("Enter the row size of array\n");
	scanf("%d",&r);
	printf("Enter the column size of array\n");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		cou++;
		printf("Enter the %d array values\n",cou);
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	}
	fun(&arr[0][0],r,c);
}
void fun(int *ptr,int a,int b)
{
	int cou=0,row=0,column=0,i,j,t;
	t=a*b;
	for(i=0;i<t;i++)
	{
		if(*(ptr+0)==0)
			cou++;
	}
	if(cou==t)
		printf("its a Null matrix\n");
	else
		printf("its not a Null matrix\n");
}
