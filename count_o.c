#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Посчитать количество букв 'o' в каждом слове

int main(){
  char string[100];
  fgets(string, 100, stdin);
  int o_count = 0;

  printf("Count of 'o':");
  for(int i = 0; i <= strlen(string); i++){
    if(string[i] == 'o' || string[i] == 'O')
      o_count++;
    if(string[i] == 0x20 || string[i] == '\0'){
      printf("%2d", o_count);
      o_count = 0;
    }
  }
  printf("\n");
  return 0;
}
