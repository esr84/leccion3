#ifndef MOVECLASS
#define MOVECLASS
 
#include <iostream>

using namespace std;

class MoveClass
{
    private:
        string var;
    public:

    /**
      @brief Contructor 
      contructor de la clase
    **/
    MoveClass(const string &_var)
        :var(_var)
    {
        cout << "llamada al constructor\n";
    }

     /**
      @brief Contructor de copia
      contructor de copia de la clase
    **/
    MoveClass(const MoveClass & copy)
        : var (copy.var)
    {
        cout << "llamada al contructor de copia\n";
    }

    /**
      @brief Contructor de movimiento
      contructor de movimiento de la clase
    **/
    MoveClass(MoveClass &&copy)
    {
        cout << "direccion actual: ";
        cout << reinterpret_cast<const void*>((const void*) &var ) << "\n";
        cout << "direccion copia: "; 
        cout << reinterpret_cast<const void*>((const void*) &copy.var ) << "\n";
        var = move(copy.var);
        cout << "direccion despues de la copia: ";
        cout << reinterpret_cast<const void*>((const void*) &var ) << "\n";
    }

   /**
     @brief muestra la direccion de memoria
     muestra por pantalla la direccion de memoria del atributo
   **/
    void printMemoryAddr()
    {
	cout << "direccion de la variable: ";
        cout << reinterpret_cast<const void*>((const void*) &var ) << "\n";
    }

    /**
    @brief muestra el valor de la variable
    muestra por pantalla el atributo
    **/
   void printString()
   {
       cout << var << "\n";
   }

};
 
#endif 

