#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],search,i,n,p,q,r;
	printf("enter the numbers of elements\n ");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter value to find\n");
	scanf("%d",&search);
	p=0;
	q=n-1;
	r=(p+q)/2;
	while(p<=q)
	{
		if(a[r]<search)
		p=r+1;
			else if (a[r]==search)
			{
				printf("%d found at location %d\n",search,r+1);
				break;
			}
			else
			q=r-1;
			r=(p+q)/2;
      }
		if(p>q)
		printf("not found! %d isn't present in the list.\n",search);
		return 0;
	
}
