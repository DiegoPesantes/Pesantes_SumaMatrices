#include <stdio.h>
#include <stdlib.h>
 int main(int argc, char const *argv[])
 {
    int F, C;
    srand(time(NULL));
    printf("Ingrese el numero de filas: ");
    scanf("%d", &F);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &C);
    int PM[F][C];
    int SM[F][C];
    int RES[F][C];
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            PM[i][j]= rand()%101;
            SM[i][j]= rand()%101;
            RES[i][j] = PM[i][j]+SM[i][j];
        }
        //Imprimimos primera matriz//
    }
        printf("Primera Matriz:\n");

        for (int i = 0; i < F; i++)
        {
            for (int j = 0; j < C; j++)
            {
                printf("%d", PM[i][j]);
            }
            printf(" \n");
        }
        //Imprimimos segunda matriz//
        
    return 0;
 }
 