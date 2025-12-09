#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],n,i,j,s;
	printf("enter the no. of element");
	scanf("%d",&n);
	printf("enter %d integers\n",n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=1;i<=(n-1);i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			s=a[j];
			a[j]=a[j-1];
			a[j-1]=s;
			j--;
		}
	}
	printf("sorted list in ascending order:\n");
	for(i=0;i<=n-1;i++)
	printf("%d\n",a[i]);
	return 0;
}

