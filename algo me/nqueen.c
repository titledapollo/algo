#include<stdio.h>
#include<math.h>
int x[10];
int count=0;
int main()
{
int n,k;
printf("enter the no of queens");
scanf("%d",&n);
nqueen(1,n);
}
int place(k,i)
{
int j;
for(j=1;j<=k-1;j++)
{
if(x[j]==i)
return 0;
else
if(abs(x[j]-i)==abs(j-k))
return 0;
}
return 1;
}



void nqueen(int k,int n)
{
int i;
for(i=1;i<=n;++i)
{
if(place(k,i))
{
    x[k]=i;
if(k==n)
    print(n);
else
    nqueen(k+1,n);
}
}
}


void print(int n)
{
int i,j;
printf("\n\n solution:%d\n\n",++count);
for(i=1;i<=n;i++)
printf("\t%d",i);
for(i=1;i<=n;i++)
{
printf("\n\n%d",i);
for(j=1;j<=n;j++)
{
if(x[i]==j)
printf("\t Q");
else
printf("\t-");
}
}
}


















