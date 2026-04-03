/*
 * 知识点：文件操作
 * 包含：写入文本文件、读取文本文件、fopen/fclose/fprintf/fscanf
 */
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "output.txt"

int main() {
    /* --- 写入文件 --- */
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        perror("无法创建文件");
        return 1;
    }

    fprintf(fp, "硬件实习学习记录\n");
    fprintf(fp, "模块：C语言文件操作\n");
    for (int i = 1; i <= 5; i++) {
        fprintf(fp, "第 %d 行数据：%d\n", i, i * i);
    }
    fclose(fp);
    printf("文件写入完成：%s\n", FILENAME);

    /* --- 读取文件 --- */
    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        perror("无法打开文件");
        return 1;
    }

    printf("\n=== 文件内容 ===\n");
    char line[128];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
