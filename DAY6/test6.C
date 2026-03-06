#include<stdio.h>
//指针的基本使用
// int main()
// {
//     int a =10;
//     int *p = &a;
//     printf("a = %d,&a=%p\n",a,&a);
//     printf("p=%p,*p=%d\n",p,*p);
//     *p=20;
//     printf("修改后a = %d\n",a);
//     return 0;
//}
//用指针遍历数组
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int *p = arr;
//     for(int i=0;i<5;i++)
//     {
//         printf("arr[%d]=%d,*(p+%d)=%d)",i,arr[i],i,*(p+i));
//     }
//     return 0;
// }

//指针指向问题
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int *p1 = arr;        // 正确：指向arr[0]（int*）
//     int (*p2)[5] = &arr;  // 正确：指向整个数组（int (*)[5]）

//     // 输出地址，看偏移效果
//     printf("p1的地址：%p\n", p1);     // 0x7ffd89a6b5a0（arr[0]地址）
//     printf("p1+1的地址：%p\n", p1+1); // 0x7ffd89a6b5a4（偏移4字节，指向arr[1]）
    
//     printf("p2的地址：%p\n", p2);     // 0x7ffd89a6b5a0（和arr地址相同）
//     printf("p2+1的地址：%p\n", p2+1); // 0x7ffd89a6b5b4（偏移20字节=5×4，跳过整个数组）
//     return 0;
// }

//指针修改数组
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int *p=arr;
//     for(int i=0;i<5;i++)
//     {
//         *(p+i)*=2;
    
//     printf("arr[%d]=%d\n",i,arr[i]);
//     }
//     return 0;
// }



//用指针实现数组反转
void reverse(int *arr,int len)
{
int *left =arr;
int *right=arr+len-1;
while (left<right)
{
    int temp=*left;
    *left=*right;
    *right=temp;
    left++;
    right--;
}
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("反转后数组: %d\n",arr[i]);
    }
    return 0;
}