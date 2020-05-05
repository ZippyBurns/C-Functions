#include <stdio.h>


int	my_strlen(char *str){
    int counter = 0;
    for(int i = 0; str[i]!= '\0'; i++){
        counter++;
    // printf("the size of  %d\n", i);
    }
    return counter;
}

// int main(){
//     printf("%d\n", my_strlen("My Test"));
//     printf("%d\n", my_strlen("Second Test"));
//     return 0;
// }