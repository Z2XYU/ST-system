//ʵ��ѧ���ɼ��Ĺ����ѯ�ȹ���
#include<stdio.h>
#include"ST system.h"
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main()
{
    printf("�����뱾��������\n");
    int numeber_MAX;
    scanf("%d",&numeber_MAX);
    struct student stu[numeber_MAX];
    while(1)
    {
        system("cls");
        menu();
        printf("��ѡ������Ҫʹ�õĹ���\n");
        int input;;
        scanf("%d",&input);
        switch (input)
        {
            case ADD:
                Add(stu,numeber_MAX);
                break;
            case SHOW:
                show(stu,numeber_MAX);
                break;
            case SORT_grades_sum:
                sort_grades_sum(stu,numeber_MAX);
                break;
            case SORT_Chinese:
                sort_chinese(stu,numeber_MAX);
                break;
            case SORT_Math:
                sort_math(stu,numeber_MAX);
                break;
            case SORT_English:
                sort_english(stu,numeber_MAX);
                break;

            case EXIT:
                printf("��ӭ�´�ʹ��\n");
                Sleep(500);
                exit(0);
            default:
                printf("��������ȷ��ѡ��\n");
                system("pause");
                break;
        }
    }
     
     return 0;
}