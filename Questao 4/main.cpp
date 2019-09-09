#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha(3000);

    Funcionario *assl = new Assalariado();
    Funcionario *com = new Comissionado();
    Funcionario *hor = new Horista();

    assl->setNome("Franklin Anthony");
    assl->setMatricula(1);
    ((Assalariado *)assl)->setSalario(1200);

    com->setNome("Maria Jose");
    com->setMatricula(2);
    ((Comissionado *)com)->setSalarioBase(1000);
    ((Comissionado *)com)->setVendasSemanais(500);
    ((Comissionado *)com)->setPercentualComissao(20);

    hor->setNome("Jose Antonio");
    hor->setMatricula(3);
    ((Horista *)hor)->setSalarioPorHora(12);
    ((Horista *)hor)->setHorasTrabalhadas(45);

    sgf.setFuncionario(assl);
    sgf.setFuncionario(com);
    sgf.setFuncionario(hor);

    cout << assl->toString();
    cout << com->toString();
    cout << hor->toString() << endl;

    try{
        cout << "Total de pagamento na folha: " << sgf.calculaValorTotalFolha() << endl; 
    }catch(OrcamentoEstouradoException e){
        std::cerr << e.what() << '\n';
    }
   
    cout << "Salario mensal funcionario de matricula 2: " << sgf.consultaSalarioFuncionario(2) << endl;

    try{
        cout << "Salario mensal funcionario de matricula 4: " << sgf.consultaSalarioFuncionario(4) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }
    return 0;
}