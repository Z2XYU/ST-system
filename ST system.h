//声明功能
#include<stdio.h>

//创建学生结构体
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
//创建枚举
enum option
{
    EXIT,
    ADD,
    DEL,
    MODIFY,
    SORT_Chinese,
    SORT_Math,
    SORT_English,
    SEARCH,
    SHOW
};

//打印菜单功能
void menu(void);

//实现添加学生信息功能
void Add(struct student *ps,int size);
//查看全班成绩
void show(struct student *ps,int size);