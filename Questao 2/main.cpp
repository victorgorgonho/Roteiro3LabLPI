#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta *c1 = new Conta();
    ContaEspecial *ce1 = new ContaEspecial();

    c1->Depositar(3000);
    ce1->Depositar(4000);

    cout << "Saldo disponivel da conta num 1: " << c1->getSaldo() << endl;
    cout << "Saldo disponivel da conta especial num1: " << ce1->getSaldo() << endl;

    c1->Sacar(1500);
    ce1->Sacar(2200);

    cout << "Saldo disponivel da conta num1 (pos saque): " << c1->getSaldo() << endl;
    cout << "Saldo disponivel da conta especial num1 (pos saque): " << ce1->getSaldo() << endl;

    c1->setSalarioMensal(3000);
    c1->DefinirLimite();

    ce1->setSalarioMensal(3000);
    ce1->DefinirLimite();

    cout << "Limite da conta num1: " << c1->getLimite() << endl;
    cout << "Limite da conta especial num1: " << ce1->getLimite() << endl;

    return 0;
}