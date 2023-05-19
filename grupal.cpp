 //Asignacion de valores para los campos del nodo
    nuevoElemento->numeroEntero = numeroEntero;
    nuevoElemento->siguiente = pilaGeneral;
void binario (int numeroEntero, int resto, int cociente);
{
     while (numeroEntero >=0)
     {
        resto = numeroEntero/2 
     }
}
    //Declaracion de variables
    PilaNumero pilaGeneral;
    int opcion;     
    int numeroEntero;
    int resto;
    int cociente; 
                 cout<< "\n Ingrese un numero entero en Sistema decimal a insertar: "; 
                 cin>> numeroEntero;
                 if(numeroEntero<0);
                 cout<< "\n Numero invalido: ";
                 while (numeroEntero>=0);
                 {
                 	class Pila 
{
public:
    Pila(int capacidad);

    ~Pila();

    void push(int valor);

    int pop();

    bool empty() const;
    
private:

    int _capacidad;
    int _index;
    int * _data;
};
int num_digitos = static_cast<int>(log2(numeroEntero)) + 1;
Pila pila(num_digitos);
Pila binario(int numeroEntero)
{
    // Creación de la pila ..

    while (numeroEntero != 0)
    {
        pila.push(numeroEntero % 2);
        numeroEntero /= 2;
    }

    return pila;
}
while( !pila.empty() )
{
    std::cout << pila.pop();
}