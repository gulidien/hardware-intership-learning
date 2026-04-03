/*
 * 知识点：函数的定义、声明与调用
 * 包含：值传递、递归函数示例
 */
#include <stdio.h>

/* 函数声明 */
int add(int a, int b);
int factorial(int n);
void swap(int *a, int *b);

int main() {
    /* 普通函数调用 */
    int sum = add(3, 5);
    printf("3 + 5 = %d\n", sum);

    /* 递归：计算阶乘 */
    int n = 5;
    printf("%d! = %d\n", n, factorial(n));

    /* 通过指针交换两个变量 */
    int x = 10, y = 20;
    printf("交换前：x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("交换后：x = %d, y = %d\n", x, y);

    return 0;
}

/* 加法函数 */
int add(int a, int b) {
    return a + b;
}

/* 递归计算 n 的阶乘 */
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/* 通过指针交换两个整数 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
