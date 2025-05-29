#include <stdio.h>
#include <string.h>

int main()
{
    char pronomes[6][5] = 
    {
        "EU", "TU", "ELE", "NOS", "VOS", "ELES"
    };

    char sufixo[6][5] =
    {
        "O", "AS", "A", "AMOS", "AIS", "AM"
    };

    char verbo[21];
    printf("Digite o verbo -> ");
    scanf("%s", verbo);

    int ultima_posicao = strlen(verbo) - 1;
    int penultima_posicao = ultima_posicao - 1;

    if (verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R')
    {
        char radical[21];
        strcpy(radical, verbo);
        radical[penultima_posicao] = '\0';
        for (int i = 0; i < 6; i++)
        {
            printf("%s %s%s\n", pronomes[i], radical, sufixo[i]);
        }
    }
    else
    {
        printf("O verbo não tem termina em AR!\n");
    }

    return 0;
}