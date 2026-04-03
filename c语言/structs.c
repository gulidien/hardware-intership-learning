/*
 * 知识点：结构体
 * 包含：结构体定义、初始化、成员访问、结构体数组、结构体指针
 */
#include <stdio.h>
#include <string.h>

/* 定义学生结构体 */
typedef struct {
    int id;
    char name[50];
    float score;
} Student;

/* 打印学生信息 */
void printStudent(const Student *s) {
    printf("学号：%d  姓名：%s  成绩：%.1f\n", s->id, s->name, s->score);
}

/* 找出最高分学生 */
Student *findTopStudent(Student arr[], int n) {
    Student *top = &arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i].score > top->score) {
            top = &arr[i];
        }
    }
    return top;
}

int main() {
    /* 初始化结构体数组 */
    Student students[3] = {
        {1001, "张三", 88.5},
        {1002, "李四", 95.0},
        {1003, "王五", 76.5}
    };

    printf("=== 所有学生信息 ===\n");
    for (int i = 0; i < 3; i++) {
        printStudent(&students[i]);
    }

    /* 找出最高分 */
    Student *top = findTopStudent(students, 3);
    printf("\n最高分学生：\n");
    printStudent(top);

    return 0;
}
