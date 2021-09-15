#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int check_numeric_password(int p)
{
    int numeric = p;

    if (numeric == 0)
    {
        cout << "You need a nonzero positive number\n";
        return 0;
    }
    else if (numeric < 0)
    {
        cout << "You need a positive number\n";
        return 0;
    }
    else
    {
        cout << numeric << " characters\n";
        return numeric;
    }
}

int get_length_password()
{
    while (true)
    {
        cout << L" 1. Длина пароля —  ";
        int length_password;
        cin >> length_password;       

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << L"Must be numeric\n";
        }
        else if (check_numeric_password(length_password) != 0)
            return length_password;
    }
}

int check_numeric_amount(int a)
{
    int num = a;

    if (num == 0)
    {
        cout << "You need a nonzero positive number\n";
        return 0;
    }
    else if (num < 0)
    {
        cout << "You need a positive number\n";
        return 0;
    }
    else
    {
        cout << num << " characters\n";
        return num;
    }
}

int get_amount_of_passwords()
{
    while (true)
    {
        cout << L" 2. Количество генерируемых паролей — ";
        int amount_of_passwords;
        cin >> amount_of_passwords;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << L"Количество генерируемых паролей задаётся числом\n";
        }
        else if (check_numeric_amount(amount_of_passwords) != 0)
            return amount_of_passwords;
    }
}

bool check_special_chars(char check_sc)
{
    char letter_sc = check_sc;

    if (letter_sc == 89)
    {
        cout << letter_sc << " - Should be Y\n";
        return true;
    }
    else if (letter_sc == 121)
    {
        cout << letter_sc << " - Should be y\n";
        return true;
    }
    else if (letter_sc == 78)
    {
        cout << letter_sc << " - Should be N\n";
        return false;
    }
    else
    {
        cout << letter_sc << " - Should be n\n";
        return false;
    }
}

bool get_special_chars()
{
    while (true)
    {
        char use_of_special_chars;
        cout << L" 3. Использовать специальные символы (Y/N) — ";
        cin >> use_of_special_chars;

        if (use_of_special_chars != 89 && use_of_special_chars != 78 && use_of_special_chars != 121 && use_of_special_chars != 110)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << L"Определите выбор специальных символов (Y/N)\n";
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
        cout << L" 4. Вычислить надёжность (Y/N) — ";
        cin >> use_calc_safety;

        if (use_calc_safety != 89 && use_calc_safety != 78 && use_calc_safety != 121 && use_calc_safety != 110)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << L"Определите необходимость вычисления надёжности (Y/N)\n";
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
        cout << L" 5. Записать результаты работы в файл (Y/N) — ";
        cin >> use_need_file;

        if (use_need_file != 89 && use_need_file != 78 && use_need_file != 121 && use_need_file != 110)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << L"Определите необходимость записи результата работы в файл (Y/N)\n";
        }
        else if (check_special_chars(use_need_file))
            return true;
        else
            return false;
    }
}