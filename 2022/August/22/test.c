#include<stdio.h>

// 局部变量的作用域
/* int main()
{
    int a = 10;
    {
        int b = 20;
        printf("1:%d\n",a);
    }
        printf("2:%d\n",a);
    return 0;
} */


// 全局变量的作用域
/* int a = 10;
int main()
{
    printf("%d\n",a);
    {
    printf("%d\n",a);
    }
    return 0;
} */


// 生命周期
/* int a = 10;             //全局变量的生命周期是整个工程
int main()
{
    int b = 20;         //局部变量b的生命周期
    {
        int c = 30;     //局部变量c的生命周期
    }
    return 0;
} */


// 常量
/* int main()
{
    // 1.字面常量
    100;
    3.14;
    "abc";
    "Q"; 

    //2.const修饰的常变量
    const int a = 10;
    printf("%d\n",a);
    a = a+2;
    printf("%d\n",a);
    return 0;
} */


// #define 定义的标识符常量
/* #define MAX 100
#define MIN 1.23
int main()
{
    int a = MAX;
    float b = MIN;
    //char c = NAME;
    printf("%d\n",a); 
    printf("%.2f\n",b);
    return 0;
} */


// 枚举常量 
enum Sex         //性别
{
    // 枚举这种类型的可能取值 - 就是枚举常量
    MALE,        //男
    FEMALE,      //女
    SECRET       //保密
};

int main()
{
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);    
    return 0;
}