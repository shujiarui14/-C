#include <stdio.h>
int main()
{
    int ret;
    int ch;
    int passcode [20]={0};
    printf("input passcode");
    scanf("%s",&passcode);//我输入的内容之后，会敲一下回车同时该函数会有一个\n（每次输入进去会先进入数据缓冲区）
    printf("que ding mi ma(Y/N):>");
    while((ch=getchar())!='\n')
    {;}
    // getchar();
    ret =getchar();
    if(ret=='Y')
    printf("sucss\n");
    else
    printf("failed\n");
    return 0;
}