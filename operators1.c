#include "openacc.h"
#include <stdio.h>
#include <string.h>

//算数操作符
// int main()
// {
//     int a=5/2;//得到的是商
//     double c=5/2.0;//要想得到小数可以使用浮点数进行定义,并且要想得到的是小数，操作数两端最起码要有一个是浮点数
//     int b=5%2;//得到的是余数，取模时操作数必须是整数
//     printf("a=%d b=%d c=%f\n",a,b,c);
//     return 0;
// }


//移位操作符
// int main()
// {
//     int a=16;//二进制表示为00000000000000000000000000010000 右移一位相当于除以2  四舍五入
//     int b=a>>1;//移动的是二进制位，>>是右移操作符，以为后位000000000000000000000000000001000为十进制的8
//     //右移操作符分为逻辑右移（右边丢弃，左边补0），和算术右移（右边丢弃，左边补原来的符号位）

//     int c=-1>>1;
//     printf("%d\n",c);
//     //首先数字在内存中存的是补码，移位操作时操作的也是补码，正数的三码相同
//     //以-1举例
//     //原码：10000001
//     //反码：11111110（符号位不变，其他位按位取反）
//     //补码：11111111（反码＋1得到补码）

//     int d=-5<<1;
//     printf("d=%d\n",d);
    
//     //-1的操作如下
//     //11111111补码
//     //11111110反码
//     //10000001原码（对应十进制的-1）
//     printf("%d\n",b);
//     return 0;
// }//左移操作符（左边丢弃，右边补0）左移相当于乘以2   

//按位异或
// int main()
// {
    // int a=3;//00000011
    // int b=5;//00000101
    // int c=a&b;//按位与   对二进制的补码进行操作
    // int d=a|b;//按位或
    // int e=a^b;//按位异或 （对应相异的二进制位为1，相同为0）
    // printf("c=%d d=%d e=%d",c,d,e);


    //异或的应用--交换两个值，且不引入中间变量
//     int x=6;
//     int y=8;
//     printf("before :x=%d y=%d\n",x,y);
//     x=x^y;
//     y=x^y;//==x,但是要和y交换值
//     x=x^y;
//     printf("after :x=%d y=%d\n",x,y);

//     return 0;
// }


//移位操作符的应用

// int main()
// {
//     //计算一个二进制的补码有几位1
//     int num;
//     printf("input num\n");
//     scanf("%d",&num);
//     //1：
//     int tmp=0;
//     while(num)
//     {
//         if(1==num%2)
//         tmp++;
//         num=num/2;
//     }
//     printf("counter=%d\n",tmp);

//     //2:
//     int i=0;
//     for(;i<32;i++)
//     {
//         if(1==(num<<i)&1)
//         tmp++;
        
//     }
//     printf("tmp=%d\n",tmp);
//     return 0;


// }


//赋值操作数

// int main()
// {
//     //简单赋值法 =，只需要注意一个=是赋值，==才是判断相等
//     //符合赋值法
//     int a=200;
//     int z=99;
//     int x=200;
//     // a=a+2;
//     a +=2;//双目操作数
//     z %=2;
//     x >>=2;
//     printf("a=%d b=%d c=%d\n",a,z,x);

// 单目操作数
// ! 逻辑反操作
// - 负值
// + 正值
// & 取地址
// sizeof 操作数的类型长度(以字节为单位)
// ~ 对一个数的二进制按位取反
// -- 前置 后置--
// ++ 前置 后置++
// * 间接访问操作符(解引用操作符)
// () 强制类型转换  

// int c=5;
// int b=~c;//按位取反是对所有位按位取反 包括符号位 且是对补码进行按位取反
// int g=-5;
// int v=~g;
// printf("b=%d v=%d\n",b,v);
//     return 0;
// }

//sizeof和strlen的区别
int main()
{
    int arr[10]={1,2,3,4,5};
    int tmp=sizeof(arr);
    int tax=strlen(arr);//strlen不能计算int 类型的数组
    printf("tmp=%d tax=%d\n",tmp,tax);

    char arr1[10]={'a','b','c','d','f'};
    char arr2[10]="abcdf";
    char arr3[]="abcdf";

    int r=sizeof(arr1);
    int o=strlen(arr1);

    int q=sizeof(arr2);
    int w=sizeof(arr2);
    
    int k=sizeof(arr3);
    int l=sizeof(arr1);
    printf("r=%d o=%d\n",r,o);
    printf("q=%d w=%d\n",q,w);
    printf("k=%d l=%d\n",q,w);
    
    
    return 0;
}