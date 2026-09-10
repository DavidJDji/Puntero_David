#include <iostream>
using namespace std;

int main()
{
    int numero = 25;
    int *puntero_david;
    puntero_david = &numero;
    cout <<"valor de numero: " << numero << endl;
    cout <<"direccion de numero: "<< &numero << *puntero_david << endl;
    *puntero_david = 100;
    cout <<"nuevo valor del puntero:" << *puntero_david << endl;
    cout <<"direccion del nuevo puntero: " << &numero << endl;


    return 0;
}