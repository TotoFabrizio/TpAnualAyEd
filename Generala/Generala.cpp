// Generala.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include <stdlib.h> //estas dos librerias son para generar numeros aleatrios
#include <time.h>

using namespace std;

int tirar(int[]);
void jugar(int, int, int[], int[][]);

int main()
{
    int jugdores, partida[11][5], jugada, juego[5], i;
    srand(time(NULL));
    cout << "Ingrese la cantidad de jugadores (3 a 5): ";
    cin >> jugdores;

    tiradas = tirar(juego);
    for (i = 0;i < 5;i++) cout << juego[i] << " ";
    cout << endl;
    cout << jugada<<endl;



    return 0;
}

int tirar(int juego[5]) {
    int i;
    for (i = 0;i < 5;i++) {
        juego[i] = 1 + rand() % (7 - 1);
    };
    return (1 + rand() % (4 - 1));
}
void jugar(int jugador, int tiradas, int juego[5], int partida[11][5]) {

}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
