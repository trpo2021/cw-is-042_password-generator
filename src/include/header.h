#ifndef HEADER_H
#define HEADER_H

void output_program_header();
int get_length_password();
int check_numeric_password(int p);
int get_amount_of_passwords();
int check_numeric_amount(int a);
bool get_special_chars();
bool check_special_chars(char check_sc);
bool calc_safety();
bool need_file();
void password_generator(int);

int length_password;
int number_of_small_chars;
int number_of_big_chars;
int number_of_numeral;
int number_of_special_chars;

#endif