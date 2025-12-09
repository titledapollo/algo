#include<stdio.h>
void main()
{
   int n,a[10],i,item;
   printf("Enter the no. of elements of an array");
   scanf("%d",&n);
   printf("Enter the elements of an array");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Enter the no. to be searched");
   scanf("%d",&item);
   for(i=0;i<n;i++)
   {
       if(a[i]==item)
       {
           printf("%d is found at position %d",item,i+1);
           break;
       }
   }
   if(i==n)
    printf("item not fine");
}
