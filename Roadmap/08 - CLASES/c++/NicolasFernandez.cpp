// Nicolas Fernandez
// https://github.com/NicolasFernandez9920

/*
 * EJERCICIO:
 * Explora el concepto de clase y crea un ejemplo que implemente un inicializador,
 * atributos y una funci�n que los imprima (teniendo en cuenta las posibilidades
 * de tu lenguaje).
 * Una vez implementada, cr�ala, establece sus par�metros, modif�calos e impr�melos
 * utilizando su funci�n.
 *
 * DIFICULTAD EXTRA (opcional):
 * Implementa dos clases que representen las estructuras de Pila y Cola (estudiadas
 * en el ejercicio n�mero 7 de la ruta de estudio)
 * - Deben poder inicializarse y disponer de operaciones para a�adir, eliminar,
 *   retornar el n�mero de elementos e imprimir todo su contenido.
 *
 */
#include <iostream>
#include "miClase.h"


class miClase
{
public:
    int num1;
    int num2;

    // Constructor
    miClase(int a, int b) : num1(a), num2(b) {}

    void print();
};

void miClase::print()
{
    std::cout << "variable 1: " << num1 << "\n";
    std::cout << "variable 2: " << num2 << "\n";
}


int main()
{
    miClase objeto1{ 5, 8 };

    objeto1.print();

    std::cout << "*********************\n";

    objeto1.num1 = 10;
    objeto1.num2 = 15;

    objeto1.print();
}
