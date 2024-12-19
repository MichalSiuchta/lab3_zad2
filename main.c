#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char zdanie[200] = {0};
    srand(time(0));
    printf("Podaj zdanie:");
    fgets(zdanie, 200, stdin);
    int klucz = rand()%25 + 1;
    printf("Zdanie: %s \n",zdanie);
    printf("Zdanie zakodowane: ");



    return 0;
}
