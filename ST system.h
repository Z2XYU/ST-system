//��������
#include<stdio.h>

//����ѧ���ṹ��
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
//����ö��
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

//��ӡ�˵�����
void menu(void);

//ʵ�����ѧ����Ϣ����
void Add(struct student *ps,int size);
//�鿴ȫ��ɼ�
void show(struct student *ps,int size);