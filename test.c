// 实现学生成绩的管理查询等功能
#include "ST system.h"

int main()
{
    printf("请输入本班总人数\n");
    int numeber_MAX;
    scanf("%d", &numeber_MAX);
    struct student information[numeber_MAX];
    while (1)
    {
        system("cls");
        menu();
        printf("请选择你想要使用的功能\n");
        int input;
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            Add(information, numeber_MAX);
            break;
        case DEL:
            Del(information, &numeber_MAX);
            break;
        case MODIFY:
            modify(information, numeber_MAX);
            break;
        case SHOW:
            show(information, numeber_MAX);
            break;
        case SORT_grades_sum:
            sort_grades_sum(information, numeber_MAX);
            break;
        case SORT_Chinese:
            sort_chinese(information, numeber_MAX);
            break;
        case SORT_Math:
            sort_math(information, numeber_MAX);
            break;
        case SORT_English:
            sort_english(information, numeber_MAX);
            break;
        case SEARCH:
            search(information, numeber_MAX);
            break;
        case EXIT:
            SaveInformation(information, numeber_MAX);
            printf("欢迎下次使用\n");
            Sleep(1000);
            exit(0);
        default:
            printf("请输入正确的选项\n");
            system("pause");
            break;
        }
    }

    return 0;
}