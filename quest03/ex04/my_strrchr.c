#include <stdio.h>
#include <string.h>

char *my_strrchr(char* str, char ch) {
  if (str == NULL) {
    return NULL;
    for (int i = strlen(str); i != 0; i--) {       
      if (*str == ch) {
          printf("this is the *str [%s], this is i [%c]", str, i);
          return str;
      }
    }
    return NULL;
  }
}

//   }
//   while (*str != '\0') {
//     if (*str == ch) {
//       return str;
//     {
//     str++;
//     }
//     return NULL;
//   }
//   return NULL;
// }

int main() {
  printf("Mine: %s, Comp: %s", my_strrchr("121212", '2'), strrchr("121212", '2'));
  printf("Mine: %s, Comp: %s", my_strrchr("abcabc", 'b'), strrchr("abcabc", 'b'));
//   printf("Mine: %s, Comp: %s", my_strrchr("abc", 'd'), strrchr("abc", 'd'));
  return 0;
}