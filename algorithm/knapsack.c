#include<stdio.h>
void knapsack(float cap,int n,float p[],float w[])
{
int i;
float x[20],u,v;
for(i=0;i<n;i++)
  x[i]=0.0;
u=cap;
v=0.0;
for(i=0;i<n;i++)
{
 if(w[i]>u)
  break;
else
{
x[i]=1.0;
u=u-w[i];
v=v+p[i]*x[i];
}
}
if(i<=n)
  x[i]=u/w[i];
v=v+p[i]*x[i];
    printf("\nThe result vector is: ");
   for (i=0;i<n;i++)
    printf("%f\t",x[i]);

   printf("\nMaximum profit is: %f", v);

}

void main()
{
float w[10],p[10],cap;
int n,i,j;
float R[20],swap;
printf("enter the no of objects");
scanf("%d",&n);
printf("enter the no of weights");
for(i=0;i<n;i++)
{
scanf("%f",&w[i]);
}
printf("enter the no of profit");
for(i=0;i<n;i++)
{
scanf("%f",&p[i]);
}
printf("enter the cap of knapsack");
scanf("%f",&cap);
for(i=0;i<=n;i++)
{
R[i]=p[i]/w[i];
}

for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(R[i]<R[j]){
swap=R[j];
R[j]=R[i];
R[i]=swap;

swap=w[j];
w[j]=w[i];
w[i]=swap;

swap=p[j];
p[j]=p[i];
p[i]=swap;
}
}
}
knapsack(cap,n,p,w);
}













