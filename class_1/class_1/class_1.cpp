#include <iostream>
#include <windows.h>

//using namespace std;
//using namespace zq;

int main()
{
    std::cout << "�ƺ�,ռ��,����" << "����, ־��" << std::endl;
    // memory
    // 32bit    4GB
    // 64bit    4GB*4GB = 16000PB

    // �ڴ��ַ���
    // 0x0000000000000000; // 0
    // 0x0000000000000001; // 1
    // 0x0000000000000010; // 16

    // ����()
    // BYTE     (�ֽ�)     8bit
    // WORD     (��)      16bit
    // DWORD    (˫��)    32bit
    // QWORD    (����)    64bit

    //// �ڴ�����С��λBYTE
    //bool        true  false;            // ��С(sizeof(bool))     1 BYTE
    //char        0x08 0x0D '\t' ASCII    // ��С(sizeof(char))     1 BYTE 0-0x7F -127 - 127
    //short       0xFFFF                  // ��С(sizeof(short))    2 BYTE 0-0x7FFF -32767 - 32767
    //int         0xFFFFFFFF              // ��С(sizeof(int))      4 BYTE 0-0x7FFFFFFF -21E - 21E
    //long long   0xFFFFFFFFFFFFFFFF      // ��С(sizeof(long long))8 BYTE 0-????????????
    //    
    //unsigned char        0x08 0x0D '\t' ASCII    // ��С(sizeof(char))     1 BYTE 0-0x7F 0 - 255
    //unsigned short       0xFFFF                  // ��С(sizeof(short))    2 BYTE 0-0x7FFF 0 - 65535
    //unsigned int         0xFFFFFFFF              // ��С(sizeof(int))      4 BYTE 0-0x7FFFFFFF 0 - 42E
    //unsigned long long   0xFFFFFFFFFFFFFFFF      // ��С(sizeof(long long))8 BYTE 0-????????????

    // std C/C++ ��׼��,���ֿռ�


    //float(4�ֽ�) ��ѧ������
    //double(8�ֽ�)��ѧ������
    //char xData1;
    //char xData2;

    int xNumber1;
    int xNumber2;

    std::cin >> xNumber1;
    std::cin >> xNumber2;

    int xNumber3 = xNumber1 + xNumber2;

    std::cout << xNumber1 << "+" << xNumber2 << "=" << xNumber3 << std::endl;


    system("Pause");
    return 0;
}


// C���� (�������)
// C++ oo ˼��(�������)
// ͷ�ļ�(.h)
// Դ�ļ�(.cpp)

// �༭           ����
// Ԥ����(Ԥ����)  ����#��ͷ��ָ��(Ԥ����)
// ����           ����
// ����           
// ���