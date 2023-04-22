// ��������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
// ����ѧ���ṹ��
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
// ����ö��
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

// ��ӡ�˵�����
void menu(void);

// �������ѧ����Ϣ����
void Add(struct student *ps, int size);
// �����鿴ȫ��ɼ��Ĺ���
void show(struct student *ps, int size);
// ����ѧ���ɼ��������ĳɼ�����Ĺ���
void sort_chinese(struct student *ps, int size);
// ����ѧ���ɼ�������ѧ�ɼ�����
void sort_math(struct student *ps, int size);
// ����ѧ���ɼ�����Ӣ��ɼ�����
void sort_english(struct student *ps, int size);
// ����ѧ���ɼ������ܳɼ�����
void sort_grades_sum(struct student *ps, int size);
// ��������ѧ���ɼ��Ĺ���
void search(struct student *ps, int size);
// �����޸�ѧ����Ϣ�ĵĹ���
void modify(struct student *ps, int size);
// ����ɾ��ѧ����Ϣ�Ĺ���
void Del(struct student *ps, int *p);