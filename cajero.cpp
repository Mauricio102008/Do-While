#include <iostream>
using namespace std;
int opcion,saldo =1000, deposito,retiro;
int main(){ 
     do
    {
    cout << "Bienvenido a tu cajero, que opcion deseas ejecutar? " <<endl;
    cout <<"1.Consultar saldo     2.Depositar dinero   3. Retirar dinero    4.Salir" <<endl;
    int opcion=0;
    cin>>opcion;
    switch(opcion){
        case 1:
        cout<<"Has elegido consultar saldo, tu saldo es $"<< saldo<<endl;
        break;
        case 2:
        cout <<"Has elegido depositar dinero, ingresa la cantidad a depositar" <<endl;
        cin>>deposito;
        if (deposito <= 0) {
            cout << "Cantidad invalida. No se puede depositar una cantidad negativa o cero." << endl;
            break;
        }
        saldo=saldo+deposito;
        cout<<"Tu nuevo saldo es $"<<saldo <<endl;
        break;
        case 3:
        cout<<"Has elegido retirar dinero, ingresa la cantidad a retirar" <<endl;
        cin>>retiro;
        if (retiro <= 0) {
            cout << "Cantidad invalida. No se puede retirar una cantidad negativa o cero." << endl;
            break;
        }
        if (retiro <= saldo) {
            saldo = saldo - retiro;
            cout<<"Tu nuevo saldo es $"<<saldo<<endl;
        } else {
            cout<<"Fondos insuficientes" <<endl;
        }
        break;
        default:
            cout << "Opcion invalida. Por favor, selecciona una opcion valida." << endl;
            break;
    }

    } while (opcion != 4);
    return 0;
}
