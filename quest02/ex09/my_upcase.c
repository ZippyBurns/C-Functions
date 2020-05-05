char* my_upcase(char* param_1) {
    int i = 0;
    while(param_1[i]){
        if (param_1[i] >= 97 && param_1[i] <=122){
            param_1[i] -= 32;
        }
        i++;
    }
    return param_1;
}   