#include <stdio.h>
#include <stdlib.h>

int my_is_negative(int n){
    if(n >= 0){
        return 1;
    } else{
        return 0;
    }
}

// int main(){
//     printf("%d \n", my_is_negative(3));
//     printf("%d \n", my_is_negative(-3));
// }