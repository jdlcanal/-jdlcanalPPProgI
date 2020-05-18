#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

typedef struct{
int id;
char procesador[20];
char marca[20];
float precio;
}eNotebook;


void ordenar(eNotebook notebook[], int tam);

int main()
{
    eNotebook notebook[TAM]={{1,"Intel","VGH",1000},{2,"AMD","Asus",5000},{3,"Mac","Apple",20000},{4,"Mac2","Apple",23000},{5,"AMD low cost","Asus",2500}};
    ordenar(notebook,TAM);
    for(int i=0;i<TAM;i++){
        printf("Id: %d\nProcesador: %s\nMarca: %s\nPrecio: %.2f\n",notebook[i].id,notebook[i].procesador,notebook[i].marca,notebook[i].precio);
    }

    return 0;
}

void ordenar(eNotebook notebook[], int tam){
    eNotebook aux;
    for(int i=0; i<TAM-1; i++)
    {
        for(int j=i+1; j<TAM; j++)
        {
            if(strcmp(notebook[i].marca,notebook[j].marca)>0)
            {
                aux=notebook[i];
                notebook[i]=notebook[j];
                notebook[j]=aux;
            }
            else if(strcmp(notebook[i].marca,notebook[j].marca)>0 && notebook[i].precio>notebook[j].precio)
                {
                    aux=notebook[i];
                    notebook[i]=notebook[j];
                    notebook[j]=aux;
                }

            }
        }
    }


