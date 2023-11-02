#include <stdio.h>
#include <string.h>

#define N 100

int main() {
    char inputString[N];
    char searchChar;
    int found = 0;
for (int i = 0; i < 6; i++)
{
  


    printf("Digite uma string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Digite um caractere para buscar na string: ");
    scanf(" %c", &searchChar);
    fflush(stdin);
    // Remove o caractere de nova linha (se presente) da entrada da string
    inputString[strcspn(inputString, "\n")] = '\0';

    // Verifica se a string contém o caractere fornecido
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == searchChar) {
            found = 1;
            break; // Se encontrou, podemos sair do loop
        }
    }

    if (found) {
        printf("A string contém o caractere '%c'.\n", searchChar);
    } else {
        printf("A string não contém o caractere '%c'.\n", searchChar);
    }
}
    return 0;
}
