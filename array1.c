#include <stdio.h>
#include <string.h>
//数组是一组相同类型元素的集合
//常见的一些类型
// int main()
// {
    // int arr1[10]={1,2,3};//未完全初始化
    // char arr2[5]={'a','b'};
    // char arr4[5]="ab";
    // char arr5[]="qwertt";
    // // char arr6[n]={};//[这里必须是常量]
    // printf("%d\n",sizeof(arr5));//是个操作符，计算变量，数组，类型的大小
    //     printf("%d\n",strlen(arr5));//只能求字符串的长度，是个库函数，得引头文件


    //     int number[5]={1,2,3,4,5};
    //     printf("%d\n",sizeof(number));
    //     printf("%d\n",strlen(number));//是计算字符串的长度，不能计算整形
    //     return 0;
// }

//一维数组在内存中的分布
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};//数组在内存中是连续存放的
//     int i=0;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     for(;i<sz;i++)
//     {
//         printf("arr[%d]=%p\n",i,&arr[i]);
//     }
//     return 0;
// }
// arr[0]=000000000061FDF0
// arr[1]=000000000061FDF4
// arr[2]=000000000061FDF8
// arr[3]=000000000061FDFC
// arr[4]=000000000061FE00
// arr[5]=000000000061FE04
// arr[6]=000000000061FE08
// arr[7]=000000000061FE0C
// arr[8]=000000000061FE10
// arr[9]=000000000061FE14


//二维数组
int main()
{
    //二维数组的初始化
    int arr1[2][4]={1,1,2,3,6,5,4,8};//行和列-有两行，四列
    char arr2[3][4]={'a','b','c','d','e'};
    int arr3[2][4]={{1,1,2,3},{6,5,4,8}};
    int arr4[][3]={{1,2,3},{4,5,6}};//行可以省略不写，但是列必须标明
    int i=0;
    for(;i<2;i++)
    {
        int j=0;
    for(;j<3;j++)
    {
     printf("%d ",arr4[i][j]);
    }
    printf("\n");
    }

    i=0;
    for(;i<2;i++)
    {
        int j=0;
    for(;j<3;j++)
    {
     printf("arr[%d][%d]=%p ",i,j,&arr4[i][j]);//二维数组数组在内存中是连续存放的
    }
    printf("\n");
    }
     return 0;
     }
    