#include<stdio.h>
int main()
{
    int T,A,B;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&A,&B);
        if(A>B)
            printf("%d\n",A-B);
        else if(B>A)
            printf("%d\n",B-A);
        else
            printf("nothing otherwise\n");

        }
    return 0;
}
