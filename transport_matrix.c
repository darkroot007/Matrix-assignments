/////////////////////////////////////////////\
//                                          \/
//      Authore Name : Siva Pragsam.v	    /\
//      Title        : Transform Matrix     \/
//      Date         : 31/08/2019           /\
////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,a=1,f;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int arr[s][s];
	int arr1[s][s];
	printf("Enter the values\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
			scanf("%d",&arr[i][j]);
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			arr1[i][j]=arr[j][i];
		}
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
			printf(" %d",arr1[i][j]);
		printf("\n");
	}
}
