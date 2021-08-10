#include <iostream>

bool substr(char *ptr_fs, char *ptr_ss) {
  int i = 0, j = 0;
	while ((*(ptr_fs + j) != '\0') && (*(ptr_ss + i) != '\0')) {
    (*(ptr_ss + i) != *(ptr_fs + j)) ? (++j, i = 0) : (++i, ++j);
	}
	return (*(ptr_ss + i) == '\0');
}

int main() {
  char a[] = "Hello world";
  char b[] = "llo w";
  char c[] = "rldd";

  char *ptr_a = a;
  char *ptr_b = b;
  char *ptr_c = c;
  
  std::cout << std::boolalpha; 
  std::cout << substr(a,b) << " " << substr(a,c);
}

/*
Задача 3. 
Что нужно сделать:
Написать функцию, которая принимаем указатель на char, по которому лежит строка. 
Функция должна возвращать true, если вторая строка является подстрокой первой. 

Пример:
char* a = “Hello world”;
char* b = “wor”;
char* c = “banana”;
std::cout << substr(a,b) << “ “ << substr(a,c);
// true false

Чек-лист для проверки задачи
Функция принимает корректные типы данных, тип возвращаемого значения -- bool
Функция не использует библиотек кроме <iostream> и <cstring> или другую для работы со строками
Функция корректно определяет, является ли вторая строка подстрокой первой
*/