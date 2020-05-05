#include <string.h>
#include <stdio.h>

int	my_strlen(char *str){
    int counter = 0;
    for(int i = 0; str[i]!= '\0'; i++){
        counter++;
    // printf("the size of  %d\n", i);
    }
    return counter;
}



int my_string_index(char *param_1, char *param_2) {
  int param_1_index = 0;
  int size_param_2 = my_strlen(param_2);
  while (param_1[param_1_index] != '\0') {
    int param_2_index = 0;
       if(strncmp(&param_1[param_1_index], &param_2[param_2_index], size_param_2) == 0){
           return param_1_index;
       }   
      param_1_index += 1;
  }
  return -1;
}
// int main(int ac, char **av) { return 0; }