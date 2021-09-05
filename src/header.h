#ifndef HEADER_H
#define HEADER_H

void output_program_header();
int get_length_password();
int get_amount_of_passwords();
bool get_special_chars();
bool calc_safety();
bool need_file();
void password_generator(int);

int length_password;
int number_of_small_chars;
int number_of_big_chars;
int number_of_numeral;
int number_of_special_chars;

#endif