#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a[n][n],b[n][n],c[n][n];
	for(i=0;i<n;i++)
	{ 
	   for(j=0;j<n;j++)
	   scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   scanf("%d",&b[i][j]);
	}
	for(i=0;i<n;i++)
	{ 
	   for(j=0;j<n;j++)
	   {
	   	c[i][j]=a[i][j]+b[i][j];
	   	printf("%d",c[i][j]);
	   } 
	}
	return 0;
}
