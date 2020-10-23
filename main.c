#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    char zero[] = {"zero"};
    char um[] = {"um"};
    char dois[] = {"dois"};
    char tres[] = {"tres"};
    char quatro[] = {"quatro"};
    char cinco[] = {"cinco"};
    char seis[] = {"seis"};
    char sete[] = {"sete"};
    char oito[] = {"oito"};
    char nove[] = {"nove"};
    char aux[20];
    int tam_aux = 11;
    int quant_num=8;


    char string_num[] = {"dois dois cinco zero sete um tres zero"}; //string a ser separada
    char delim[] = " "; // diz por qual caractere quer ser delimitada a separação
    char *ptr = strtok(string_num, delim); // vai colocando nesta string do apontador o que separa.
    int i = 0, l = 0;


    if (quant_num % 2 != 0) {

        printf(" \nErro, numero nao estao emparelhados!");

        exit(0);

    }


    while (ptr != NULL) {

        if (strcmp(ptr, zero) == 0) { aux[i] = '0'; }
        if (strcmp(ptr, um) == 0) { aux[i] = '1'; }
        if (strcmp(ptr, dois) == 0) { aux[i] = '2'; }
        if (strcmp(ptr, tres) == 0) { aux[i] = '3'; }
        if (strcmp(ptr, quatro) == 0) { aux[i] = '4'; }
        if (strcmp(ptr, cinco) == 0) { aux[i] = '5'; }
        if (strcmp(ptr, seis) == 0) { aux[i] = '6'; }
        if (strcmp(ptr, sete) == 0) { aux[i] = '7'; }
        if (strcmp(ptr, oito) == 0) { aux[i] = '8'; }
        if (strcmp(ptr, nove) == 0) { aux[i] = '9'; }
        i++;
        l++;
        ptr = strtok(NULL, delim);

        if (l % 2 == 0) {

            aux[i] = ' ';

            i++;
        }

    }

    for (int z = 0; z < tam_aux; z++) {
        printf("%c", aux[z]);
    }
}