#include <iostream>
#include <string>

using namespace std;

// �ϸ���ַ���ת�����ֵ��Զ��庯��
bool stoi(char* xSrc, int& xNumber)
{
    int xTempNumber = atoi(xSrc);

    char szBuff[100];

    if (strcmp(xSrc, itoa(xTempNumber, szBuff, 10)) == 0)
    {
        xNumber = xTempNumber;
        return true;
    }
    return false;
}

int main(int agrc, char* argv[])
{
    //printf("%s\n", argv[0]);
    // Unicode
    //short; wchar_t


    // ��ȡ�ַ�������
    int xLen = strlen("123456");
    printf("%d", xLen);

    if (strcmp("z23", "z23") == 0)
    {
        printf("=====");
    }
    else
    {
        printf("!!!!=====");
    }

    char szBufff[100];
    strcpy(szBufff, "ABCDEF");


    int i = 0;
    while (szBufff[i])
    {
        szBufff[i] = tolower(szBufff[i]);
        i++;
    }
    printf(szBufff);

    i = 0;
    while (szBufff[i])
    {
        szBufff[i] = toupper(szBufff[i]);
        i++;
    }
    printf(szBufff);

    strcat(szBufff, "123456");
    printf(szBufff);


    //sprintf(szBufff, "0x%x,%04d%c%s%u");

    char a = 'a';
    char a0[] = "a";
    char a1[] = "ab";
    char a2[] = "abc";
    char a3[] = "abcd";

    if ('\0' == 0)
    {
        printf("=====");
    }
    else
    {
        printf("!!!!=====");
    }


    char szBuff[100];

    //char* aaa = "a";

    // 3���Զ������+����ִ��·��

    if (agrc != 3 + 1 && agrc != 1 + 1)
    {
        printf("������������");
        return -1;
    }

    int xNumberA;
    int xNumberB;
    char xOperator;
    int xResult = -1;
    if (agrc == 3 + 1)
    {
        if (!stoi(argv[1], xNumberA))
        {
            printf("����1[%s]��������\n", argv[1]);
            return -1;
        }

        if (!stoi(argv[3], xNumberB))
        {
            printf("����2[%s]��������\n", argv[3]);
            return -1;
        }


        if (strlen(argv[2]) != 1)
        {
            printf("������������[%s]\n", argv[2]);
        }
        xOperator = argv[2][0];
    }
    else if (agrc == 1 + 1)
    {
        sscanf(argv[1], "%d%c%d", &xNumberA, &xOperator, &xNumberB);

        char szBuff[100];
        sprintf(szBuff, "%d%c%d", xNumberA, xOperator, xNumberB);
        if (strcmp(argv[1], szBuff) != 0)
        {
            printf("�޷�ʶ�������[%s]\n", argv[1]);
            return -1;
        }
    }
    switch (xOperator)
    {
        case '+': { xResult = xNumberA + xNumberB; }break;
        case '-': { xResult = xNumberA - xNumberB; }break;
        case '*': { xResult = xNumberA * xNumberB; }break;
        case '/': { xResult = xNumberA / xNumberB; }break;
        default: {
            printf("������Ƿ�[%c]\n", xOperator);
            return -1;
        }break;
    }

    //printf("%d%c%d=%d\n", xNumberA, xOperator, xNumberB, xResult);

    printf("%d", xResult);

    //if (agrc != 3 + 1)
    //{
    //    printf("������������");
    //    return -1;
    //}


    //if (agrc != 3 + 1)
    //{
    //    printf("������������");
    //    return -1;
    //}









    //for (int i = 1; i < agrc; i++)
    //{
    //    printf("%s\n", argv[i]);
    //}

    //for (int i = 0; i < agrc - 1; i++)
    //{
    //    printf("%s\n", argv[i + 1]);
    //}

    //printf("%s\n", argv[0]);

    //system("pause");
    return 0;
}
