#include<stdio.h>
void main()
{
	int a[10],i,j,n,pos,t=pos,s=0;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("Enter the elements of the array=\n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		t=a[i];
	    for(j=i-1;j>=0&&t<=a[j];j--)
		  a[j+1]=a[j];
		  a[j+1]=t;
	}

	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
	 printf("%d\n",a[i]);
	 }
