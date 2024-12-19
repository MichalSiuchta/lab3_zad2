#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char zdanie[200];
    srand(time(0));
    printf("Podaj zdanie:");
    fgets(zdanie, 200, stdin);
    int klucz = rand()%25 + 1;
    printf("Zdanie: %s",zdanie);
    printf("Zdanie zakodowane: ");

    int i = 0;

    while(zdanie[i] != '\0') {
        if(islower(zdanie[i])) {
            printf("%c", (zdanie[i] - 'a' + klucz) %26 + 'a');
        }else
        if(isupper(zdanie[i])) {
            printf("%c", (zdanie[i] - 'A' + klucz) %26 + 'A');
        }else {
            printf("%c", zdanie[i]);
        }

        i++;
    }

    return 0;
}
