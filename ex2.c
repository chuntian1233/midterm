#include<stdio.h>
main()
{
    int a,max,i;
    max=0;
    while((a=getchar())!='\n')
    for(i=1;i<10;i++)
    {
        if(max<a )max=a;
    }
    printf("The max is%d\n",max);
    



}