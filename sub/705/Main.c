#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[31];
    int i,sum,j,T,c,d;
    scanf("%d",&T);
    getchar();
    while(T)
    {
        c=0;
        d=0;
        scanf("%d",&d);
        sum=30-d;
        getchar();
        gets(a);
        for(i=0; i<30; i++)
        {
            if(a[i]=='1')
                c++;
            if(c>sum)
            {
                d=1;
                printf(":D\n");
                break;
            }
        }
        if(d==0)
            printf(":(\n");

    }

    return 0;
}
