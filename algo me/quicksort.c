#include<stdio.h>
void qs(int[],int,int);
int partition(int[],int,int);
void main()
{
    int a[10],l,u,n,i;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=0;
    u=n-1;
    qs(a,l,u);
    printf("The sorted array = ");
    for(i=0;i<n;i++)
    printf("%d, ",a[i]);
}
void qs(int a[],int lb,int ub)
{
    int i=0;
    if(lb<ub)
    {
        i=partition(a,lb,ub);
        qs(a,lb,i-1);
        qs(a,i+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{
    int p,s,e,t;
    p=a[lb];
    e=ub;
    s=lb;
    while(s<e)
    {
        while(a[s]<=p && s<e)
            s++;
        while(a[e]>p)
            e--;
        if(s<e)
        {
            t=a[s];
            a[s]=a[e];
            a[e]=t;
        }
    }
    a[lb]=a[e];
    a[e]=p;
    return e;
}
