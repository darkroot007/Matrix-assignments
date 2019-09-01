///////////////////////////////////////////////////\
//                                                \/
//      Authore Name : Siva Pragasam.v            /\
//      Title        : Two Matrix Equal or Not    \/
//      Date         : 31/08/2019                 /\
//////////////////////////////////////////////////\/

#include<stdio.h>
int main()
{
	int s,i,j,f,v=0;
	printf("Enter array size\n");
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
	for(i=0;i<s;i++)
		for(j=0;j<s;j++)
			if(a[i][j]!=b[i][j])
				v++;
	if(v==0)
		printf("the two matrix are equal\n");
	else
		printf("The two matrix are not equal\n");
}
