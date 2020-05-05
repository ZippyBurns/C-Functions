#include <stdio.h>
#include <string.h>

int my_strlen(char *str){
    int i;

    for (i = 0 ; str[i] != '\0'; i++)
        ;

    return i;
}
int my_strcmp( char *str1, char *str2) {
    int returnVar;
    int i; 
    if (my_strlen(str1) > my_strlen(str2)) {
        return -1;
    }
    if (my_strlen(str1) < my_strlen(str2)) {
        return 1;
    }
    i = 0;
    while (str1[i]){
        if (str1[i] < str2[i]) {
            returnVar = 1;
        }
        if (str1[i] > str2[i]) {
            returnVar = -1;
        }
        if (str1[i] == str2[i]) {
            returnVar = 0;
        }
        i++;
    }

    return returnVar;
}

// int main(){
//     printf("Should return %d, %d\n", my_strcmp("abc", "bd"), strcmp("abc", "bd"));
//     printf("Should return %d, %d\n", my_strcmp("bd", "abc"), strcmp("bd", "abc"));
//     printf("Should return %d, %d\n", my_strcmp("abc", "abc"), strcmp("abc", "abc"));
// }