#include<stdio.h>
int main()
{
	int i,j,n,s,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   for(s=0;s<n-i-1;s++)
	    printf(" ");
	   for(j=0;j<i+1;j++)
	   printf("*");
	   for(k=0;k<i,k++)
	   printf(" ");
	   
	}
            return 0;
}
