#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;
int main(){

    ContaCorrente *cc = new ContaCorrente(5000, "Victor", 200, 223069);
    Poupanca *p = new Poupanca(5, 1, "Victor Poupanca", 200, 223069);
    ContaEspecial *ce = new ContaEspecial(5000, "Victor", 200, 223069);

    cc->Depositar(1800);
    p->Depositar(2800);
    ce->Depositar(3800);

    cout << cc->toString();
    cout << p->toString();
    cout << ce->toString();

    p->setVariacao(51);
    p->setSaldo(3000);
    cout << p->toString() << endl;
    p->Sacar(5000);

    return 0;
}