#include<stdio.h>
#include<string.h>
int main()
{
    int t,len,i,rem;
    scanf("%d", &t);
    while(t--)
    {
        char str[10000];
        scanf("%s", &str);
        long int count=0;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='A')
            {
                count=count+1;
            }
            if(str[i]=='B')
            {
                count=count+2;
            }
            if(str[i]=='C')
            {
                count=count+3;
            }
            if(str[i]=='D')
            {
                count=count+4;
            }
            if(str[i]=='E')
            {
                count=count+5;
            }
            if(str[i]=='F')
            {
                count=count+6;
            }
            if(str[i]=='G')
            {
                count=count+7;
            }
            if(str[i]=='H')
            {
                count=count+8;
            }
            if(str[i]=='I')
            {
                count=count+9;
            }
            if(str[i]=='J')
            {
                count=count+10;
            }
            if(str[i]=='K')
            {
                count=count+11;
            }
            if(str[i]=='L')
            {
                count=count+12;
            }
            if(str[i]=='M')
            {
                count=count+13;
            }
            if(str[i]=='N')
            {
                count=count+14;
            }
            if(str[i]=='O')
            {
                count=count+15;
            }
            if(str[i]=='P')
            {
                count=count+16;
            }
            if(str[i]=='Q')
            {
                count=count+17;
            }
            if(str[i]=='R')
            {
                count=count+18;
            }
            if(str[i]=='S')
            {
                count=count+19;
            }
            if(str[i]=='T')
            {
                count=count+20;
            }
            if(str[i]=='U')
            {
                count=count+21;
            }
            if(str[i]=='V')
            {
                count=count+22;
            }
            if(str[i]=='W')
            {
                count=count+23;
            }
            if(str[i]=='X')
            {
                count=count+24;
            }
            if(str[i]=='Y')
            {
                count=count+25;
            }
            if(str[i]=='Z')
            {
                count=count+26;
            }

        }
        if(count<=26)
        {
            if(count==1)
            {
                printf("A\n");
            }
            if(count==2)
            {
                printf("B\n");
            }
            if(count==3)
            {
                printf("C\n");
            }
            if(count==4)
            {
                printf("D\n");
            }
            if(count==5)
            {
                printf("E\n");
            }
            if(count==6)
            {
                printf("F\n");
            }
            if(count==7)
            {
                printf("G\n");
            }
            if(count==8)
            {
                printf("H\n");
            }
            if(count==9)
            {
                printf("I\n");
            }
            if(count==10)
            {
                printf("J\n");
            }
            if(count==11)
            {
                printf("K\n");
            }
            if(count==12)
            {
                printf("L\n");
            }
            if(count==13)
            {
                printf("M\n");
            }
            if(count==14)
            {
                printf("N\n");
            }
            if(count==15)
            {
                printf("O\n");
            }
            if(count==16)
            {
                printf("P\n");
            }
            if(count==17)
            {
                printf("Q\n");
            }
            if(count==18)
            {
                printf("R\n");
            }
            if(count==19)
            {
                printf("S\n");
            }
            if(count==20)
            {
                printf("T\n");
            }
            if(count==21)
            {
                printf("U\n");
            }
            if(count==22)
            {
                printf("V\n");
            }
            if(count==23)
            {
                printf("W\n");
            }
            if(count==24)
            {
                printf("X\n");
            }
            if(count==25)
            {
                printf("Y\n");
            }
            if(count==26)
            {
                printf("Z\n");
            }
        }

        else
        {
            int n=count;
            while(count>26)
            {
                count=count/26;
                for(i=1; i<=count; i++)
                {
                    printf("Z");
                }
                if(count%26!=0)
                {
                    rem=n%26;
                }

            }
            if(rem==0)
            {
                printf("\n");
            }
            if(rem>0)
            {
                if(rem==1)
                {
                    printf("A\n");
                }
                if(rem==2)
                {
                    printf("B\n");
                }
                if(rem==3)
                {
                    printf("C\n");
                }
                if(rem==4)
                {
                    printf("D\n");
                }
                if(rem==5)
                {
                    printf("E\n");
                }
                if(rem==6)
                {
                    printf("F\n");
                }
                if(rem==7)
                {
                    printf("G\n");
                }
                if(rem==8)
                {
                    printf("H\n");
                }
                if(rem==9)
                {
                    printf("I\n");
                }
                if(rem==10)
                {
                    printf("J\n");
                }
                if(rem==11)
                {
                    printf("K\n");
                }
                if(rem==12)
                {
                    printf("L\n");
                }
                if(rem==13)
                {
                    printf("M\n");
                }
                if(rem==14)
                {
                    printf("N\n");
                }
                if(rem==15)
                {
                    printf("O\n");
                }
                if(rem==16)
                {
                    printf("P\n");
                }
                if(rem==17)
                {
                    printf("Q\n");
                }
                if(rem==18)
                {
                    printf("R\n");
                }
                if(rem==19)
                {
                    printf("S\n");
                }
                if(rem==20)
                {
                    printf("T\n");
                }
                if(rem==21)
                {
                    printf("U\n");
                }
                if(rem==22)
                {
                    printf("V\n");
                }
                if(rem==23)
                {
                    printf("W\n");
                }
                if(rem==24)
                {
                    printf("X\n");
                }
                if(rem==25)
                {
                    printf("Y\n");
                }
                if(rem==26)
                {
                    printf("Z\n");
                }
            }

        }
    }
    return 0;

}

