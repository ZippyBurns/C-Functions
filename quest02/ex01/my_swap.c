#include <stdio.h>
#include <stdlib.h>

void my_swap(int *a, int *b){   
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// int main(){
// int n = 42;
// int m = 23;
// my_swap(&n, &m);
// }