#include<stdio.h>

// 字符和字符串
/* int main()
{
    // 字符(使用单引号)
    'a';
    '#';
    //字符串(使用双引号)
    "abc";
    "qwer";
    "a"; 
    ""; //空字符串 
    return 0;
} */


//字符串的使用
/* int main()
{   //字符串要放在字符数组中
    char arr1 [] = "abc";
    char arr2 [] = {'a','b','c','\0'};
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    return 0;
} */


// 求字符串的长度
/* #include<string.h>
int main()
{
    int len = strlen("abc");
    printf("%d\n",len);
    return 0;
} */


// 计算字符串受“\0”影响的长度
/* #include<string.h>
int main()
{
    char arr1[] = {"abc"};
    char arr2[] = {'a','b','c'}; 
    char arr3[] = {'a','b','c','\0'}; 
    printf("arr1:%d\n", strlen(arr1));
    printf("arr2:%d\n", strlen(arr2));  //随机
    printf("arr3:%d\n", strlen(arr3)); 
    return 0;
} */


//转译字符
/* int main()
{   
    printf("helloworld\n");
    printf("hello\nworld"); //其中“\n”计就是转义字符
    return 0;
} */


