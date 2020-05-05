#include <stdio.h>
#include <stdlib.h>

int my_isupper(char c){
    if(c >= 'A' && c <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}

// int main(){
//     printf("%d \n", my_isupper('g'));
//     printf("%d \n", my_isupper('G'));
//     return 0;
// }