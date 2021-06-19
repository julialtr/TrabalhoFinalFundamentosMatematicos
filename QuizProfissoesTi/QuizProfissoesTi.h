#pragma once
#include <vector>

const long PONTOS_MAXIMOS_GESTOR_PROJETOS        = 71;
const long PONTOS_MAXIMOS_TECNICO_INFRAESTRUTURA = 55;
const long PONTOS_MAXIMOS_DESENVOLVEDOR_BACKEND  = 58;
const long PONTOS_MAXIMOS_DESENVOLVEDOR_FRONTEND = 59;
const long PONTOS_MAXIMOS_SUPORTE_TECNICO        = 50;
const long PONTOS_MAXIMOS_ANALISTA_SISTEMAS      = 50;
const long PONTOS_MAXIMOS_DBA                    = 55;

class CQuizProfissoesTi
{
public:
    long lSomaPontosGestorProjetos        = 0;
    long lSomaPontosTecnicoInfraestrutura = 0;
    long lSomaPontosDesenvolvedorBackEnd  = 0;
    long lSomaPontosDesenvolvedorFrontEnd = 0;
    long lSomaPontosSuporteTecnico        = 0;
    long lSomaPontosAnalistaSistemas      = 0;
    long lSomaPontosDBA                   = 0;

    double dPorcentagemGestorProjetos        = 0.0;
    double dPorcentagemTecnicoInfraestrutura = 0.0;
    double dPorcentagemDesenvolvedorBackEnd  = 0.0;
    double dPorcentagemDesenvolvedorFrontEnd = 0.0;
    double dPorcentagemSuporteTecnico        = 0.0;
    double dPorcentagemAnalistaSistemas      = 0.0;
    double dPorcentagemDBA                   = 0.0;

    std::vector<long> aPesosAlternativasGestorProjetos        = {0};
    std::vector<long> aPesosAlternativasTecnicoInfraestrutura = {0};
    std::vector<long> aPesosAlternativasDesenvolvedorBackEnd  = {0};
    std::vector<long> aPesosAlternativasDesenvolvedorFrontEnd = {0};
    std::vector<long> aPesosAlternativasSuporteTecnico        = {0};
    std::vector<long> aPesosAlternativasAnalistaSistemas      = {0};
    std::vector<long> aPesosAlternativasDBA                   = {0};

    bool MostraMenu        (CQuizProfissoesTi& quizProfissoesTi);
    void DefinePorcentagens(CQuizProfissoesTi& quizProfissoesTi);
    void DefineProfissao   (CQuizProfissoesTi& quizProfissoesTi);
    void MostraResultados  (CQuizProfissoesTi& quizProfissoesTi);

    void DefineMatchProfissao(std::vector<long> aPesosAlternativas);
};
