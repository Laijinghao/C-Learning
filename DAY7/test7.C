#include <stdio.h>
#include <string.h>
// void reverse(int *arr,int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         int *left=arr;
//         int *right=arr+len-1;
//         while (*left<*right)
//         {
//             int temp= *left;
//             *left=*right;
//             *right=temp;
//         }
//     }
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     reverse(arr,5);
//     for(int i=0;i<5;i++)
//     {
//         printf("翻转后数组=%d\n",arr[i]);
//     }
//     return 0;
// }


//数组返回最大值最小值
// void find_max_min(int *arr,int len,int *max,int *min)
// {
//     *max=*min=arr[0];
//     for (int i=0;i<len;i++)
//     {
//         if(*max<arr[i])
//         {
//             *max=arr[i];
//         }
//         if(*min>arr[i])
//         {
//             *min=arr[i];
//         }
//     }
// }
// int main()
// {
//     int arr[]={2,1,4,3,7,5,9};
//     int max,min;
//     find_max_min(arr,7,&max,&min);
//     printf("max=%d,min=%d\n",max,min);
//     return 0;
// }

//指针实现strlen
// int my_strlen(const char *s)
// {
//     int idx=0;
//     while(s[idx]!='\0')
//     {
//         idx++;
//     }
//     return idx;
// }
// int main()
// {
//     char str[]="Hello";
//     my_strlen(str);
//     printf("strlen=%lu\n",my_strlen(str));
//     return 0;
// }


//指针实现字符串拷贝
// void my_strcpy(char *dest,const char *src)
// {
//     while (*dest++=*src++)
//     {}
//     *dest='\0';
// }
// int main()
// {
//     char *src="Hello";
//     char dest[10];
//     my_strcpy(dest,src);
//     printf("dest=%s\n",dest);
//     return 0;
// }


//用指针实现字符串长度比较函数 my_strcmp，返回0表示相等，正数表示第一个字符串大，负数表示第一个字符串小
//  int my_strlen(const char *s)
// {
//     int idx=0;
//     while(s[idx]!='\0')
//     {
//         idx++;
//     }
//     return idx;
// }
// int my_strcmp(const char *s1,const char *s2)
// {
//     int len1=my_strlen(s1);
//     int len2=my_strlen(s2);
//     if(len1>len2)
//     {
//         printf(" %d\n",len1-len2);
//     }
//     else if(len1<len2)
//     {
//         printf(" %d\n",len1-len2);
//     }
//     else
//     {
//         printf("0\n");
//     }
// }
// int main()
// {
//     char *s1= "Hello";
//     char *s2= "I love u";
//     my_strlen(s1);
//     my_strlen(s2);
//     my_strcmp(s1,s2);
//     return 0;
// }


//指针实现字符串比较函数 my_strcmp，返回0表示相等，正数表示第一个字符串大，负数表示第一个字符串小
int my_strcmp(const char *s1,char *s2)
{
while (*s1&&*s2&&*s1==*s2)
{
    s1++;
    s2++;
}
return *s1-*s2;
}
int main()
{
    char *s1="ABC";
    char *s2="abd";
    my_strcmp(s1,s2);
    printf("%d\n",my_strcmp(s1,s2));
    return 0;
}