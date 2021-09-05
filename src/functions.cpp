#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void output_program_header()
{
    cout << "��������� �������\n" << endl;
    cout << "��� ��������� ������� ������� ��������� ������:" << endl;
}

int get_length_password()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        cout << " 1. ����� ������ �  ";
        int length_password;
        cin >> length_password;

        // ��������
        if (cin.fail() || length_password == 0 || length_password < 0) // ���� ��������
        {
            cin.clear(); // �� ���������� cin � '�������' ����� ������
            cin.ignore(32767, '\n'); // ������� �� 32767 �������� �� �������� ������ ������ �� ��������� ������� '\n' (������� �� ����� �������)
            cout << "����� ������ ������� ������\n";
        }
        else
        {
            cin.ignore(32767, '\n'); // ������� ������ ��������
            return length_password;
        }
    }
}

int get_amount_of_passwords()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        cout << " 2. ���������� ������������ ������� � ";
        int amount_of_passwords;
        cin >> amount_of_passwords;

        // ��������
        if (cin.fail() || amount_of_passwords == 0 || amount_of_passwords < 0) // ���� ��������
        {
            cin.clear(); // �� ���������� cin � '�������' ����� ������
            cin.ignore(32767, '\n'); // ������� �� 32767 �������� �� �������� ������ ������ �� ��������� ������� '\n' (������� �� ����� �������)
            cout << "���������� ������������ ������� ������� ������\n";
        }
        else
        {
            cin.ignore(32767, '\n'); // ������� ������ ��������
            return amount_of_passwords;
        }
    }
}

bool get_special_chars()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        char use_of_special_chars;
        cout << " 3. ������������ ����������� ������� (Y/N) � ";
        cin >> use_of_special_chars;

        // ��������
        if (use_of_special_chars != 89 && use_of_special_chars != 78 && use_of_special_chars != 121 && use_of_special_chars != 110) // ���� �������� �� ����� Y, N, y, n
        {
            cin.clear(); // �� ���������� cin � '�������' ����� ������
            cin.ignore(32767, '\n'); // ������� �� 32767 �������� �� �������� ������ ������ �� ��������� ������� '\n' (������� �� ����� �������)
            cout << "���������� ����� ����������� �������� (Y/N)\n";
        }
        else
        {
            if (use_of_special_chars == 89 || use_of_special_chars == 121) // Y, y
            {
                cin.ignore(32767, '\n'); // ������� ������ ��������
                return true;
            }
            else if (use_of_special_chars == 78 || use_of_special_chars == 110) // N, n
            {
                cin.ignore(32767, '\n'); // ������� ������ ��������
                return false;
            }
        }
    }
}

bool calc_safety()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        char use_calc_safety;
        cout << " 4. ��������� ��������� (Y/N) � ";
        cin >> use_calc_safety;

        // ��������
        if (use_calc_safety != 89 && use_calc_safety != 78 && use_calc_safety != 121 && use_calc_safety != 110) // ���� �������� �� ����� Y, N, y, n
        {
            cin.clear(); // �� ���������� cin � '�������' ����� ������
            cin.ignore(32767, '\n'); // ������� �� 32767 �������� �� �������� ������ ������ �� ��������� ������� '\n' (������� �� ����� �������)
            cout << "���������� ������������� ���������� ��������� (Y/N)\n";
        }
        else
        {
            if (use_calc_safety == 89 || use_calc_safety == 121) // Y, y
            {
                cin.ignore(32767, '\n'); // ������� ������ ��������
                return true;
            }
            else if (use_calc_safety == 78 || use_calc_safety == 110) // N, n
            {
                cin.ignore(32767, '\n'); // ������� ������ ��������
                return false;
            }
        }
    }
}

bool need_file()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        char use_need_file;
        cout << " 5. �������� ���������� ������ � ���� (Y/N) � ";
        cin >> use_need_file;

        // ��������
        if (use_need_file != 89 && use_need_file != 78 && use_need_file != 121 && use_need_file != 110) // ���� �������� �� ����� Y, N, y, n
        {
            cin.clear(); // �� ���������� cin � '�������' ����� ������
            cin.ignore(32767, '\n'); // ������� �� 32767 �������� �� �������� ������ ������ �� ��������� ������� '\n' (������� �� ����� �������)
            cout << "���������� ������������� ������ ���������� ������ � ���� (Y/N)\n";
        }
        else
        {
            if (use_need_file == 89 || use_need_file == 121) // Y, y
            {
                cin.ignore(32767, '\n'); // ������� ������ ��������
                return true;
            }
            else if (use_need_file == 78 || use_need_file == 110) // N, n
            {
                cin.ignore(32767, '\n'); // ������� ������ ��������
                return false;
            }
        }
    }
}