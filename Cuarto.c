#include<stdio.h>
#include<stdlib.h>


int main(){

    float **arreglo2d;
    int numren,numcol;
    system("cls");
    printf("Anota el numero de renglones");
    scanf("%d",&numren);
    printf("\nAnota el nuero de olumnas");
    scanf("%d",&numcol);
    
    arreglo2d= (float **)malloc(numren*sizeof(int*)); //guarda espacio para los renglones
    for(int i=0; i<numren; i++)
        arreglo2d[i] = (float *)malloc(numcol*sizeof(int));//Es un ciclo para guardar la memria 
    
    system("cls");//Recorta el programa para ver solo lo necesario
    //lo que ya se ejecuto del programa
    for(int i=0;i<numren;i++){//pedir al usuario los valores de tu matriz
        for(int j=0;j<numcol;j++){
            printf("\nDame el valor del espacio[%d][%d]= ",i,j);
            scanf("%f",&arreglo2d[i][j]);
        }
    }
    printf("Tu MAtriz es:\n");//imprime tu matriz
    for(int i=0;i<numren;i++){
        for(int j=0;j<numcol;j++){
            printf("%5.2f",arreglo2d[i][j]);
        }
        printf("\n");
    }
    free(arreglo2d);//libera la memoria 
    system("pause");//pone en pausa el programa 
    return 0;

    }
