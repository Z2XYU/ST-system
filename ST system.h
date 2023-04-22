// 声明功能
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
// 创建学生结构体
struct student
{
    char candidate_num[8];
    char name[32];
    char sex[8];
    float Chinese;
    float Math;
    float English;
    float grades_sum;
};
// 创建枚举
enum option
{
    EXIT,
    ADD,
    DEL,
    MODIFY,
    SORT_grades_sum,
    SORT_Chinese,
    SORT_Math,
    SORT_English,
    SHOW,
    SEARCH
};

// 打印菜单功能
void menu(void);

// 声明添加学生信息功能
void Add(struct student *ps, int size);
// 声明查看全班成绩的功能
void show(struct student *ps, int size);
// 声明学生成绩按照语文成绩排序的功能
void sort_chinese(struct student *ps, int size);
// 声明学生成绩按照数学成绩排序
void sort_math(struct student *ps, int size);
// 声明学生成绩按照英语成绩排序
void sort_english(struct student *ps, int size);
// 声明学生成绩按照总成绩排序
void sort_grades_sum(struct student *ps, int size);
// 声明查找学生成绩的功能
void search(struct student *ps, int size);
// 声明修改学生信息的的功能
void modify(struct student *ps, int size);
// 声明删除学生信息的功能
void Del(struct student *ps, int *p);