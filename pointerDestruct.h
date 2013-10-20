#pragma one

#include <iostream>

using namespace std;

// declaramos el template //
template <class t>

// declaramos la clase //
class PointerDestruct
{
    // propiedades y metodos privados //
    private:
        // puntero al tipo t. Sera la unica propiedad de la clase //
        t *puntero;
 
    public:
        PointerDestruct()
        {
            cout << "creando puntero" << "\n";
            puntero = new t();
        }
      
        ~PointerDestruct()
        {
            cout << "destruyendo puntero" << "\n";
            delete puntero;
        }

}; 

