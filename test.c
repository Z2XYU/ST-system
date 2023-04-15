//实现学生成绩的管理查询等功能
#include<stdio.h>
#include"ST system.h"
#include<stdlib.h>


int main()
{
    printf("请输入本班总人数\n");
    int numeber_MAX;
    scanf("%d",&numeber_MAX);
    struct student stu[numeber_MAX];
    while(1)
    {
        system("cls");
        menu();
        printf("请选择你想要使用的功能\n");
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
            printf("请输入正确的选项\n");
            system("pause");
            break;
        }
    }
     
     return 0;
}