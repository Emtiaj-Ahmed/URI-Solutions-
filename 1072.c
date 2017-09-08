#include<stdio.h>

int main()
{
    int N,X,i,count=0,count1=0;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    printf("%d in\n%d out\n",count,count1);

    return 0;
}
