#include <stdio.h>
#include <stdlib.h>

int my_abs(int nbr){
    if(nbr < 0){
        nbr = nbr * -1;
    }
    return nbr;
    }


// int main(){
//     printf("%d \n", my_abs(-3));
//     printf("%d \n", my_abs(4));
// }