#include "Matrices.h"

void generarMatricesManual (int mat1 [FIL][COL]) {
    int i,j;
    printf ("Ingrese los elementos de la matriz 1:\n");
    for (i=0;i<FIL;i++){
        for (j=0;j<COL;j++){
            printf("Fila %d\t columna %d:\t",i+1,j+1);
            scanf("%d",&mat1[i][j]);
            }
        }
    }
void generarMatricesAuto (int mat1 [FIL][COL]) {
    int i,j; int cont=1;
    for (i=0;i<FIL;i++){
        for (j=0;j<COL;j++) {
            mat1[i][j]=cont;
            cont++;
            }
        }
    }
void mostrarMatrices (int mat1 [FIL][COL]){
    int i,j;
    printf ("La matriz 1 es:\n");
    for (i=0;i<FIL;i++){
        for (j=0;j<COL;j++){
            printf("%d\t",mat1[i][j]);
            }
        printf ("\n");
        }
}
int LeeYvalida (int inf, int sup,int exit){
    char a; int correcto;
    do{
        fflush(stdin);
        scanf ("%c",&a);
        a=tolower(a);
        if((a<=sup&&a>=inf)||a==exit)
        {correcto=1;}
        else
        {correcto=0;
        printf("La letra que puso no es valida, intentelo nuevamente: ");}
    }
    while (correcto==0);
    return(a);
}

//*****************EJERCICIOS*********************
void sumarDiagonalPrincipal (int mat1[FIL][COL]) {
    int i; int sum=0;
    for(i=0;i<FIL;i++) {
        sum+=mat1[i][i];
    }
    printf ("La sumatoria de la diagonal principal da %d.\n",sum);
}
void sumarDiagonalSecundaria (int mat1[FIL][COL]) {
    int i; int sum=0;
    for(i=0;i<FIL;i++) {
        sum+=mat1[FIL-i-1][i];
    }
    printf ("\nLa sumatoria de la diagonal secundaria da %d.",sum);
}
void sumarTriangularSuperior (int mat[FIL][COL]) {
    int i,j; int sum=0;
    printf("Elementos de la triangular superior: ");
    for (i=1;i<COL;i++) {
        for (j=0;j<i;j++) {
            sum+=mat[j][i];
            printf ("%d ",mat[j][i]);
        }
    }
    printf ("\nLa sumatoria de la triangular superior da %d.\n",sum);
}
void sumarTriangularInferior (int mat[FIL][COL]) {
    int i,j; int sum=0;
    printf("Elementos de la triangular inferior: ");
    for (i=1;i<COL;i++) {
        for (j=0;j<i;j++) {
            sum+=mat[i][j];
            printf ("%d, ",mat[i][j]);
        }
    }
    printf ("\nLa sumatoria de la triangular inferior da %d.\n",sum);
}
void sumarTrianguarSuperiorSecundaria (int mat[FIL][COL]) {
    int i,j; int sum=0;
    printf("Elementos de la triangular superior respecto de la diagonal secundaria: ");
    for (i=FIL-1;i>0;i--) {         // RECORRE LAS FILAS
            printf ("(i=%d)",i);
        for (j=COL-1;j>i;j--) {         // RECORRE LAS COLUMNAS
            sum+=mat[i][j];
            printf ("%d ",mat[i][j]);
        }
    }
    printf ("\nLa sumatoria de la triangular superior da %d.\n",sum);
}
