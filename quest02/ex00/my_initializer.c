#include <stdio.h>

void my_initializer(int* param_1){
    *param_1 = 0;
}

// int main(){
//     int n = 42;
//     int *ptr;
//     ptr = &n;
//     printf("The value before calling is: %d\n", *ptr);
//     my_initializer(&n;);
//     printf("The value after calling is: %d\n", *ptr);
//     printf("Address of var = %z\n", ptr); 4382820
//     my_initializer(*ptr);
// }