#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],search,i,n;
	printf("enter the numbers of elements in array\n ");
	scanf("%d",&n);
	printf("enter %d integers(s)\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter a no. to search");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			printf("%d is present at location %d.\n",search,i+1);
			break;
		}
	}
	if(i==n)
	 printf("%d isn't present in the array.\n",search);
	 return 0;
}
