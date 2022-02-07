#include <iostream>
//Libreria de configuraciones especificas 
#include <locale.h>

using namespace std;

int main()
{
    //LC_TYPE afecta los caracteres de la funcion
    setlocale(LC_CTYPE,"Spanish");
    
    cout<<"Español";

    return 0;
}
