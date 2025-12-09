#include<stdio.h>
float w[10],p[10],x[10],r[10];
void knapsack(float m,float w[],float p[],int n)
{
int i,j;
float u,v;

 u=m;
 v=0.0;

for(i=0;i<n;i++)
    x[i]=0.0;
    for(i=0;i<n;i++)
{
 if(w[i]>u)
 {
  break;
 }
else
{
 x[i]=1.0;
 u=u-w[i];
 v=v+p[i]*x[i];
}
}
if(i<=n)
{
 x[i]=u/w[i];
}
v=v+(p[i]*x[i]);

 for(i=0;i<n;i++)
 printf("Resultant Vector=%f\n",x[i]);
 printf("Maximum Profit Value=%f",v);

}
void main()
{
 int n,i,j;
 float m,c;
 printf("Enter the capacity of the knapsack=");
 scanf("%f",&m);
 printf("Enter the no. of items=");
 scanf("%d",&n);
 printf("Enter the weights of the items=");
 for(i=0;i<n;i++)
 {
  scanf("%f",&w[i]);
 }
 printf("Enter the profits of the items=");
  for(i=0;i<n;i++)
  {
   scanf("%f",&p[i]);
  }
  for(i=0;i<n;i++)
  {
      r[i]=p[i]/w[i];
  }
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
     {
      if(r[i]<r[j])
      {
       c=r[j];
       r[j]=r[i];
       r[i]=c;

       c=p[j];
       p[j]=p[i];
       p[i]=c;

       c=w[j];
       w[j]=w[i];
       w[i]=c;

      }

     }

}
printf("Sorted Ratio=\n");
 for(i=0;i<n;i++)
  printf("%f\n",r[i]);
  knapsack(m,w,p,n);
}

