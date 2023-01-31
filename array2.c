#include <stdio.h>

// void bubble_sort(int arr[],int x)
// {
//     int i=0;
//     for(;i<x-1;i++)
//     {
//         int j=0;
//         for(;j<x-1-i;j++)
//         {
//         if(arr[j]>arr[j+1])
//         {
//             int temp;
//             temp=arr[j+1];
//             arr[j+1]=arr[j];
//             arr[j]=temp;
//         }
       
//         }
       
//     }

// }
// int main()
// {
//     int arr[]={0,1,2,3,55,5,6,7,86,9,100};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     int y=0;
//     for(;y<sz;y++)
//     {
//         printf("  %d",arr[y]);
//     }
//     return 0;
// }


int main()
{
    int arr[]={0,1,2,3,4,5,6,7};
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);//通常数组名就是首元素的地址，--sizeof(数组)表示整个数组的大小，和&数组表示去取出整个数组的地址
    printf("%p\n",&arr);//取出的是数组的地址,只是说从这里开始
    return 0;

}