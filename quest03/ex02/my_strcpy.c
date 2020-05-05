#include <stdio.h>

char *my_strcpy(char *str1, char *str2){
    char *copy = str1;
    while(*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return copy;
}

// int main()
// {
//     char ch_arr1[20] = "Did it work?"
//     char ch_arr2[20]
 
//     printf("\nCopying first string into second... \n\n");
//     my_strcpy(ch_arr2, ch_arr1); // copy the contents of ch_arr1 to ch_arr2
 
//     printf("First string (ch_arr_1) = %s\n", ch_arr1);
//     printf("Second string (ch_arr_2) = %s\n", ch_arr2);
 
//     printf("\nCopying \"Greece\" string into ch_arr1 ... \n");
//     my_strcpy(ch_arr1, "Greece"); // copy Greece to ch_arr1
 
//     printf("\nCopying \"Slovenia\" string into ch_arr2 ... \n\n");
//     my_strcpy(ch_arr2, "Slovenia"); // copy Slovenia to ch_arr2
 
//     printf("First string (ch_arr_1) = %s\n", ch_arr1);
//     printf("Second string (ch_arr_2) = %s\n", ch_arr2);
 
//     // signal to operating system program ran fine
//     return 0;
// }