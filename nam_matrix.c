////////////////////////////////////////////\
//                                         \/
//      Authore Name : Siva Pragasam.v     /\
//      Title        :  Matrix             \/
//      Date         : 31/08/2019          /\
///////////////////////////////////////////\/

#include<stdio.h>
#include<math.h>
int main()
{
	int s,i,j,a=0,f;
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
		for(j=0;j<s;j++)
		{
			f=pow((arr[i][j]),2);
			a=a+f;
		}
	}
	printf("squre value = %d\n",a);
	a=sqrt(a);
	printf("squreroot value = %d\n",a);
}

