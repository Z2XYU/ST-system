//ʵ��ѧ���ɼ��Ĺ����ѯ�ȹ���
#include<stdio.h>
#include"ST system.h"
#include<stdlib.h>


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
        case EXIT:
            exit(0);
            break;

        default:
            printf("��������ȷ��ѡ��\n");
            system("pause");
            break;
        }
    }
     
     return 0;
}