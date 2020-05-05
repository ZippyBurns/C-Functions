#include <stdio.h>
#include <stdlib.h>

int my_isdigit(char c){
    if(c >= '0' && c <= '9'){
        return 1;
    }
    else{
        return 0;
    }
}


// int main(){
//     printf("%d \n", my_isdigit('4'));
//     printf("%d \n", my_isdigit('a'));
//     return 0;
// }