#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_swap(char *str1, char *str2) { 
    char temp = *str1;
    *str1 = *str2;
    *str2 = temp;            
}  

int	my_strlen(char *str){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++){
        counter++;
    }
    return counter;
}

char* reverse_string(char *str){
int z = my_strlen(str) - 1;
// printf("This is the str length: %d\n", z);

for(int i = 0; i<z; i++, z--){
    my_swap(&str[i], &str[z]);
    }
return str;
}

// int main(){
//     printf("%s", my_strrev(strdup("abcdef")));
// }