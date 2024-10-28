#include <bits/stdc++.h>
#include "dominios.hpp"
using namespace std;

int main() {

    Horario horario;

    // Teste de classe de horario, usado durante desenvolvimento do codigo (sera removido na entrega final):
    cout << "Defina o horario: "  << endl;

    string horario_temp;
    cin >> horario_temp;

    if (horario.setHorario(horario_temp))
        cout << "Horario definido com sucesso: " << horario.getHorario() << endl;
    else
        cout << "Horario invalido. Por favor, digite o horario em formato HH:mm, entre 00:00 a 23:59." << endl;


    // Teste feito conforme o roteiro do projeto:
    if (horario.setHorario("23:59"))
        cout << "Horario = " << horario.getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (horario.setHorario("-1:59"))
        cout << "Horario = " << horario.getHorario() << endl;
    else
        cout << "Horario invalido" << endl;


    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Horario *horario_ptr;

    horario_ptr = new Horario();

    if (horario_ptr->setHorario("00:00"))
        cout << "Horario = " << horario_ptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (horario_ptr->setHorario("24:00"))
        cout << "Horario = " << horario_ptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    delete horario_ptr;


    Nome nome;

    // Teste de classe de nome, usado durante desenvolvimento do codigo (sera removido na entrega final):
    cout << "Defina o nome: "  << endl;

    string nome_temp;
    cin >> nome_temp;

    if (nome.setNome(nome_temp))
        cout << "Nome definido com sucesso: " << nome.getNome() << endl;
    else
        cout << "Nome invalido. Por favor, digite um nome com ate 30 caracteres." << endl;


    // Teste feito conforme o roteiro do projeto:
    if (nome.setNome("Pedrinho Camarada"))
        cout << "Nome = " << nome.getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (nome.setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << nome.getNome() << endl;
    else
        cout << "Nome invalido" << endl;


    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Nome *nome_ptr;

    nome_ptr = new Nome();

    if (nome_ptr->setNome("Pedrinho Camarada"))
        cout << "Nome = " << nome_ptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (nome_ptr->setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << nome_ptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    delete nome_ptr;


    Senha senha;

    // Teste feito conforme o roteiro do projeto:
    if(senha.setSenha("21348"))
        cout << "Senha = " << senha.getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    if(senha.setSenha("54321"))
        cout << "Senha = " << senha.getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Senha *senha_ptr;

    senha_ptr = new Senha();

    if(senha_ptr->setSenha("21348"))
        cout << "Senha = " << senha_ptr -> getSenha() << endl;
    else
        cout << "Senha invalida " << endl;

    if(senha_ptr->setSenha("54321"))
        cout << "Senha = " << senha_ptr->getSenha() << endl;
    else
        cout << "Senha invalida" << endl;

    delete senha_ptr;

    Data data;

    cout << "Defina a data: "  << endl;

    string data_temp;
    cin >> data_temp;

    if (data.setData(data_temp))
        cout << "Data definida com sucesso: " << data.getData() << endl;
    else
        cout << "Data invalida. Por favor, digite uma data em formato DD-MM-AA" << endl;

    Avaliacao av1;

    if(av1.setValue(1))
        cout << "Valor = " << av1.getValue() << endl;
    if (av1.setValue(10))
        cout << "Valor = " << av1.getValue() << endl;

    Codigo codigo;

    cout << "Defina o codigo:" << endl;

    string codigo_temp;
    cin >> codigo_temp;

    // Teste feito conforme o roteiro do projeto:
    if (codigo.setCodigo(codigo_temp))
        cout << "Codigo definido com sucesso: " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido. Por favor, digite um codigo de 6 caracteres alfanumericos." << endl;

    if (codigo.setCodigo("A1B2C3"))
        cout << "Codigo = " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;
    if (codigo.setCodigo("1234567"))
        cout << "Codigo = " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:
    Codigo *codigo_ptr;

    codigo_ptr = new Codigo();

    if (codigo_ptr->setCodigo("XYZ789"))
        cout << "Codigo = " << codigo_ptr->getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    if (codigo_ptr->setCodigo("A!B#1C"))
        cout << "Codigo = " << codigo_ptr->getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    delete codigo_ptr;


    Avaliacao avaliacao;

    if(avaliacao.setAvaliacao(1))
        cout << "Valor = " << avaliacao.getAvaliacao() << endl;
    if (avaliacao.setAvaliacao(10))
        cout << "Valor = " << avaliacao.getAvaliacao() << endl;
    
    return 0;
}