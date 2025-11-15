#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Посчитать количество букв 'o' в каждом слове

int main(){
  char string[100]; // Объявляем буфер строки
  printf("Enter your words:\n");
  fgets(string, 100, stdin); // Переносим символы со стандартного потока ввода
  int o_count = 0; // Объявляем счётчик букв 'o'

  printf("Count of 'o':");
  for(int i = 0; i <= strlen(string); i++){ // Объявляем цикл по строке до символа '\0'
    if(string[i] == 'o' || string[i] == 'O') // Проверяем символ строки
      o_count++; // Увеличиваем счётчик
    
    // Если символ равен пробелу или завершению строки,
    // то выводим значение счётчика и сбрасываем его
    // до нуля
    if(string[i] == 0x20 || string[i] == '\0'){
      printf("%2d", o_count);
      o_count = 0;
    }
  }
  printf("\n");
  return 0;
}
