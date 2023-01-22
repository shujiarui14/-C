#include <stdio.h>
#include <string.h>
//c里面的函数相当于子程序
//1，库函数
//2，自定义函数



//     int add(int x,int y)//x,xy为输入参数
//     {
//          int sum=x+y;
//          return sum;
//     }
// int main()
// {
//     int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     int z=add(a,b);
//     printf("%d\n",z);
//     return 0;
// }


// int main()
// {
    // char arr1[]="narcissus";
    // char arr2[]="!!!!!!!!!";
    // strcpy(arr2,arr1);//string copy字符串复制函数，该函数需要引头文件#include <string.h>,且该函数在复制时会复制\0即文件结束标志
    // printf("%s\n",arr2);


    // char arr[]="hello narcissus";
    // memset (arr,'*',5);
    // printf("%s\n",arr);
    // return 0;

// }



// int get_max(int x,int y)
// {
//     if(x>y)
//     return x;
//     else 
//     return y;
// }
// int main()
// {
//     int a=88;
//     int b=66;
//     int max=get_max(a,b);
//     printf("max is :%d\n",max);
//     return 0;
// }


// void swap(int x,int y)
// {
//     int temp=0;
//     temp=x;
//     x=y;
//     y=temp;
// }

// void swap2(int* pa,int* pb)
// {
//     int temp2=0;
//     temp2=*pa;
//     *pa=*pb;
//     *pb=temp2;
// }
// int main()
// {
//     int a=10;
//     int b=20;
//     printf("a=%d b=%d\n",a,b);
//     // swap(a,b);//传值调用
//     swap2(&a,&b);//传址调用
//     printf("a=%d b=%d\n",a,b);
//     return 0;
// }


// int pp(int z)
// {
//     int a,b,c;
//     for(a=2;a<=z;a++)
//     {
//         for(b=2;b<=a;b++)
//         {
//             c=a%b;
//             if(c==0)
//             break;
//         }
//         if(a==b)
//         printf("%d\n",a);
//     }
    
// }

// int main()
// {
//     printf("which number?");
//     int x;
//     scanf("%d",&x);
//     pp(x);
//     return 0;

// }


// int prime(int n)
// {
//     int i;
//     for(i=2;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             if(i==n)
//             return 1;
//             else
//             return 0;
//         }
//     }
// }

// int main()
// {

//     int x=111;
//     if(prime(x)==1)
//     printf("yes\n");
//     else
//     printf("no\n");
//     return 0;
// }


// int serch(int arr[],int x,int number)
// {
//     number--;
//     int left=0,right=number,mid;
//     while(left<=right)
//     {
//         mid=(left+right)/2;
//      if(arr[mid]<x)
//      {
//       left=mid+1;
     
//      }
//      else if(arr[mid]>x)
//      {
//         right=mid-1;
//      }
//      else
//      return mid;
     
//     }
//     return 1;
// }


// int main()
// {
//     int arr1[]={1,2,3,4,5,6,7,8,9,10};
//     int k;
//     scanf("%d",&k);
//     int number=sizeof(arr1)/4;
//     int ret=serch(arr1,k,number);
    
//     if(ret==1)
//     {
//         printf("can not find it\n");
//     }
//     else
//     {
//         printf("find it %d\n",ret);
//     }
//     return 0;
// }


// void add(int* p)
// {
//     (*p)++;
// }
// int main()
// {
//     int num=0;
    
//     for(;num<100;)
//     {
//         add(&num);
//        printf("%d\n",num);
//     }
//     return 0;
// }


//函数是可以嵌套的
// void line()
// {
//     printf("narcissus   ");
// }
// void three_line()
// {
//     int i=0;
//     for(;i<3;i++)
//     {
//         line();
//     }
   
// }
// int main()
// {
//     three_line();
//     return 0;
// }

//函数的链式访问——一个函数的返回值作为另一个函数的参数
// int main(){
//     int len;
//     char ter[]={"abcd"};
//     len=strlen(ter);
//     printf("%d\n",len);

//     printf("%d\n",strlen(ter));//strlen函数的返回值作为printf函数的参数

//     printf("%d",printf("%d",printf("%d",printf("%d",43))));//printf函数的返回值是打印字符的个数
//     return 0;
// }


//函数申明
int add(int ,int);//代码运行时是从前往后走，当自己写的函数写在主函数之后时可以在主函数之前加一个申明
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=add(a,b);//函数的调用
    printf("sum=%d",sum);
    return 0;
}

//函数定义
int add(int x,int y)
{
    int z=x+y;
    return z;
}