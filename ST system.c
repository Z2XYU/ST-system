//实现功能
#include<stdio.h>
#include"ST system.h"
#include<stdlib.h>

void menu(void)
{
    printf("     欢迎使用学生成绩管理系统    \n");
    printf("1.添加学生信息      2.删除学生信息\n");
    printf("3.修改学生信息      4.语文成绩排序\n");
    printf("5.数学成绩排序      6.英语成绩排序\n");
    printf("7.查找学生成绩      8.查看全班成绩\n");
    printf("0.退出\n");
}


void Add(struct student *ps,int size)
{
    printf("请依次输入学生的考号、姓名、性别、语文成绩、数学成绩、英语成绩\n");
    for(int i=0;i<size;i++)
    {   
        scanf("%s%s%s%f%f%f",ps[i].candidate_num,ps[i].name,ps[i].sex,(&ps[i].Chinese),&(ps[i].Math),&(ps[i].English));
        ps->grades_sum=ps->Chinese+ps->Math+ps->English;
        ps[i].grades_sum=ps[i].Chinese+ps[i].Math+ps[i].English;
    }
    printf("添加成功\n");
    system("pause");
}

void show(struct student *ps,int size)
{
    system("cls");
    printf("考号    姓名    性别    语文    数学    英语    总分\n");
    for(int i=0;i<size;i++)
    {
        printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n",ps[i].candidate_num,ps[i].name,ps[i].sex,ps[i].Chinese,ps[i].Math,ps[i].English,ps[i].grades_sum);
    }
    system("pause");
}