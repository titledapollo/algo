#include<stdio.h>
#include<conio.h>
long int m[20][20];
int s[20][20];
matrix(int p[],int n)
{
long int q;
int i,j,L,k;
for(i=1;i<=n;i++)
{
m[i][i]=0;
}
for(L=2;L<=n;L++)
{
for(i=1;i<=(n-L+1);i++)
{
j=i+L-1;
m[i][j]=999;
for(k=i;k<=(j-1);k++)
{
q=m[i][k]+m[k+i][j]+p[i-1]*p[k]*p[j];
if(q<m[i][j])
{
m[i][j]=q;
s[i][j]=k;
}
}
}
}
printf("Optimal multiplication sequence is=");
pp(i-1,j,s);
printf("\n");
printf("Minimum no. of multiplication is=%d",m[1][n]);
}
pp(int i,int j,int s[][20])
{
    if(i==j)
        printf("A%d",i);
    else
    {
        printf("(");
        pp(i,s[i][j],s);
        pp(s[i][j]+1,j,s);
        printf(")");
    }
}
void main()
{
int n,i,p[5];
printf("Enter the no. of matrices=");
scanf("%d",&n);
printf("Enter the dimensions of matrices=");
for(i=0;i<(n+1);i++)
{
scanf("%d",&p[i]);
}
matrix(p,n);
}


