#include<stdio.h>
int matrixchain(int[],int);
void main()
{
    int p[100],a,i,n;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter the dimension of the array");
for(i=0;i<=n;i++)
    scanf("%d",&p[i]);
    int k=matrixchain(p,n);
    printf("the minimum number of multiplication operations required to multiply the matrix chain is %d",k);
}
int matrixchain(int p[],int n)
{
    int i,l,j,m[100][100],k,q;
    for(i=1;i<=n;i++)
    {
        m[i][i]=0;
    }
    for(l=2;l<=n-1;l++)
    {

        j=i+l-1;
        m[i][j]=999;
        for(k=1;k<=j;k++)
        {
            q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
            if(q<m[i][j])
            {
                m[i][j]=q;


            }

        }
    }
}
