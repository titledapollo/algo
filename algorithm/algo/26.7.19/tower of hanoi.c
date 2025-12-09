#include<stdio.h>
void toh(int,char,char,char);
void main()
{
    int n;
    char s='s',d='d',t='t';
    printf("Enter the no. of disc");
    scanf("%d",&n);
    toh(n,s,t,d);
}
void toh(int n,char s,char t,char d)
{
    if(n==1)
        printf("move %c to %c\n",s,d);
    else
    {
       toh(n-1,s,d,t);
        printf("move %c to %c\n",s,d);
        toh(n-1,t,s,d);
    }


}
