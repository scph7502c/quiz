#include "questions.h"
#include <stdbool.h>
#include <stdio.h>

int main() {

  int total_points = 0;
  int number_of_questions = geography_size;
  
  for (int i = 0; i < number_of_questions; i++){
    printf("%s\n", geography[i].question);
  }


  printf("Current number of geography questions: %d\n", number_of_questions);

  return 0;
}
