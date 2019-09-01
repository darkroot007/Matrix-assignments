////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        : Lower Matrix        \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,a,f;
	printf("Enter the array size\n");
	scanf("%d",&s);
	int arr[s][s];
	printf("Enter the values\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
			scanf("%d",&arr[i][j]);
	}
	for(i=0;i<s;i++)
	{
		j=1;
		for(j=j+i;j<s;j++)
			if(arr[i][j]!=0)
				f=0;
			else
				f=1;
		a--;
	}
	if(f==1)
		printf("its a lower traiangle matrix\n");
	else
		printf("its not a lower traiangle matrix\n");
}
