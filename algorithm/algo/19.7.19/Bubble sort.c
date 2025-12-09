#include<stdio.h>
void main()
{
	int b[10],i,j,n,t=0;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("Enter the elements of the array=\n");
	for(i=0;i<n;i++)
	 scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[1+j])
			{
				t=b[j];
				b[j]=b[j+1];
				b[1+j]=t;
			}
		}
	}
	printf("Sorted Array=\n");
	for(i=0;i<n;i++)
	 printf("%d\n",b[i]);

}
