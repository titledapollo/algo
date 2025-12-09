#include<stdio.h>
#define MAX 100
void ms(int[],int,int);
void merge(int[],int,int,int);
int main()
{
    int a[50],n,i;
    printf("Enter the no of elements to be inserted:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    ms(a,0,n-1);
    printf("\nArray after merge sorting:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

void ms(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        ms(a,lb,mid);
        ms(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

void merge(int a[],int lb, int mid, int ub)
{
    int b[MAX],i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        if(a[j]<=a[i])
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=ub)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}
