#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <string>
#include <fstream>
#include "include/header.h"
#include <Windows.h>

using namespace std;

char *password;
bool special_chars;

int main()
{
    bool use_calc_safety;
    bool use_file;
    string filename;

    srand((unsigned)time(NULL));

    setlocale(LC_ALL, "");   
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    output_program_header();   
    length_password = get_length_password();
    int amount_of_passwords = get_amount_of_passwords();

    if (get_special_chars())
        special_chars = true;
    else
        special_chars = false;

    if (calc_safety())
        use_calc_safety = true;
    else
        use_calc_safety = false;

    if (need_file())
    {
        use_file = true;
        cout << " Введите имя файла для записи результата работы — ";
        getline(cin, filename);
        if (filename.empty())
            filename = "result.txt";
        else
            filename = filename + ".txt";
    }
    else
        use_file = false;

    cout << "Началась генерация паролей.\n" << endl;
    cout << "Результат работы:" << endl;

    if (use_file)
    {
        ofstream outFile(filename);
        outFile << " Результат работы Password Generator:\n" << endl;
        outFile << " 1. Длина пароля — " << length_password << endl;
        outFile << " 2. Количество сгенерированных паролей — " << amount_of_passwords << endl;
        if (special_chars)
            outFile << " 3. Использование специальных символов — Да" << endl;
        else
            outFile << " 3. Использование специальных символов — Нет" << endl;
        if (use_calc_safety)
            outFile << " 4. Вычисление надёжности — Да\n" << endl;
        else
            outFile << " 4. Вычисление надёжности — Нет\n" << endl;

        for (int k = 0; k < amount_of_passwords; k++) {
            for (int i = 0; i < length_password; ++i) {
                password_generator(length_password);
                cout << password[i];
                outFile << password[i];
            }
            cout << endl;
            outFile << endl;
        }

        if (use_calc_safety)
        {
            if (special_chars)
                outFile << "\nНадёжность (бит): " << length_password * log2(77) << endl;
            else
                outFile << "\nНадёжность (бит): " << length_password * log2(62) << endl;
        }

        outFile << "\n Работа программы успешно завершена." << endl;
        outFile.close();
    }
    else
    {
        for (int k = 0; k < amount_of_passwords; k++) {
            for (int i = 0; i < length_password; ++i) {
                password_generator(length_password);
                cout << password[i];
            }
            cout << endl;
        }
    }

    if (use_calc_safety)
    {
        if (special_chars)
        {
            cout << "\nНадёжность (бит): " << length_password * log2(77) << endl;
            cout << "Работа программы успешно завершена.\n" << endl;
        }
        else
        {
            cout << "\nНадёжность (бит): " << length_password * log2(62) << endl;
            cout << "Работа программы успешно завершена.\n" << endl;
        }
    }        
    else
        cout << "Работа программы успешно завершена.\n" << endl;

    system("pause");
    return 0;
}

void password_generator(int length_password)
{
    if (!special_chars)
    {
        number_of_small_chars = rand() % length_password;
        int balance_rand = length_password - number_of_small_chars;
        number_of_big_chars = rand() % balance_rand;
        number_of_numeral = length_password - number_of_small_chars - number_of_big_chars;
    }
    else
    {
        number_of_small_chars = rand() % length_password;
        int balance_one = length_password - number_of_small_chars;
        number_of_big_chars = rand() % balance_one;
        int balance_two = length_password - number_of_small_chars - number_of_big_chars;
        number_of_numeral = rand() % balance_two;
        number_of_special_chars = length_password - number_of_small_chars - number_of_big_chars - number_of_numeral;

        assert(number_of_special_chars + number_of_numeral + number_of_big_chars <= length_password);
    }

    password = new char[length_password];

    if (!special_chars)
    {
        for (int i = 0; i < number_of_numeral; ++i) {
            password[i] = char(rand() % 10 + 48);
        }

        for (int i = number_of_numeral; i < number_of_numeral + number_of_big_chars; ++i) {
            password[i] = char(rand() % 26 + 65);
        }

        for (int i = number_of_numeral + number_of_big_chars; i < length_password; ++i) {
            password[i] = char(rand() % 26 + 97);
        }
    }
    else
    {
        for (int i = 0; i < number_of_special_chars; ++i) {
            password[i] = char(rand() % 15 + 33);
        }

        for (int i = number_of_special_chars; i < number_of_special_chars + number_of_numeral; ++i) {
            password[i] = char(rand() % 10 + 48);
        }

        for (int i = number_of_special_chars + number_of_numeral; i < number_of_special_chars + number_of_numeral + number_of_big_chars; ++i) {
            password[i] = char(rand() % 26 + 65);
        }

        for (int i = number_of_special_chars + number_of_numeral + number_of_big_chars; i < length_password; ++i) {
            password[i] = char(rand() % 26 + 97);
        }
    }

    random_shuffle(password, password + length_password);
}