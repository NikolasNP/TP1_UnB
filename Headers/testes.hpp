#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios.hpp"
using namespace std;

class TUAvaliacao {
    private:
        const static int AVALIACAO_VALIDA = 5;
        const static int AVALIACAO_INVALIDA = 6;
        Avaliacao *avaliacao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUHorario {
    private:
        const string HORARIO_VALIDO = "12:34";
        const string HORARIO_INVALIDO = "AB:CD";
        Horario *horario;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioHorarioValido();
        void testarCenarioHorarioInvalido();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUNome {
    private:
        const string NOME_VALIDO = "Pedro";
        const string NOME_INVALIDO = "Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga";
        Nome *nome;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioNomeValido();
        void testarCenarioNomeInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUCodigo {
    private:
        static constexpr const char* CODIGO_VALIDO = "uba123";
        static constexpr const char* CODIGO_INVALIDO = "%*/*";
        Codigo *codigo;
        int estado;
        void setUp();
        void tearDown();
        void testarCodigoCodigoValido();
        void testarCodigoCodigoInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUSenha {

    private:
        
        static constexpr const char* SENHA_VALIDO = "21345";
        static constexpr const char* SENHA_INVALIDO = "12345";
        Senha *senha;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSenhaValido();
        void testarCenarioSenhaInvalido();
    public:
        
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUData{
    private:
        const string DATA_VALIDO = "11-09-01";
        const string DATA_INVALIDO = "32-14-04";
        Data *data;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDataValido();
        void testarCenarioDataInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUDuracao {
    private:
        const int DURACAO_VALIDA = 200;
        const int DURACAO_INVALIDA = 3610;
        Duracao *duracao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDuracaoValida();
        void testarCenarioDuracaoInvalida();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUDinheiro {
    private:
        const int DINHEIRO_VALIDO = 200.00;
        const int DINHEIRO_INVALIDO = 300000.00;
        Dinheiro *dinheiro;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioDinheiroValido();
        void testarCenarioDinheiroInvalido();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TESTES_HPP_INCLUDED
