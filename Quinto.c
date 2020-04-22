#include<stdio.h>
#include<stdlib.h>

int main(){

    float *arre;
    int datos;

    system("cls");
    printf("Dame el numero de datos que deseas en tu arreglo ");
    scanf("%d",&datos);

    while(datos<=0){// Para verificar que sea un valor aceptado
        printf("\nDebe ser un valor positivo");
        scanf("%d",&datos);
    }

    arre=(float *)malloc(datos*sizeof(int));//reservacion de la memoria 

    for(int i=0; i<datos ;i++){// Guarda los daos en el lugar de memoria reservado 
        printf("Dame el valor de el numero [%d] = ",i);
        scanf("%f",&arre[i]);
    }



    for(int i=0; i<datos;i++){
        printf("arre[%d] = %g \n",i, arre[i]);//imprime los datos
    }

    free(arre);//liberas memoria reservada 
    system("pause");
    return 0;
}
