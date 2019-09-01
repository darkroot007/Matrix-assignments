////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Symetric Matrix     \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,a=1,f=0;
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
		{
			if(arr[i][j]==arr1[i][j])
				f=0;	
			else
				s=1;
					
		}	
	}
	if(f==0&&s==0)
		printf("its symmetric matrix\n");
	else
		printf("its not symmetric matrix\n");
}

