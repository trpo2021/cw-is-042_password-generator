#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void output_program_header()
{
    cout << "ГЕНЕРАТОР ПАРОЛЕЙ\n" << endl;
    cout << "Для генерации паролей введите следующие данные:" << endl;
}

int check_numeric_password(int num)
{
    int numeric = num;

    if (numeric == 0 || numeric < 0)
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Длина пароля задаётся положительным числом\n";
        return 0;
    }
    else
    {
        cin.ignore(32767, '\n');
        return numeric;
    }
}

int get_length_password()
{
    while (true)
    {
        cout << " 1. Длина пароля —  ";
        int length_password;
        cin >> length_password;       

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Длина пароля задаётся числом\n";
            return 0;
        }
        else if (check_numeric_password(length_password) != 0)
            return length_password;
    }
}

int get_amount_of_passwords()
{
    while (true)
    {
        cout << " 2. Количество генерируемых паролей — ";
        int amount_of_passwords;
        cin >> amount_of_passwords;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Количество генерируемых паролей задаётся числом\n";
        }
        else if (check_numeric_password(amount_of_passwords) != 0)
            return amount_of_passwords;
    }
}

bool check_special_chars(char check_sc)
{
    char letter_sc = check_sc;

    if (letter_sc == 89 || letter_sc == 121)
    {
        cin.ignore(32767, '\n');
        return true;
    }
    else
    {
        cin.ignore(32767, '\n');
        return false;
    }
}

bool get_special_chars()
{
    while (true)
    {
        char use_of_special_chars;
        cout << " 3. Использовать специальные символы (Y/N) — ";
        cin >> use_of_special_chars;

        if (use_of_special_chars != 89 && use_of_special_chars != 78 && use_of_special_chars != 121 && use_of_special_chars != 110)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Определите выбор специальных символов (Y/N)\n";
        }
        else if (check_special_chars(use_of_special_chars))
            return true;
        else
            return false;
    }
}

bool calc_safety()
{
    while (true)
    {
        char use_calc_safety;
        cout << " 4. Вычислить надёжность (Y/N) — ";
        cin >> use_calc_safety;

        if (use_calc_safety != 89 && use_calc_safety != 78 && use_calc_safety != 121 && use_calc_safety != 110)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Определите необходимость вычисления надёжности (Y/N)\n";
        }
        else if (check_special_chars(use_calc_safety))
            return true;
        else
            return false;
    }
}

bool need_file()
{
    while (true)
    {
        char use_need_file;
        cout << " 5. Записать результаты работы в файл (Y/N) — ";
        cin >> use_need_file;

        if (use_need_file != 89 && use_need_file != 78 && use_need_file != 121 && use_need_file != 110)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Определите необходимость записи результата работы в файл (Y/N)\n";
        }
        else if (check_special_chars(use_need_file))
            return true;
        else
            return false;
    }
}