//ʵ�ֹ���
#include<stdio.h>
#include"ST system.h"
#include<stdlib.h>

void menu(void)
{
    printf("     ��ӭʹ��ѧ���ɼ�����ϵͳ    \n");
    printf("1.���ѧ����Ϣ      2.ɾ��ѧ����Ϣ\n");
    printf("3.�޸�ѧ����Ϣ      4.���ĳɼ�����\n");
    printf("5.��ѧ�ɼ�����      6.Ӣ��ɼ�����\n");
    printf("7.����ѧ���ɼ�      8.�鿴ȫ��ɼ�\n");
    printf("0.�˳�\n");
}


void Add(struct student *ps,int size)
{
    printf("����������ѧ���Ŀ��š��������Ա����ĳɼ�����ѧ�ɼ���Ӣ��ɼ�\n");
    for(int i=0;i<size;i++)
    {   
        scanf("%s%s%s%f%f%f",ps[i].candidate_num,ps[i].name,ps[i].sex,(&ps[i].Chinese),&(ps[i].Math),&(ps[i].English));
        ps->grades_sum=ps->Chinese+ps->Math+ps->English;
        ps[i].grades_sum=ps[i].Chinese+ps[i].Math+ps[i].English;
    }
    printf("��ӳɹ�\n");
    system("pause");
}

void show(struct student *ps,int size)
{
    system("cls");
    printf("����    ����    �Ա�    ����    ��ѧ    Ӣ��    �ܷ�\n");
    for(int i=0;i<size;i++)
    {
        printf("%s\t%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n",ps[i].candidate_num,ps[i].name,ps[i].sex,ps[i].Chinese,ps[i].Math,ps[i].English,ps[i].grades_sum);
    }
    system("pause");
}