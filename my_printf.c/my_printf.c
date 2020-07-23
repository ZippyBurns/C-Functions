#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

//  Helper Functions 
// finds length of a char*
int my_strlen(char* str){
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

//prints a char* to the console
int my_putstr(char *str){
    int size = 0;
    for(int i = 0; str[i]!= '\0'; i++){
        size += write(1, &str[i], 1);
    }
    return size;
}

// prints a char to the console
int my_putchar(int ch){
    return write(1, &ch, 1);
}

int my_putnbr_base(long nbr, char *base) {
    int size = 0;
    int base_len = my_strlen(base);

    if (nbr < 0) {
       size += my_putchar('-');
       size += my_putnbr_base(nbr * -1, base);
    }
    else {
        if ((nbr / base_len) > 0) {
            size += my_putnbr_base(nbr / base_len, base);
        }
        size += my_putchar(base[(nbr % base_len)]);
    }
    return size;
}

//////////////////////////////
      /* MAIN FUNCTION */
//////////////////////////////

int my_printf(char * restrict format, ...){
    int length = 0;
    char* string;
    int integer;
    long lng;
    unsigned int unint;
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch(*format) {
                case 'c':  // Signed Char
                    length += my_putchar(va_arg(args, int));
                    break;

                case 'd': // Signed Decimal
                    integer = va_arg(args, int);
                    length += my_putnbr_base(integer, "0123456789");
                    break;
                    
                case 'o': // Unsigned Octal
                    unint = va_arg(args, unsigned int);
                    length += my_putnbr_base(unint, "01234567");
                    break;
                
                case 's': //Char* (String)
                    string = va_arg(args, char*);
                    if (string) {
                        length += my_putstr(string);
                    }
                    else {
                        length += my_putstr("(null)");
                    }
                    break;
                
                case 'x': // Unsigned Hexadecimal
                    unint = va_arg(args, int);
                    length += my_putnbr_base(unint, "0123456789abcdef");
                    break;

                case 'p': // Unsigned Hexadecimal for pointer
                    lng = va_arg(args, long);
                    length += my_putstr("0x");
                    length += my_putnbr_base(lng, "0123456789abcdef");
                    break;

                case 'u': // Unsigned Decimal
                    unint = va_arg(args, int);
                    length += my_putnbr_base(unint, "0123456789");
                    break;
            };
            format++;
        }
        else {
            length += my_putchar(*format);
            format++;
        }
    }
    va_end(args);
    return length;
}


int main(int ac, char **av) {
    char* greeting = "my_printf in function";
    int one = 1;
    my_printf("(%s) (%d)", greeting, one);
    return 0;
}
