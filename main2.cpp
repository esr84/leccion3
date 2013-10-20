#include <iostream>

#include "moveClass.h"

using namespace std;

int main(int argc, char const *argv[])
{
    string var1 = "hola";
    string var2 = "adios";
 
    cout << "\n creamos el primer objeto\n";
    MoveClass move1(var1);
    move1.printString();
    move1.printMemoryAddr();
  
    cout << "\n creamos el segundo objeto con move contructor\n";
    MoveClass move2 = move(move1);
    move2.printString();
    move2.printMemoryAddr();

    return 0;
}
