/*
 * 知识点：指针基础
 * 包含：指针声明、解引用、指针运算、数组与指针
 */
#include <stdio.h>

int main() {
    /* 基本指针操作 */
    int a = 42;
    int *p = &a;          /* p 存储 a 的地址 */
    printf("a 的值：%d\n", a);
    printf("a 的地址：%p\n", (void *)p);
    printf("通过指针访问 a：%d\n", *p);

    /* 通过指针修改变量 */
    *p = 100;
    printf("修改后 a 的值：%d\n", a);

    /* 数组与指针 */
    int arr[] = {10, 20, 30, 40, 50};
    int *q = arr;         /* 数组名本身就是首元素地址 */
    printf("\n数组元素（通过指针遍历）：\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(q + i));
    }

    /* 指针与字符串 */
    const char *str = "Hello, Pointer!";
    printf("\n字符串：%s\n", str);
    printf("第一个字符：%c\n", *str);

    return 0;
}
