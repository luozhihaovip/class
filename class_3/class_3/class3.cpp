// class3.cpp: �������̨Ӧ�ó������ڵ㡣
//
#include <iostream>

int main()
{
    // Assert(false);

    // fasdfasdfasdfs

    // if (���ʽ bool)
    // ����ת��,��ʽת��
    // ���ʽ,�жϱ��ʽ


    // �ж�if����������ȫ�����(�����̷�֧����������)һ��Ҫдelse

    int xWeekDay;
    std::cin >> xWeekDay;

    //// ��ʽת����bool
    //if (!(xWeekDay >= 1 && xWeekDay <= 7))
    //{
    //    printf("�������\n");
    //    system("pause");
    //    return -1;
    //}

    //// ���(���ʽ����)
    int xNumber = 100;
    int xTempWeekDay = xWeekDay;
    while (xTempWeekDay < xNumber)  // ��
    {
        // ִ������
        printf("1111111\n");
        break;
        continue;
        xTempWeekDay++;
    }

    //while (true)
    //{
    //    printf("1111111\n");
    //    continue;

    //    break;
    //}


    do
    {
        printf("1111111\n");
        break;
        continue;
        xTempWeekDay++;
    } while (false);


    //do
    //{
    //    printf("1111111\n");
    //    break;
    //    continue;
    //    xTempWeekDay++;
    //} while (xTempWeekDay < xNumber);










    printf("-------------\n");

    for (int xNumber = 100; xWeekDay < xNumber; xWeekDay++)
    {
        break;
        printf("1111111\n");
    }

    //// ����, ���
    //else if (xWeekDay == 2) // ��Ѽ
    //{
    //    // ִ������
    //    printf("22222222\n");
    //}
    //else
    //{
    //    if (xWeekDay == 4)
    //    {
    //        printf("4444444\n");
    //    }
    //    else if (xWeekDay == 5)
    //    {
    //        printf("555555\n");
    //    }
    //    else if (xWeekDay == 6)
    //    {
    //        printf("66666666\n");
    //    }
    //    else if (xWeekDay == 7)
    //    {
    //        printf("77777777\n");
    //    }
    //    else
    //    {
    //        printf("SX\n");
    //        // .. 
    //        // ����(Assert)
    //        // ����
    //    }
    //}

    printf("222222222\n");

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (j == 5)
            {
                goto END_FOR;
            }
        }
    }
END_FOR:

    //int;
    //long long;
    //short;
    //char;

    // ����ֵ
    // �ַ���
    // bool
    // 1;
    // 0;
    // ��ʽת��������


    // switch���ԭ��
    switch (xWeekDay)
    {
        case 1: { printf("1\n"); }
        case 2: { printf("2\n"); }break;
        case 3: { printf("3\n"); }
        case 4: { printf("4\n"); }break;
        case 5: { printf("5\n"); }
        case 6: { printf("6\n"); }break;
        case 7: { printf("7\n"); }
        case 8: { /*ASSERT();*/ }break;

        default: { /*ASSERT();*/ }break;
    }

    // 





    system("pause");
    return 0;

}