#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

void cargaAlumno(int legajos[], char nombre[][30], int anios[], int * validos, const int dim);
void mostrarAlumno(const int legajos[], const char nombre[][30], const int anios[], const int validos);
void datosAlumno(const char nombre[][30], const int legajos , const int validos, const int legajoAlumno);


/** 4. Hacer una función que reciba como parámetro todos los arreglos y los
    ordene por nombre. (por el método de selección o inserción).*/
void ordenarPorNombre(int legajos, char nombre[][30], int anios, int validos)
{
    char menor[30] = nombre[0];

    for (int i=0; i<validos; i++)
    {
        if(strcmpi(menor, nombre[][30]) == -1)
        {

        }
    }

}

int main()
{
    setlocale(LC_ALL,"");


    /////////////////////////////////////////////////  Ejercicio 1. ///////////////////////////////////////////////////

//    int legajos[20];
//    char nombres[20][30];
//    int anios[20];
//    int validos = 0;
//    int dim = 20;
//    cargaAlumno(legajos, nombres, anios, &validos, dim);
//    mostrarAlumno(legajos, nombres, anios, validos);

    /////////////////////////////////////////////////  Ejercicio 2. ///////////////////////////////////////////////////

//    int legajos[20] = {12701,12702,12703};
//    char nombres[20][30] = {"Juan", "Pedro", "Joana"};
//    int anios[20] = {1,2,1};
//    int validos = 3;
//    int legajoAlumno;
//    int indexAlumno;
//    printf("Ingrese el legajo que desea buscar (ej: 12701): ");
//    scanf("%d", &legajoAlumno);
//    indexAlumno = buscarAlumno__porLegajo(legajos, validos, legajoAlumno);
//    if (indexAlumno !=-1)
//    {
//        printf("El alumno esta en el indice: %i", indexAlumno);
//    } else
//    {
//        printf("El alumno no se encuentra en el registro");
//    }

    /////////////////////////////////////////////////  Ejercicio 3. ///////////////////////////////////////////////////

//    int legajos[20] = {12701,12702,12703};
//    char nombres[20][30] = {"Juan", "Pedro", "Joana"};
//    int anios[20] = {1,2,1};
//    int validos = 3;
//    int legajoAlumno;
//    int indexAlumno;
//
//    printf("Ingrese el legajo que desea buscar (ej: 12701): ");
//    scanf("%d", &legajoAlumno);
//    datosAlumno(nombres, legajos, validos, legajoAlumno);

    /////////////////////////////////////////////////  Ejercicio 4. ///////////////////////////////////////////////////

    int legajos[20] = {12701,12702,12703};
    char nombres[20][30] = {"Juan", "Pedro", "Joana"};
    int anios[20] = {1,2,1};
    int validos = 3;


    ordenarPorNombre(legajos, nombre, anios, validos);


    printf("\n\n >>                   Fin programa!!!\n");
    return 0;
}



/** 1. Crear una función que los cargue, hasta que el usuario lo decida. */
void cargaAlumno(int legajos[], char nombre[][30], int anios[], int * validos, const int dim)
{
    char option = 's';
    for(int i = *validos; i< dim && option == 's' ; i++)
    {
        printf("Ingrese el nombre del alumno: ");
        fflush(stdin);
        gets(nombre[i]);

        printf("Ingrese el legajo del alumno: ");
        fflush(stdin);
        scanf("%i", &legajos[i]);

        printf("Ingrese el año del alumno: ");
        fflush(stdin);
        scanf("%i", &anios[i]);

        printf("¿Desea cargar otro alumno? s/n: ");
        fflush(stdin);
        scanf("%c", &option);
        *validos = i+1;
    }
}

void mostrarAlumno(const int legajos[], const char nombre[][30], const int anios[], const int validos)
{
    for(int i=0; i<validos; i++)
    {
        printf(">> Datos del alumno: \n");
        printf("    >>Nombre del alumno: %s\n", nombre[i]);
        printf("    >>Legajo del alumno: %i\n", legajos[i]);
        printf("    >>Años del alumno: %i\n", anios[i]);

    }
}
/** 2. Crear una función que busque dentro del arreglo de legajos y retorne la posición de un determinado valor. */
int buscarAlumno__porLegajo(const int legajos[], const int validos, const int legajoAlumno)
{
    int index = -1;
    for(int i=0; i < validos && index == -1; i++)
    {
        if(legajoAlumno == legajos[i])
        {
            index = i;
        }
    }
    return index; // si devuelve -1 NOOOO se encuentra el alumno.
}

/** 3. Hacer una función que reciba como parámetro todos los arreglos y encuentre el nombre
    correspondiente a un determinado legajo y lo imprima por pantalla. Se debe invocar la función 2.*/

void datosAlumno(const char nombre[][30], const int legajos , const int validos, const int legajoAlumno)
{
    int index = buscarAlumno__porLegajo(legajos, validos, legajoAlumno);
    if (index !=-1)
    {
        printf(">> Nombre del alumno: %s\n ", nombre[index]);
    } else
    {
        printf(">> El alumno no se encuentra en el registro.\n");
    }
}
