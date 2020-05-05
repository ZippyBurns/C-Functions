char* my_downcase(char* param_1) {
    int i = 0;
    while(param_1[i]){
        if (param_1[i] >= 65 && param_1[i] <=90){
            param_1[i] += 32;
        }
        i++;
    }
    return param_1;
}   