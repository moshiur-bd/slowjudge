#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,s,c,j,sum;
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        sum=a-b;
        if(sum<0)
            sum=sum*(-1);
        if(sum==0)
            continue;
        printf("%d\n",sum);
    }
    return 0;
}
