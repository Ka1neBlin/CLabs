#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 6

// TODO: Подсчитать среднее арифметическое каждого столбца
// двумерной матрицы размером NxM

int main(){
  int matrix_a[N][M]; // Матрица A

  printf("Выводим матрицу:\n");
  for(int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      matrix_a[i][j] = rand() % 100; // Заполняем матрицу случайными числами
      printf("%4d", matrix_a[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  int averages[M]; // Массив средних арифметических каждого столбца
  for(int j = 0; j < M; j++){
    averages[j] = matrix_a[0][j];
    for(int i = 1; i < N; i++){
      averages[j] += matrix_a[i][j]; // Пока суммируем значения столбцов
    }
  }

  printf("Выводим среднее арифметическое каждого столбца:\n");
  for(int i = 0; i < M; i++){
    float average = (float)averages[i] / N;
    printf("%4.3f ", average);
  }

  return 0;
}
