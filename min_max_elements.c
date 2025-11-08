#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
  /* TODO: Определить минимум в первой
   * половине массива и максимум во второй
   * */
  int massive[SIZE]; // Массив
  for (int i = 0; i < SIZE; i++) {
    massive[i] = rand() % 100; // Заполняем массив случайными числами
  }

  int min = massive[0]; // Изначальный минимум
  int max = massive[SIZE / 2]; // Изначальный максимум

  // TODO: Вывести все элементы массива
  printf("Elements:");
  for (int i = 0; i < SIZE; i++) {
    printf("%4d", massive[i]);
  }
  printf("\n\n");
  // Проходим по первой половине массива
  for(int i = 1; i < SIZE / 2; i++){
    if(massive[i] < min) // Если текущий элемент меньше минимального значения,
      min = massive[i]; // то присваиваем минимуму текущий элемент
  }
  for (int i = SIZE / 2; i < SIZE; i++) {
    if(massive[i] > max)
      max = massive[i];
  }

  // Выводим минимальный и максимальный элемент на экран
  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  return 0;
}
