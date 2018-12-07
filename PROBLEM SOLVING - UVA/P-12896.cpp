#include<stdio.h>
int main(void)
{
    int ara1[1000],ara2[1000];
    int test,num,i,j;
    char ch='"';
    char ch2=' ';
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        for(i=0; i<num; i++)
            scanf("%d",&ara1[i]);
        for(j=0; j<num; j++)
            scanf("%d",&ara2[j]);
        /*testing*/
        for(i=0,j=0; i<num; i++,j++)
        {
            if(ara1[i]==1)
            {
                if(ara2[j]==1)
                    printf(".");
                else if(ara2[j]==2)
                    printf(",");
                else if(ara2[j]==3)
                    printf("?");
                else
                    printf("%c",ch);
            }
            else if(ara1[i]==2)
            {
                if(ara2[j]==1)
                    printf("a");
                else if(ara2[j]==2)
                    printf("b");
                else if(ara2[j]==3)
                    printf("c");
            }
            else if(ara1[i]==3)
            {
                if(ara2[j]==1)
                    printf("d");
                else if(ara2[j]==2)
                    printf("e");
                else if(ara2[j]==3)
                    printf("f");
            }
            else if(ara1[i]==4)
            {
                if(ara2[j]==1)
                    printf("g");
                else if(ara2[j]==2)
                    printf("h");
                else if(ara2[j]==3)
                    printf("i");
            }
            else if(ara1[i]==5)
            {
                if(ara2[j]==1)
                    printf("j");
                else if(ara2[j]==2)
                    printf("k");
                else if(ara2[j]==3)
                    printf("l");
            }
            else if(ara1[i]==6)
            {
                if(ara2[j]==1)
                    printf("m");
                else if(ara2[j]==2)
                    printf("n");
                else if(ara2[j]==3)
                    printf("o");
            }
            else if(ara1[i]==7)
            {
                if(ara2[j]==1)
                    printf("p");
                else if(ara2[j]==2)
                    printf("q");
                else if(ara2[j]==3)
                    printf("r");
                else if(ara2[j]==4)
                    printf("s");
            }
            else if(ara1[i]==8)
            {
                if(ara2[j]==1)
                    printf("t");
                else if(ara2[j]==2)
                    printf("u");
                else if(ara2[j]==3)
                    printf("v");
            }
            else if(ara1[i]==9)
            {
                if(ara2[j]==1)
                    printf("w");
                else if(ara2[j]==2)
                    printf("x");
                else if(ara2[j]==3)
                    printf("y");
                else if(ara2[j]==4)
                    printf("z");
            }
            else if(ara1[i]==0)
            {
                if(ara2[j]==1)
                    printf("%c",ch2);
            }
        }
        printf("\n");
    }
    return 0;
}

