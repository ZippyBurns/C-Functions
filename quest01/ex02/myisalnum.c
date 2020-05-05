#include <stdio.h>
#include <stdlib.h>

int my_isalnum(char c){
    if((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= 0 && c <= 9 || c >= '0' && c <= '9')){
        return 1;
    }
    else{
        return 0;
    }
}


// int main(){
//     printf("%d \n", my_isalnum(2));
//     printf("%d \n", my_isalnum('H'));
//     printf("%d \n", my_isalnum('a'));
//     printf("%d \n", my_isalnum('4'));
    
//     return 0;
// }