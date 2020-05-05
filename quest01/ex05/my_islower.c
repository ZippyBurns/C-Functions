#include <stdio.h>
#include <stdlib.h>

int my_islower(char c){
    if(c >= 'a' && c <= 'z'){
        return 1;
    }
    else{
        return 0;
    }
}

// int main(){
//     printf("%d \n", my_islower(2));
//     printf("%d \n", my_islower('g'));
//     return 0;
// }