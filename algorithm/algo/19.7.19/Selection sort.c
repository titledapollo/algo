#include<stdio.h>
void main()
{
	int n,a[10],i,j,curr,next,t;
	printf("Enter the no. of elements=");
	scanf("%d",&n);
	printf("Enter the elements of the array=");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{

	  for(j=i+1;j<n;j++)
	  {
	      curr=a[i];
	   if(curr>a[j])
	   {
	    t=a[j];
	    a[j]=curr;
	    a[i]=t;
	   }
	  }
	}
	printf("Sorted Array=\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	}
