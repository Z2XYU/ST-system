// ʵ�ֹ���
#include <stdio.h>
#include "ST system.h"
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

void menu()
{
    printf("        ��ӭʹ��ѧ���ɼ�����ϵͳ    \n");
    printf("1.����ȫ��ѧ����Ϣ      2.ɾ��ѧ����Ϣ\n");
    printf("3.�޸�ѧ���ɼ�          4.�ܳɼ�����  \n");
    printf("5.���ĳɼ�����          6.��ѧ�ɼ�����\n");
    printf("7.Ӣ��ɼ�����          8.�鿴ȫ��ɼ�\n");
    printf("9.����ѧ���ɼ�          0.�˳�\n");
}

// ʵ�����ѧ����Ϣ
void Add(struct student *ps, int size)
{
    printf("����������ѧ���Ŀ��š��������Ա����ĳɼ�����ѧ�ɼ���Ӣ��ɼ�\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%s%s%s%f%f%f", ps[i].candidate_num, ps[i].name, ps[i].sex, (&ps[i].Chinese), &(ps[i].Math), &(ps[i].English));
        ps->grades_sum = ps->Chinese + ps->Math + ps->English;
        ps[i].grades_sum = ps[i].Chinese + ps[i].Math + ps[i].English;
    }
    printf("��ӳɹ�\n��鿴ȫ��ɼ�\n");
    Sleep(1000);
}

// ʵ�ֲ鿴ȫ��ѧ����Ϣ
void show(struct student *ps, int size)
{
    system("cls");
    printf("����    ����    �Ա�    ����    ��ѧ    Ӣ��    �ܷ�\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
    }
    system("pause");
}

// ʵ��ѧ���ɼ������ܳɼ�����
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
    printf("����ɹ�\n��鿴ȫ��ɼ�\n");
    Sleep(1000);
}

// ʵ��ѧ���ɼ��������ĳɼ�����
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
    printf("����ɹ�\n��鿴ȫ��ɼ�\n");
    Sleep(1000);
}

// ʵ��ѧ���ɼ�������ѧ�ɼ�����
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
    printf("����ɹ�\n��鿴ȫ��ɼ�\n");
    Sleep(1000);
}

// ʵ��ѧ���ɼ�����Ӣ��ɼ�����
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
    printf("����ɹ�\n��鿴ȫ��ɼ�\n");
    Sleep(1000);
}

// ʵ�ֲ���ѧ���ɼ��Ĺ���
void search(struct student *ps, int size)
{
    // ͨ�����Ų���
    char Candidate_num[8];
    printf("�����뿼���Ŀ���:");
    scanf("%s", Candidate_num);
    for (int i = 0; i < size; i++)
    {
        if (strcmp(Candidate_num, ps[i].candidate_num) == 0)
        {
            system("cls");
            printf("����    ����    �Ա�    ����    ��ѧ    Ӣ��    �ܷ�\n");
            printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
            system("pause");
            break;
        }
        else if (i == size-1)
        {
            printf("û�������ѧ����Ϣ,�����Ƿ�������ȷȻ���ٴβ���\n");
            Sleep(1000);
        }
    }
}
// �����޸�ѧ����Ϣ�ĵĹ���
void modify(struct student *ps, int size)
{
    // ͨ�����Ų���ѧ����Ϣ
    int i;
    char Candidate_num[8];
    printf("�����뿼���Ŀ���:");
    scanf("%s", Candidate_num);
    for (i = 0; i < size; i++)
    {
        if (strcmp(Candidate_num, ps[i].candidate_num) == 0)
        {
            system("cls");
            printf("����    ����    �Ա�    ����    ��ѧ    Ӣ��    �ܷ�\n");
            printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", ps[i].candidate_num, ps[i].name, ps[i].sex, ps[i].Chinese, ps[i].Math, ps[i].English, ps[i].grades_sum);
            struct student temp = {0};
            printf("�����������޸ĺ�ѧ���Ŀ��š��������Ա����ĳɼ�����ѧ�ɼ���Ӣ��ɼ�\n");
            scanf("%s%s%s%f%f%f", ps[i].candidate_num, ps[i].name, ps[i].sex, (&ps[i].Chinese), &(ps[i].Math), &(ps[i].English));
            ps->grades_sum = ps->Chinese + ps->Math + ps->English;
            ps[i].grades_sum = ps[i].Chinese + ps[i].Math + ps[i].English;
            printf("�޸ĳɹ������²鿴\n");
            Sleep(1000);
            break;
        }
        else if (i == size-1)
        {
            printf("û�������ѧ����Ϣ,�����Ƿ�������ȷȻ���ٴ��޸�\n");
            Sleep(1000);
        }
    }

}