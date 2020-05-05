#include <stdio.h>
#include <stdlib.h>

int my_isalpha(char c){
    if((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')){
        return 1;
    }
    else{
        return 0;
    }
}

// int main(){
//     printf("%d \n", my_isalpha(2));
//     printf("%d \n", my_isalpha('H'));
//     return 0;
// }