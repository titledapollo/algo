#include<stdio.h>
float w[10],p[10];
float x[10],r[10];
void knapsack(float,int,float[],float[]);
void main()
{
    int n,i,j;
    float m,temp;
    printf("Enter the capacity of knapsack:");
    scanf("%f",&m);
    printf("Enter the no of items:");
    scanf("%d",&n);
    printf("Enter the weights of the items:\n");
    for(i=0;i<n;i++)
        scanf("%f",&w[i]);
    printf("Enter the profits of the items:\n");
    for(i=0;i<n;i++)
        scanf("%f",&p[i]);

        for(i=0;i<n;i++)
            r[i]=(p[i]/w[i]);
        for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(r[i]<r[j])
                    {
                    temp=r[j];
                    r[j]=r[i];
                    r[i]=temp;

                    temp=p[j];
                    p[j]=p[i];
                    p[i]=temp;

                    temp=w[j];
                    w[j]=w[i];
                    w[i]=temp;
                    }

                }
            }
            printf("sorted Ratio:\n");
            for(i=0;i<n;i++)
                printf("%f\n",r[i]);
        knapsack(m,n,w,p);
}
void knapsack(float m,int n,float w[],float p[])
{
    int i,j;
    float x[10],u,v=0.0;
    u=m;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(w[i]>u)
            break;
        else
        {
            x[i]=1.0;
            u=u-w[i];
            v=v+p[i];
        }
    }
    if(i<n)
        x[i]=u/w[i];
        v=v+(p[i]*x[i]);
    for(i=0;i<n;i++)
    printf("The resultant vector is=%f\n",x[i]);
    printf("Maximum profit value=%f",v);
}
