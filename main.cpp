#include <iostream>

#include "pointerDestruct.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Todavia no se ha hehco nada\n";
    {
        PointerDestruct<string> point;
        cout << "puntero creado pero no destruido\n";
    }

    cout << "puntero destruido pero la aplicacion no ha acabado\n";
}
