#include<stdio.h>
void qs(int a[14],int f,int l){
   int i, j, p, temp;

   if(f<l){
      p=f;
      i=f;
      j=l;

      while(i<j){
         while(a[i]<=a[p]&&i<l)
            i++;
         while(a[j]>a[p])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
       temp=a[p];
      a[p]=a[j];
      a[j]=temp;
      qs(a,f,j-1);
      qs(a,j+1,l);

   }
}

int main(){
   int i, n, a[25];

   printf("Enter the number of elements ");
   scanf("%d",&n);

   printf("Enter %d elements: ",n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   qs(a,0,n-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}

