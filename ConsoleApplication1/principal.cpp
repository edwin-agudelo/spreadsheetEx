// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <memory>
// Includes propios
#include "SpreadSheetCell.h"
#include "StringSpreadSheetCell.h"
#include "DoubleSpreadSheetCell.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    vector< unique_ptr<SpreadSheetCell> > cellArray;
    cellArray.push_back(make_unique<StringSpreadSheetCell>());
    cellArray.push_back(make_unique<StringSpreadSheetCell>());
    cellArray.push_back(make_unique<DoubleSpreadSheetCell>());

    string strtmp = "Hola";

    cellArray[0]->set(strtmp);
    strtmp = "10";
    cellArray[1]->set(strtmp);
    strtmp = "18";
    cellArray[2]->set(strtmp);

    cout << "Los valores de las celdas son:" << cellArray[0]->getString() << " , " << cellArray[1]->getString() << " , " << cellArray[2]->getString() << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
