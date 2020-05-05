char *my_capitalize(char *str) {
  int i = 0;
  int first;
  while (str[i] == 32) {
    i++;
  }
  first = i;
  while (str[i]) {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] += 32;
    }
    i++;
  }
  if (str[first] >= 97 && str[first] <= 122) {
    str[first] -= 32;
  }
  return str;
}