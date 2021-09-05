#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void output_program_header()
{
    cout << "ГЕНЕРАТОР ПАРОЛЕЙ\n" << endl;
    cout << "Для генерации паролей введите следующие данные:" << endl;
}

int get_length_password()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        cout << " 1. Длина пароля —  ";
        int length_password;
        cin >> length_password;

        // Проверка
        if (cin.fail() || length_password == 0 || length_password < 0) // если неудачно
        {
            cin.clear(); // то возвращаем cin в 'обычный' режим работы
            cin.ignore(32767, '\n'); // удаляем до 32767 символов из входного буфера вплоть до появления символа '\n' (который мы также удаляем)
            cout << "Длина пароля задаётся числом\n";
        }
        else
        {
            cin.ignore(32767, '\n'); // удаляем лишние значения
            return length_password;
        }
    }
}

int get_amount_of_passwords()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        cout << " 2. Количество генерируемых паролей — ";
        int amount_of_passwords;
        cin >> amount_of_passwords;

        // Проверка
        if (cin.fail() || amount_of_passwords == 0 || amount_of_passwords < 0) // если неудачно
        {
            cin.clear(); // то возвращаем cin в 'обычный' режим работы
            cin.ignore(32767, '\n'); // удаляем до 32767 символов из входного буфера вплоть до появления символа '\n' (который мы также удаляем)
            cout << "Количество генерируемых паролей задаётся числом\n";
        }
        else
        {
            cin.ignore(32767, '\n'); // удаляем лишние значения
            return amount_of_passwords;
        }
    }
}

bool get_special_chars()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        char use_of_special_chars;
        cout << " 3. Использовать специальные символы (Y/N) — ";
        cin >> use_of_special_chars;

        // Проверка
        if (use_of_special_chars != 89 && use_of_special_chars != 78 && use_of_special_chars != 121 && use_of_special_chars != 110) // если неудачно не равно Y, N, y, n
        {
            cin.clear(); // то возвращаем cin в 'обычный' режим работы
            cin.ignore(32767, '\n'); // удаляем до 32767 символов из входного буфера вплоть до появления символа '\n' (который мы также удаляем)
            cout << "Определите выбор специальных символов (Y/N)\n";
        }
        else
        {
            if (use_of_special_chars == 89 || use_of_special_chars == 121) // Y, y
            {
                cin.ignore(32767, '\n'); // удаляем лишние значения
                return true;
            }
            else if (use_of_special_chars == 78 || use_of_special_chars == 110) // N, n
            {
                cin.ignore(32767, '\n'); // удаляем лишние значения
                return false;
            }
        }
    }
}

bool calc_safety()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        char use_calc_safety;
        cout << " 4. Вычислить надёжность (Y/N) — ";
        cin >> use_calc_safety;

        // Проверка
        if (use_calc_safety != 89 && use_calc_safety != 78 && use_calc_safety != 121 && use_calc_safety != 110) // если неудачно не равно Y, N, y, n
        {
            cin.clear(); // то возвращаем cin в 'обычный' режим работы
            cin.ignore(32767, '\n'); // удаляем до 32767 символов из входного буфера вплоть до появления символа '\n' (который мы также удаляем)
            cout << "Определите необходимость вычисления надёжности (Y/N)\n";
        }
        else
        {
            if (use_calc_safety == 89 || use_calc_safety == 121) // Y, y
            {
                cin.ignore(32767, '\n'); // удаляем лишние значения
                return true;
            }
            else if (use_calc_safety == 78 || use_calc_safety == 110) // N, n
            {
                cin.ignore(32767, '\n'); // удаляем лишние значения
                return false;
            }
        }
    }
}

bool need_file()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        char use_need_file;
        cout << " 5. Записать результаты работы в файл (Y/N) — ";
        cin >> use_need_file;

        // Проверка
        if (use_need_file != 89 && use_need_file != 78 && use_need_file != 121 && use_need_file != 110) // если неудачно не равно Y, N, y, n
        {
            cin.clear(); // то возвращаем cin в 'обычный' режим работы
            cin.ignore(32767, '\n'); // удаляем до 32767 символов из входного буфера вплоть до появления символа '\n' (который мы также удаляем)
            cout << "Определите необходимость записи результата работы в файл (Y/N)\n";
        }
        else
        {
            if (use_need_file == 89 || use_need_file == 121) // Y, y
            {
                cin.ignore(32767, '\n'); // удаляем лишние значения
                return true;
            }
            else if (use_need_file == 78 || use_need_file == 110) // N, n
            {
                cin.ignore(32767, '\n'); // удаляем лишние значения
                return false;
            }
        }
    }
}
