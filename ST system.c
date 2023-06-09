// 实现功能
#include "ST system.h"

void menu()
{
    printf("        欢迎使用学生成绩管理系统    \n");
    printf("1.输入全班学生信息          2.删除学生信息\n");
    printf("3.修改学生成绩              4.总成绩排序 \n");
    printf("5.语文成绩排序              6.数学成绩排序\n");
    printf("7.英语成绩排序              8.查看全班成绩\n");
    printf("9.查找学生成绩              0.退出\n");
}

// 实现添加学生信息
void Add(struct student *ps, int size)
{
    printf("请依次输入学生的考号、姓名、性别、语文成绩、数学成绩、英语成绩\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%s%s%s%f%f%f", ps[i].candidate_num, ps[i].name, ps[i].sex, (&ps[i].Chinese), &(ps[i].Math), &(ps[i].English));
        ps->grades_sum = ps->Chinese + ps->Math + ps->English;
        ps[i].grades_sum = ps[i].Chinese + ps[i].Math + ps[i].English;
    }
    printf("添加成功\n请查看全班成绩\n");
    Sleep(1000);
}

// 实现查看全班学生信息
void show(struct student *ps, int size)
{
    system("cls");
    printf("考号    姓名    性别    语文    数学    英语    总分\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
    }
    system("pause");
}

// 实现学生成绩按照总成绩排序
void sort_grades_sum(struct student *ps, int size)
{
    for (int i = 0; i < size; i++)
    {
        struct student temp = {0};
        if (ps[i].grades_sum < ps[i + 1].grades_sum)
        {
            temp = ps[i];
            ps[i] = ps[i + 1];
            ps[i + 1] = temp;
        }
    }
    printf("排序成功\n请查看全班成绩\n");
    Sleep(1000);
}

// 实现学生成绩按照语文成绩排序
void sort_chinese(struct student *ps, int size)
{
    for (int i = 0; i < size; i++)
    {
        struct student temp = {0};
        if (ps[i].Chinese < ps[i + 1].Chinese)
        {
            temp = ps[i];
            ps[i] = ps[i + 1];
            ps[i + 1] = temp;
        }
    }
    printf("排序成功\n请查看全班成绩\n");
    Sleep(1000);
}

// 实现学生成绩按照数学成绩排序
void sort_math(struct student *ps, int size)
{
    for (int i = 0; i < size; i++)
    {
        struct student temp = {0};
        if (ps[i].Math < ps[i + 1].Math)
        {
            temp = ps[i];
            ps[i] = ps[i + 1];
            ps[i + 1] = temp;
        }
    }
    printf("排序成功\n请查看全班成绩\n");
    Sleep(1000);
}

// 实现学生成绩按照英语成绩排序
void sort_english(struct student *ps, int size)
{
    for (int i = 0; i < size; i++)
    {
        struct student temp = {0};
        if (ps[i].English < ps[i + 1].English)
        {
            temp = ps[i];
            ps[i] = ps[i + 1];
            ps[i + 1] = temp;
        }
    }
    printf("排序成功\n请查看全班成绩\n");
    Sleep(1000);
}

// 实现查找学生成绩的功能
void search(struct student *ps, int size)
{
    // 通过考号查找
    char Candidate_num[8];
    printf("请输入考生的考号:");
    scanf("%s", Candidate_num);
    for (int i = 0; i < size; i++)
    {
        if (strcmp(Candidate_num, ps[i].candidate_num) == 0)
        {
            system("cls");
            printf("考号    姓名    性别    语文    数学    英语    总分\n");
            printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
            system("pause");
            break;
        }
        else if (i == size - 1)
        {
            printf("没有输入该学生信息,请检查是否输入正确然后再次查找\n");
            Sleep(1000);
        }
    }
}
// 声明修改学生信息的的功能
void modify(struct student *ps, int size)
{
    // 通过考号查找学生信息

    char Candidate_num[8];
    printf("请输入考生的考号:");
    scanf("%s", Candidate_num);
    for (int i = 0; i < size; i++)
    {
        if (strcmp(Candidate_num, ps[i].candidate_num) == 0)
        {
            system("cls");
            printf("考号    姓名    性别    语文    数学    英语    总分\n");
            printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
            printf("请依次输入修改后学生的考号、姓名、性别、语文成绩、数学成绩、英语成绩\n");
            scanf("%s%s%s%f%f%f", ps[i].candidate_num, ps[i].name, ps[i].sex, (&ps[i].Chinese), &(ps[i].Math), &(ps[i].English));
            ps->grades_sum = ps->Chinese + ps->Math + ps->English;
            ps[i].grades_sum = ps[i].Chinese + ps[i].Math + ps[i].English;
            printf("修改成功请重新查看\n");
            Sleep(1000);
            break;
        }
        else if (i == size - 1)
        {
            printf("没有输入该学生信息,请检查是否输入正确然后再次修改\n");
            Sleep(1000);
        }
    }
}

// 实现删除学生信息的功能
void Del(struct student *ps, int *p)
{
    char Candidate_num[8];
    printf("请输入考生的考号:");
    scanf("%s", Candidate_num);
    for (int i = 0; i < *p; i++)
    {
        if (strcmp(Candidate_num, ps[i].candidate_num) == 0)
        {
            system("cls");
            printf("考号    姓名    性别    语文    数学    英语    总分\n");
            printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
            printf("请确认是否删除\n请输入Y/N:");
            char choose;
            // 清空缓冲区
            setbuf(stdin, NULL);
            scanf("%c", &choose);
            if (choose == 'Y' || choose == 'y')
            {
                *p = *p - 1;
                strcpy(ps[i].candidate_num, ps[i + 1].candidate_num);
                strcpy(ps[i].name, ps[i + 1].name);
                strcpy(ps[i].sex, ps[i + 1].sex);
                ps[i].Chinese = ps[i + 1].Chinese;
                ps[i].Math = ps[i + 1].Math;
                ps[i].English = ps[i + 1].English;
                ps[i].grades_sum = ps[i + 1].grades_sum;
                printf("删除成功\n请查看全班成绩");
            }
            else if (choose == 'N' || choose == 'n')
                break;
        }
        else if (i == *p - 1)
        {
            printf("没有输入该学生信息,请检查是否输入正确然后再次修改\n");
            Sleep(1000);
        }
    }
}

void SaveInformation(student *ps, int size)
{
    setbuf(stdin, NULL);
    char choose;
    printf("是否保存此次修改\n请输入y或n\n");
    scanf("%c", &choose);
    if (choose == 'Y' || choose == 'y')
    {
        FILE *pfWrite = fopen("ST_system.txt", "w");
        if (pfWrite == NULL)
        {
            perror("error opening file");
            return;
        }
        fprintf(pfWrite, "考号\t姓名\t性别\t语文\t数学\t英语\t总分\n");
        for (int i = 0; i < size; i++)
        {
            fprintf(pfWrite, "%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
        }
        printf("保存成功\n");
        Sleep(1000);
        fclose(pfWrite);
        pfWrite = NULL;
    }
    else
    {
        printf("此次修改未保存\n");
        Sleep(1000);
    }
}