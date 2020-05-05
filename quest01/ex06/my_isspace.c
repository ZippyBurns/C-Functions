#include <stdio.h>
#include <stdlib.h>

int my_isspace(char c){
    if(c == 32){
        return 1;
    }
    else{
        return 0;
    }
}
// int main(){
//     printf("%d \n", my_isspace(' '));
//     printf("%d \n", my_isspace('g'));
//     return 0;
// }