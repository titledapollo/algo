#include<stdio.h>
void main()
{
   int n,a[10],i,h,l,mid,item;
   printf("Enter the no. of elements of an array");
   scanf("%d",&n);
   printf("Enter the elements of an array");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Enter the no. to be searched");
   scanf("%d",&item);
   l=0;
   h=n-1;
   mid=(l+h)/2;
   while(l<=h)
   {
       if(a[mid]<item)
        l=mid+1;
       else
        if(a[mid]==item)
       {
           printf("%d is found at position %d\n",item,mid+1);
           break;
       }
       else
        h=mid-1;
       mid=(h+l)/2;
   }
   if(l>h)
    printf("Not found");
}
