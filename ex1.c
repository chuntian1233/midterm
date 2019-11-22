# include<stdio.h>

 main()
{
    char ch;
    int nw=0,count=0;
    printf("请输入一段总长度不超过50个字符的任意字母数字:\n");
    while((ch=getchar())!='\n')
    if(ch==' ')
    nw=0;
    else if(nw==0)
    {
        nw=1;
        count++;

    }
    printf("The number of words is:\n",count);
    return 0;


}