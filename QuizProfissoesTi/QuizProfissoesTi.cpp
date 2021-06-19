#include "QuizProfissoesTi.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    CQuizProfissoesTi quizProfissoesTi = {0};

    if (quizProfissoesTi.MostraMenu(quizProfissoesTi) == false)
        return 0;

    quizProfissoesTi.DefinePorcentagens(quizProfissoesTi);
    quizProfissoesTi.DefineProfissao   (quizProfissoesTi);
    quizProfissoesTi.MostraResultados  (quizProfissoesTi);

    return 0;
}

bool CQuizProfissoesTi::MostraMenu(CQuizProfissoesTi& quizProfissoesTi)
{
    char cEscolha = 0;

    cout << "Se voce quer ingressar na area de TI, mas nao sabe em qual profissao da area, voce esta no lugar certo!" << endl;
    cout << "Seja bem-vindo ao nosso quiz para saber qual profissao de TI mais combina com voce :)"                   << endl;

    cout << "\n   Qual eh a sua relacao com a area de TI?"                                  << endl;
    cout << "a) Gosto de mexer com pecas e sou curioso com a parte externa das maquinas."   << endl;
    cout << "b) Gosto de sempre ler sobre as novas tecnologias e as demandas do mercado."   << endl;
    cout << "c) Gosto de desenvolver um software a partir de uma linguagem de programacao." << endl;
    cout << "d) Gosto de arquitetar e planejar uma aplicacao."                              << endl;

    cout << "Escolha: ";
    cin  >> cEscolha;
    cEscolha = tolower(cEscolha);

    switch (cEscolha)
    {
        case 'a':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 1;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 3;
            quizProfissoesTi.lSomaPontosDBA                   += 1;

            aPesosAlternativasGestorProjetos       .push_back(-4);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-5);
            aPesosAlternativasSuporteTecnico       .push_back( 1);
            aPesosAlternativasAnalistaSistemas     .push_back(-3);
            aPesosAlternativasDBA                  .push_back( 1);
        }; break;
        case 'b':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 1;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 3;
            quizProfissoesTi.lSomaPontosDBA                   -= 1;

            aPesosAlternativasGestorProjetos       .push_back( 4);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 2);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 4);
            aPesosAlternativasSuporteTecnico       .push_back( 1);
            aPesosAlternativasAnalistaSistemas     .push_back( 3);
            aPesosAlternativasDBA                  .push_back(-1);
        }; break;
        case 'c':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 2;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 0;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 2;
            quizProfissoesTi.lSomaPontosDBA                   += 2;

            aPesosAlternativasGestorProjetos       .push_back( 2);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 5);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back( 0);
            aPesosAlternativasAnalistaSistemas     .push_back(-2);
            aPesosAlternativasDBA                  .push_back( 2);
        }; break;
        case 'd':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 2;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 5;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 3;
            quizProfissoesTi.lSomaPontosDBA                   += 2;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-3);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 2);
            aPesosAlternativasSuporteTecnico       .push_back(-5);
            aPesosAlternativasAnalistaSistemas     .push_back( 3);
            aPesosAlternativasDBA                  .push_back( 2);
        }; break;
        default: cout << "Opcao invalida." << endl;
            return false;
    }

    cout << "\n   O que voce se imagina fazendo na sua profissao?"                                               << endl;
    cout << "a) Sempre auxiliar as pessoas com problemas cotidianos ou situacoes mais complexas."                << endl;
    cout << "b) Desenvolver aplicativos, jogos, sites e sistemas."                                               << endl;
    cout << "c) Administrar dados e cuidar da seguranca das informacoes dos clientes/usuarios da aplicacao."     << endl;
    cout << "d) Se preocupar com a interface e experiencia do usuario com o sistema e do seu bom funcionamento." << endl;
    cout << "e) Fazer a manutencao de hardwares."                                                                << endl;

    cout << "Escolha: ";
    cin  >> cEscolha;
    cEscolha = tolower(cEscolha);

    switch (cEscolha)
    {
        case 'a':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 3;
            quizProfissoesTi.lSomaPontosDBA                   -= 1;

            aPesosAlternativasGestorProjetos       .push_back( 4);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 4);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-1);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 4);
            aPesosAlternativasSuporteTecnico       .push_back( 5);
            aPesosAlternativasAnalistaSistemas     .push_back( 3);
            aPesosAlternativasDBA                  .push_back(-1);
        }; break;
        case 'b':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 2;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 4;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 3;
            quizProfissoesTi.lSomaPontosDBA                   += 0;

            aPesosAlternativasGestorProjetos       .push_back( 2);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 5);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back(-4);
            aPesosAlternativasAnalistaSistemas     .push_back(-3);
            aPesosAlternativasDBA                  .push_back( 0);
        }; break;
        case 'c':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 0;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 1;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 2;
            quizProfissoesTi.lSomaPontosDBA                   += 5;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 0);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 1);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 4);
            aPesosAlternativasSuporteTecnico       .push_back( 1);
            aPesosAlternativasAnalistaSistemas     .push_back(-2);
            aPesosAlternativasDBA                  .push_back( 5);
        }; break;
        case 'd':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 4;
            quizProfissoesTi.lSomaPontosDBA                   -= 3;

            aPesosAlternativasGestorProjetos       .push_back( 3);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 1);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back( 2);
            aPesosAlternativasAnalistaSistemas     .push_back( 4);
            aPesosAlternativasDBA                  .push_back(-3);
        }; break;
        case 'e':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 3;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 5;
            quizProfissoesTi.lSomaPontosDBA                   -= 4;

            aPesosAlternativasGestorProjetos       .push_back(-5);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-4);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-5);
            aPesosAlternativasSuporteTecnico       .push_back( 3);
            aPesosAlternativasAnalistaSistemas     .push_back(-5);
            aPesosAlternativasDBA                  .push_back(-4);
        }; break;
        default: cout << "Opcao invalida." << endl;
            return false;
    }

    bool bAlternativaA = false;
    bool bAlternativaB = false;
    bool bAlternativaC = false;
    bool bAlternativaD = false;
    bool bAlternativaE = false;
    bool bAlternativaF = false;
    bool bAlternativaG = false;
    bool bAlternativaH = false;
    bool bAlternativaI = false;
    bool bAlternativaJ = false;

    do
    {
        cout << "\n   Qual conjunto de caracteristicas te descrevem?"                             << endl;
        cout << "a) Curiosidade"                                                                  << endl;
        cout << "b) Criatividade"                                                                 << endl;
        cout << "c) Lideranca"                                                                    << endl;
        cout << "d) Comunicacao"                                                                  << endl;
        cout << "e) Raciocinio logico"                                                            << endl;
        cout << "f) Paciencia"                                                                    << endl;
        cout << "g) Perfeccionismo"                                                               << endl;
        cout << "h) Estrategia - Eficacia na solucao de problemas"                                << endl;
        cout << "i) Organizacao"                                                                  << endl;
        cout << "j) Responsabilidade"                                                             << endl;
        cout << "k) Assinalei todas as alternativas que queria, desejo ir para a proxima questao" << endl;

        cout << "Escolha: ";
        cin  >> cEscolha;
        cEscolha = tolower(cEscolha);

        switch (cEscolha)
        {
            case 'a':
            {
                if (bAlternativaA)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
                quizProfissoesTi.lSomaPontosSuporteTecnico        -= 3;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 2;
                quizProfissoesTi.lSomaPontosDBA                   -= 1;

                aPesosAlternativasGestorProjetos       .push_back( 3);
                aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
                aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
                aPesosAlternativasSuporteTecnico       .push_back(-3);
                aPesosAlternativasAnalistaSistemas     .push_back(-2);
                aPesosAlternativasDBA                  .push_back(-1);

                bAlternativaA = true;
            }; break;
            case 'b':
            {
                if (bAlternativaB)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 2;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 4;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
                quizProfissoesTi.lSomaPontosSuporteTecnico        -= 2;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 0;
                quizProfissoesTi.lSomaPontosDBA                   -= 2;

                aPesosAlternativasGestorProjetos       .push_back( 4);
                aPesosAlternativasTecnicoInfraestrutura.push_back( 2);
                aPesosAlternativasDesenvolvedorBackEnd .push_back( 4);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
                aPesosAlternativasSuporteTecnico       .push_back(-2);
                aPesosAlternativasAnalistaSistemas     .push_back( 0);
                aPesosAlternativasDBA                  .push_back(-2);

                bAlternativaB = true;
            }; break;
            case 'c':
            {
                if (bAlternativaC)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 2;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 0;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 1;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 3;
                quizProfissoesTi.lSomaPontosDBA                   += 1;

                aPesosAlternativasGestorProjetos       .push_back( 5);
                aPesosAlternativasTecnicoInfraestrutura.push_back(-2);
                aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back( 0);
                aPesosAlternativasSuporteTecnico       .push_back( 1);
                aPesosAlternativasAnalistaSistemas     .push_back( 3);
                aPesosAlternativasDBA                  .push_back( 1);

                bAlternativaC = true;
            }; break;
            case 'd':
            {
                if (bAlternativaD)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 3;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 2;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 4;
                quizProfissoesTi.lSomaPontosDBA                   += 3;

                aPesosAlternativasGestorProjetos       .push_back(5);
                aPesosAlternativasTecnicoInfraestrutura.push_back(3);
                aPesosAlternativasDesenvolvedorBackEnd .push_back(3);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back(2);
                aPesosAlternativasSuporteTecnico       .push_back(5);
                aPesosAlternativasAnalistaSistemas     .push_back(4);
                aPesosAlternativasDBA                  .push_back(3);

                bAlternativaD = true;
            }; break;
            case 'e':
            {
                if (bAlternativaE)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 3;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 5;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 3;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 5;
                quizProfissoesTi.lSomaPontosDBA                   += 4;

                aPesosAlternativasGestorProjetos       .push_back( 3);
                aPesosAlternativasTecnicoInfraestrutura.push_back(-3);
                aPesosAlternativasDesenvolvedorBackEnd .push_back( 5);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back( 3);
                aPesosAlternativasSuporteTecnico       .push_back( 2);
                aPesosAlternativasAnalistaSistemas     .push_back( 5);
                aPesosAlternativasDBA                  .push_back( 4);

                bAlternativaE = true;
            }; break;
            case 'f':
            {
                if (bAlternativaF)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 1;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
                quizProfissoesTi.lSomaPontosDBA                   += 3;

                aPesosAlternativasGestorProjetos       .push_back(5);
                aPesosAlternativasTecnicoInfraestrutura.push_back(5);
                aPesosAlternativasDesenvolvedorBackEnd .push_back(3);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back(1);
                aPesosAlternativasSuporteTecnico       .push_back(5);
                aPesosAlternativasAnalistaSistemas     .push_back(2);
                aPesosAlternativasDBA                  .push_back(3);

                bAlternativaF = true;
            }; break;
            case 'g':
            {
                if (bAlternativaG)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 4;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 3;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 4;
                quizProfissoesTi.lSomaPontosDBA                   += 5;

                aPesosAlternativasGestorProjetos       .push_back(4);
                aPesosAlternativasTecnicoInfraestrutura.push_back(4);
                aPesosAlternativasDesenvolvedorBackEnd .push_back(2);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back(5);
                aPesosAlternativasSuporteTecnico       .push_back(3);
                aPesosAlternativasAnalistaSistemas     .push_back(4);
                aPesosAlternativasDBA                  .push_back(5);

                bAlternativaG = true;
            }; break;
            case 'h':
            {
                if (bAlternativaH)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 2;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 3;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 5;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 3;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 3;
                quizProfissoesTi.lSomaPontosDBA                   += 3;

                aPesosAlternativasGestorProjetos       .push_back( 2);
                aPesosAlternativasTecnicoInfraestrutura.push_back( 3);
                aPesosAlternativasDesenvolvedorBackEnd .push_back( 5);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back( 3);
                aPesosAlternativasSuporteTecnico       .push_back( 5);
                aPesosAlternativasAnalistaSistemas     .push_back(-3);
                aPesosAlternativasDBA                  .push_back( 3);

                bAlternativaH = true;
            }; break;
            case 'i':
            {
                if (bAlternativaI)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 1;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 5;
                quizProfissoesTi.lSomaPontosDBA                   += 5;

                aPesosAlternativasGestorProjetos       .push_back( 5);
                aPesosAlternativasTecnicoInfraestrutura.push_back(-1);
                aPesosAlternativasDesenvolvedorBackEnd .push_back( 3);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
                aPesosAlternativasSuporteTecnico       .push_back( 2);
                aPesosAlternativasAnalistaSistemas     .push_back( 5);
                aPesosAlternativasDBA                  .push_back( 5);

                bAlternativaI = true;
            }; break;
            case 'j':
            {
                if (bAlternativaJ)
                {
                    cout << "Opcao ja selecionada antes." << endl;
                    break;
                }

                quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
                quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 4;
                quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
                quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 2;
                quizProfissoesTi.lSomaPontosSuporteTecnico        += 4;
                quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
                quizProfissoesTi.lSomaPontosDBA                   += 5;

                aPesosAlternativasGestorProjetos       .push_back(5);
                aPesosAlternativasTecnicoInfraestrutura.push_back(4);
                aPesosAlternativasDesenvolvedorBackEnd .push_back(2);
                aPesosAlternativasDesenvolvedorFrontEnd.push_back(2);
                aPesosAlternativasSuporteTecnico       .push_back(4);
                aPesosAlternativasAnalistaSistemas     .push_back(2);
                aPesosAlternativasDBA                  .push_back(5);

                bAlternativaJ = true;
            }; break;
            case 'k':; break;

            default: cout << "Opcao invalida." << endl;
                return false;
        }
    } while (cEscolha != 'k');

    cout << "\n   Qual funcao mais se encaixa com voce?" << endl;
    cout << "a) Deixar o cliente satisfeito."            << endl;
    cout << "b) Ajudar os colegas de trabalho."          << endl;
    cout << "c) Liderar equipes."                        << endl;
    cout << "d) Realizar atividades pre-determinadas."   << endl;
    cout << "e) Organizar aplicacoes."                   << endl;

    cout << "Escolha: ";
    cin  >> cEscolha;
    cEscolha = tolower(cEscolha);

    switch (cEscolha)
    {
        case 'a':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 5;
            quizProfissoesTi.lSomaPontosDBA                   += 2;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 1);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-1);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back( 5);
            aPesosAlternativasAnalistaSistemas     .push_back( 5);
            aPesosAlternativasDBA                  .push_back( 2);
        }; break;
        case 'b':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 2;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 2;
            quizProfissoesTi.lSomaPontosDBA                   += 4;

            aPesosAlternativasGestorProjetos       .push_back( 4);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 2);
            aPesosAlternativasSuporteTecnico       .push_back( 2);
            aPesosAlternativasAnalistaSistemas     .push_back(-2);
            aPesosAlternativasDBA                  .push_back( 4);
        }; break;
        case 'c':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 1;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
            quizProfissoesTi.lSomaPontosDBA                   -= 1;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-2);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-4);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-3);
            aPesosAlternativasSuporteTecnico       .push_back(-1);
            aPesosAlternativasAnalistaSistemas     .push_back( 2);
            aPesosAlternativasDBA                  .push_back(-1);
        }; break;
        case 'd':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 2;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 1;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
            quizProfissoesTi.lSomaPontosDBA                   += 5;

            aPesosAlternativasGestorProjetos       .push_back(-2);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 2);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 5);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back( 1);
            aPesosAlternativasAnalistaSistemas     .push_back( 2);
            aPesosAlternativasDBA                  .push_back( 5);
        }; break;
        case 'e':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 4;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 4;
            quizProfissoesTi.lSomaPontosDBA                   += 4;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-4);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 3);
            aPesosAlternativasSuporteTecnico       .push_back(-4);
            aPesosAlternativasAnalistaSistemas     .push_back( 4);
            aPesosAlternativasDBA                  .push_back( 4);
        }; break;
        default: cout << "Opcao invalida." << endl;
            return false;
    }

    cout << "\n   No dia a dia, voce prefere ter que lidar mais com:" << endl;
    cout << "a) Se possivel, ninguem."                                << endl;
    cout << "b) Colegas de trabalho."                                 << endl;
    cout << "c) Clientes."                                            << endl;
    cout << "d) Maquinas e equipamentos."                             << endl;

    cout << "Escolha: ";
    cin  >> cEscolha;
    cEscolha = tolower(cEscolha);

    switch (cEscolha)
    {
        case 'a':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 0;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 5;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 4;
            quizProfissoesTi.lSomaPontosDBA                   -= 3;

            aPesosAlternativasGestorProjetos       .push_back(-5);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 1);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 0);
            aPesosAlternativasSuporteTecnico       .push_back(-5);
            aPesosAlternativasAnalistaSistemas     .push_back(-4);
            aPesosAlternativasDBA                  .push_back(-3);
        }; break;
        case 'b':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 3;
            quizProfissoesTi.lSomaPontosDBA                   += 4;

            aPesosAlternativasGestorProjetos       .push_back(5);
            aPesosAlternativasTecnicoInfraestrutura.push_back(2);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(4);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(4);
            aPesosAlternativasSuporteTecnico       .push_back(2);
            aPesosAlternativasAnalistaSistemas     .push_back(3);
            aPesosAlternativasDBA                  .push_back(4);
        }; break;
        case 'c':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 5;
            quizProfissoesTi.lSomaPontosDBA                   += 1;

            aPesosAlternativasGestorProjetos       .push_back( 3);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-4);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 3);
            aPesosAlternativasSuporteTecnico       .push_back( 5);
            aPesosAlternativasAnalistaSistemas     .push_back( 5);
            aPesosAlternativasDBA                  .push_back( 1);
        }; break;
        case 'd':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 3;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 4;
            quizProfissoesTi.lSomaPontosDBA                   -= 3;

            aPesosAlternativasGestorProjetos       .push_back(-3);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-3);
            aPesosAlternativasSuporteTecnico       .push_back( 3);
            aPesosAlternativasAnalistaSistemas     .push_back(-4);
            aPesosAlternativasDBA                  .push_back(-3);
        }; break;
        default: cout << "Opcao invalida." << endl;
            return false;
    }

    cout << "   Uma pessoa que voce admira, eh uma pessoa"       << endl;
    cout << "a) que tem posicao de destaque na carreira."        << endl;
    cout << "b) que gosta de ajudar os outros e eh prestativo."  << endl;
    cout << "c) que sempre esta a fazer coisas novas."           << endl;
    cout << "d) que eh criativa e sempre tem ideias inovadoras." << endl;

    cout << "Escolha: ";
    cin  >> cEscolha;
    cEscolha = tolower(cEscolha);

    switch (cEscolha)
    {
        case 'a':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 3;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
            quizProfissoesTi.lSomaPontosDBA                   += 2;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-3);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back(-3);
            aPesosAlternativasAnalistaSistemas     .push_back( 2);
            aPesosAlternativasDBA                  .push_back( 2);
        }; break;
        case 'b':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 1;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 2;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 5;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 3;
            quizProfissoesTi.lSomaPontosDBA                   += 4;

            aPesosAlternativasGestorProjetos       .push_back(4);
            aPesosAlternativasTecnicoInfraestrutura.push_back(4);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(1);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(2);
            aPesosAlternativasSuporteTecnico       .push_back(5);
            aPesosAlternativasAnalistaSistemas     .push_back(3);
            aPesosAlternativasDBA                  .push_back(4);
        }; break;
        case 'c':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 4;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 0;
            quizProfissoesTi.lSomaPontosDBA                   -= 1;

            aPesosAlternativasGestorProjetos       .push_back( 3);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 3);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 5);
            aPesosAlternativasSuporteTecnico       .push_back(-4);
            aPesosAlternativasAnalistaSistemas     .push_back( 0);
            aPesosAlternativasDBA                  .push_back(-1);
        }; break;
        case 'd':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 0;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 5;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
            quizProfissoesTi.lSomaPontosDBA                   += 1;

            aPesosAlternativasGestorProjetos       .push_back(4);
            aPesosAlternativasTecnicoInfraestrutura.push_back(3);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(0);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(5);
            aPesosAlternativasSuporteTecnico       .push_back(2);
            aPesosAlternativasAnalistaSistemas     .push_back(2);
            aPesosAlternativasDBA                  .push_back(1);
        }; break;
        default: cout << "Opcao invalida." << endl;
            return false;
    }

    cout << "\n   Selecione o conceito que mais desperta seu interesse:"                                                            << endl;
    cout << "a) Coletar, introduzir, alterar, excluir e arquitetar dados em tabelas."                                               << endl;
    cout << "b) Entender o hardware e a estrutura das partes que o compoem."                                                        << endl;
    cout << "c) Articular front-end e back-end para fazer uma aplicacao a ser utilizada no navegador."                              << endl;
    cout << "d) Utilizar uma linguagem com conceitos como classes, objetos, encapsulamento, heranca e polimorfismo para programar." << endl;
    cout << "e) Entender a transmissao de dados a partir de uma rede de computadores."                                              << endl;
    cout << "f) Refletir sobre a seguranca de dados e realizar a projecao de aplicacoes seguras."                                   << endl;
    cout << "g) Buscar e aplicar tecnicas que visam a qualidade do software."                                                       << endl;

    cout << "Escolha: ";
    cin  >> cEscolha;
    cEscolha = tolower(cEscolha);

    switch (cEscolha)
    {
        case 'a':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 1;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
            quizProfissoesTi.lSomaPontosDBA                   += 5;

            aPesosAlternativasGestorProjetos       .push_back(-4);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-2);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 3);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-3);
            aPesosAlternativasSuporteTecnico       .push_back( 1);
            aPesosAlternativasAnalistaSistemas     .push_back( 2);
            aPesosAlternativasDBA                  .push_back( 5);
        }; break;
        case 'b':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        -= 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 3;
            quizProfissoesTi.lSomaPontosDBA                   -= 2;

            aPesosAlternativasGestorProjetos       .push_back(-3);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-4);
            aPesosAlternativasSuporteTecnico       .push_back( 2);
            aPesosAlternativasAnalistaSistemas     .push_back(-3);
            aPesosAlternativasDBA                  .push_back(-2);
        }; break;
        case 'c':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 4;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 5;
            quizProfissoesTi.lSomaPontosDBA                   += 0;

            aPesosAlternativasGestorProjetos       .push_back( 3);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 4);
            aPesosAlternativasSuporteTecnico       .push_back(-4);
            aPesosAlternativasAnalistaSistemas     .push_back(-5);
            aPesosAlternativasDBA                  .push_back( 0);
        }; break;
        case 'd':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 3;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        -= 4;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      -= 5;
            quizProfissoesTi.lSomaPontosDBA                   -= 2;

            aPesosAlternativasGestorProjetos       .push_back( 3);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 5);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 3);
            aPesosAlternativasSuporteTecnico       .push_back(-4);
            aPesosAlternativasAnalistaSistemas     .push_back(-5);
            aPesosAlternativasDBA                  .push_back(-2);
        }; break;
        case 'e':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 2;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 5;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  -= 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd -= 2;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 2;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 2;
            quizProfissoesTi.lSomaPontosDBA                   += 3;

            aPesosAlternativasGestorProjetos       .push_back( 2);
            aPesosAlternativasTecnicoInfraestrutura.push_back( 5);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(-4);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(-2);
            aPesosAlternativasSuporteTecnico       .push_back( 2);
            aPesosAlternativasAnalistaSistemas     .push_back( 2);
            aPesosAlternativasDBA                  .push_back( 3);
        }; break;
        case 'f':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 4;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura += 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 2;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 4;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 0;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 4;
            quizProfissoesTi.lSomaPontosDBA                   += 4;

            aPesosAlternativasGestorProjetos       .push_back(4);
            aPesosAlternativasTecnicoInfraestrutura.push_back(4);
            aPesosAlternativasDesenvolvedorBackEnd .push_back(2);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back(4);
            aPesosAlternativasSuporteTecnico       .push_back(0);
            aPesosAlternativasAnalistaSistemas     .push_back(4);
            aPesosAlternativasDBA                  .push_back(4);
        }; break;
        case 'g':
        {
            quizProfissoesTi.lSomaPontosGestorProjetos        += 5;
            quizProfissoesTi.lSomaPontosTecnicoInfraestrutura -= 3;
            quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  += 4;
            quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd += 3;
            quizProfissoesTi.lSomaPontosSuporteTecnico        += 4;
            quizProfissoesTi.lSomaPontosAnalistaSistemas      += 5;
            quizProfissoesTi.lSomaPontosDBA                   += 0;

            aPesosAlternativasGestorProjetos       .push_back( 5);
            aPesosAlternativasTecnicoInfraestrutura.push_back(-3);
            aPesosAlternativasDesenvolvedorBackEnd .push_back( 4);
            aPesosAlternativasDesenvolvedorFrontEnd.push_back( 3);
            aPesosAlternativasSuporteTecnico       .push_back( 4);
            aPesosAlternativasAnalistaSistemas     .push_back( 5);
            aPesosAlternativasDBA                  .push_back( 0);
        }; break;
        default: cout << "Opcao invalida." << endl;
            return false;
    }

    return true;
}

void CQuizProfissoesTi::DefinePorcentagens(CQuizProfissoesTi& quizProfissoesTi)
{
    quizProfissoesTi.dPorcentagemGestorProjetos        = 100.0 * quizProfissoesTi.lSomaPontosGestorProjetos        / PONTOS_MAXIMOS_GESTOR_PROJETOS       ;
    quizProfissoesTi.dPorcentagemTecnicoInfraestrutura = 100.0 * quizProfissoesTi.lSomaPontosTecnicoInfraestrutura / PONTOS_MAXIMOS_TECNICO_INFRAESTRUTURA;
    quizProfissoesTi.dPorcentagemDesenvolvedorBackEnd  = 100.0 * quizProfissoesTi.lSomaPontosDesenvolvedorBackEnd  / PONTOS_MAXIMOS_DESENVOLVEDOR_BACKEND ;
    quizProfissoesTi.dPorcentagemDesenvolvedorFrontEnd = 100.0 * quizProfissoesTi.lSomaPontosDesenvolvedorFrontEnd / PONTOS_MAXIMOS_DESENVOLVEDOR_FRONTEND;
    quizProfissoesTi.dPorcentagemSuporteTecnico        = 100.0 * quizProfissoesTi.lSomaPontosSuporteTecnico        / PONTOS_MAXIMOS_SUPORTE_TECNICO       ;
    quizProfissoesTi.dPorcentagemAnalistaSistemas      = 100.0 * quizProfissoesTi.lSomaPontosAnalistaSistemas      / PONTOS_MAXIMOS_ANALISTA_SISTEMAS     ;
    quizProfissoesTi.dPorcentagemDBA                   = 100.0 * quizProfissoesTi.lSomaPontosDBA                   / PONTOS_MAXIMOS_DBA                   ;
}

void CQuizProfissoesTi::DefineProfissao(CQuizProfissoesTi& quizProfissoesTi)
{
    vector<double> aPorcentagens = {quizProfissoesTi.dPorcentagemGestorProjetos, quizProfissoesTi.dPorcentagemTecnicoInfraestrutura, quizProfissoesTi.dPorcentagemDesenvolvedorBackEnd, quizProfissoesTi.dPorcentagemDesenvolvedorFrontEnd, quizProfissoesTi.dPorcentagemSuporteTecnico, quizProfissoesTi.dPorcentagemAnalistaSistemas, quizProfissoesTi.dPorcentagemDBA};
    double dPorcentagemVencedora = *max_element(aPorcentagens.begin(), aPorcentagens.end());

    system("cls");

    if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemGestorProjetos)
    {
        cout << "Por detras de um projeto de sucesso, ha uma pessoa competente, responsavel, lider e comunicativa. E voce, parece se encaixar nesse perfil. Parabens! Ser um Gestor de Projetos eh a sua 'praia'. Voce coordena uma equipe e planeja aplicacoes da melhor forma possivel, aplicando o seu amplo conhecimento nisso. Fique ligado nas competencias e seja um profissional de destaque!\n" << endl;

        cout << "- Tomada de decisoes"                 << endl;
        cout << "- Visao integrada"                    << endl;
        cout << "- Organizacao"                        << endl;
        cout << "- Constante processo de aprendizagem" << endl;

        DefineMatchProfissao(aPesosAlternativasGestorProjetos);
    }
    else if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemTecnicoInfraestrutura)
    {
        cout << "Trabalhar com a manutencao de hardwares, gadgets, softwares e redes sao palavras que te atraem? Pois bem, parabens! Voce tem o perfil de ser um Tecnico de Infraestrutura. Ele trabalha com o objetivo de prevenir e consertar falhas tecnicas e agilizar os processos de trabalho, alem de, reparar equipamentos e prestar assistencia tecnica aos clientes. Fique ligado nas competencias e seja um profissional de destaque!" << endl;

        cout << "- Prestar auxilio"                                          << endl;
        cout << "- Pensar fora da caixa"                                     << endl;
        cout << "- Gostar de mexer com pecas e a parte exterior de maquinas" << endl;
        cout << "- Conhecimento tecnico"                                     << endl;

        DefineMatchProfissao(aPesosAlternativasTecnicoInfraestrutura);
    }
    else if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemDesenvolvedorBackEnd)
    {
        cout << "Parabens! Voce parece ser o nosso mais novo Desenvolvedor Back-End. Um profissional dessa area eh uma das engrenagens principais de uma empresa. Sao eles que fazem o desenvolvimento de aplicacoes e a sua manutencao. Essa profissao vem sendo muito requisitada no mercado de trabalho em todo o mundo. Fique ligado nas competencias e seja um profissional de destaque!\n" << endl;

        cout << "- Dominar linguagens de programacao"       << endl;
        cout << "- Colocar-se no lugar do cliente"          << endl;
        cout << "- Ter raciocinio logico"                   << endl;
        cout << "- Fazer a analise de informacoes e falhas" << endl;
        cout << "- Pensar na qualidade do sistema"          << endl;

        DefineMatchProfissao(aPesosAlternativasDesenvolvedorBackEnd);
    }
    else if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemDesenvolvedorFrontEnd)
    {
        cout << "Ser um desenvolvedor Front-End eh a profissao de TI que mais se encaixa com voce. Parabens! Ele eh o responsavel por desenvolver as paginas de aplicacoes com as quais os futuros usuarios irao interagir. Cada vez mais o mundo web toma conta do TI, entao voce tem uma longa caminhada de trabalho pela frente. Fique ligado nas competencias e seja um profissional de destaque!\n" << endl;

        cout << "- Dominar linguagens de programacao"       << endl;
        cout << "- Refletir sobre a experiencia do usuario" << endl;
        cout << "- Ter raciocinio logico"                   << endl;
        cout << "- Pensar na padronizacao do sistema"       << endl;

        DefineMatchProfissao(aPesosAlternativasDesenvolvedorFrontEnd);
    }
    else if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemSuporteTecnico)
    {
        cout << "Qual a sua opiniao sobre resolver falhas de softwares, redes ou hardwares? E sobre ajudar o cliente da sua empresa? Auxiliar eh a palavra que mais combina com voce. Parabens, essa eh uma profissao que poucos gostam, mas parece que lidar com pessoas eh com voce mesmo. A profissao de Suporte Tecnico conta com um vasto conhecimento das aplicacoes e uma boa cabeca e coracao para lidar com as pessoas. Fique ligado nas competencias e seja um profissional de destaque!" << endl;

        cout << "- Garantir o funcionamento de servidores, maquinas e equipamentos"                                 << endl;
        cout << "- Ter raciocinio logico para solucao de problemas"                                                 << endl;
        cout << "- Auxiliar os profissionais e usuarios"                                                            << endl;
        cout << "- Garantir a disponibilidade, estabilidade e atualizacao do ambiente de TI(hardwares e softwares)" << endl;

        DefineMatchProfissao(aPesosAlternativasSuporteTecnico);
    }
    else if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemAnalistaSistemas)
    {
        cout << "Voce adora tecnologias e o seu funcionamento, mas lidar com o codigo nao eh com voce. “Deixa pros desenvolvedores”. Parabens! Parece que a area de Analista de Sistemas esta ganhando um novo candidato. Um profissional dessa area cuida das regras de negocio de uma aplicacao, do funcionamento da tela e dos seus “porques”. Fique ligado nas competencias e seja um profissional de destaque!" << endl;
        
        cout << "- Fazer o levantamento e analise de requisitos"    << endl;
        cout << "- Saber gerenciar os dados na tela"                << endl;
        cout << "- Lidar com as demandas do mercado e dos clientes" << endl;
        cout << "- Auxiliar e prestar servicos aos clientes"        << endl;

        DefineMatchProfissao(aPesosAlternativasAnalistaSistemas);
    }
    else if (dPorcentagemVencedora == quizProfissoesTi.dPorcentagemDBA)
    {
        cout << "Ser um Administrador de Banco de Dados requer muita responsabilidade. E isso voce deve ter de sobra. Parabens! Este profissional eh responsavel pela criacao, instalacao, monitoramento, reparos e analise de estruturas de um Banco de Dados e das informacoes ali armazenadas. Fique ligado nas competencias e seja um profissional de destaque!" << endl;
        cout << "- Experiencia em armazenamento e gerenciamento de dados" << endl;
        cout << "- Experiencia em uma linguagem de Script"                << endl;
        cout << "- Ter raciocinio logico"                                 << endl;
        cout << "- Gerenciar dados com cuidado e responsabilidade"        << endl;

        DefineMatchProfissao(aPesosAlternativasDBA);
    }
}

void CQuizProfissoesTi::MostraResultados(CQuizProfissoesTi& quizProfissoesTi)
{
    cout << "\nPorcentagens das profissoes de TI" << endl;

    cout << "Gestor de projetos: "                    << quizProfissoesTi.dPorcentagemGestorProjetos        << "%" << endl;
    cout << "Tecnico de Infraestrutura: "             << quizProfissoesTi.dPorcentagemTecnicoInfraestrutura << "%" << endl;
    cout << "Desenvolvedor Back-End: "                << quizProfissoesTi.dPorcentagemDesenvolvedorBackEnd  << "%" << endl;
    cout << "Desenvolvedor Front-End: "               << quizProfissoesTi.dPorcentagemDesenvolvedorFrontEnd << "%" << endl;
    cout << "Suporte Tecnico: "                       << quizProfissoesTi.dPorcentagemSuporteTecnico        << "%" << endl;
    cout << "Analista de sistemas: "                  << quizProfissoesTi.dPorcentagemAnalistaSistemas      << "%" << endl;
    cout << "Administrador de Banco de Dados (DBA): " << quizProfissoesTi.dPorcentagemDBA                   << "%" << endl << endl;

    system("pause");
}

void CQuizProfissoesTi::DefineMatchProfissao(std::vector<long> aPesosAlternativas)
{
    vector<long> aModaPesos = {0};
    aModaPesos.resize(11);

    for (unsigned long idxPesoAlternativa = 0; idxPesoAlternativa < aPesosAlternativas.size(); ++idxPesoAlternativa)
    {
        switch (aPesosAlternativas[idxPesoAlternativa])
        {
            case -5 : aModaPesos[ 0] += 1; break;
            case -4 : aModaPesos[ 1] += 1; break;
            case -3 : aModaPesos[ 2] += 1; break;
            case -2 : aModaPesos[ 3] += 1; break;
            case -1 : aModaPesos[ 4] += 1; break;
            case  0 : aModaPesos[ 5] += 1; break;
            case  1 : aModaPesos[ 6] += 1; break;
            case  2 : aModaPesos[ 7] += 1; break;
            case  3 : aModaPesos[ 8] += 1; break;
            case  4 : aModaPesos[ 9] += 1; break;
            case  5 : aModaPesos[10] += 1; break;
        }
    }

    long lModaMaior = *max_element(aModaPesos.begin(), aModaPesos.end());
    long lModaPeso = 0;

    if (lModaMaior == aModaPesos[0])
        lModaPeso = -5;
    else if (lModaMaior == aModaPesos[1])
        lModaPeso = -4;
    else if (lModaMaior == aModaPesos[2])
        lModaPeso = -3;
    else if (lModaMaior == aModaPesos[3])
        lModaPeso = -2;
    else if (lModaMaior == aModaPesos[4])
        lModaPeso = -1;
    else if (lModaMaior == aModaPesos[5])
        lModaPeso = 0;
    else if (lModaMaior == aModaPesos[6])
        lModaPeso = 1;
    else if (lModaMaior == aModaPesos[7])
        lModaPeso = 2;
    else if (lModaMaior == aModaPesos[8])
        lModaPeso = 3;
    else if (lModaMaior == aModaPesos[9])
        lModaPeso = 4;
    else if (lModaMaior == aModaPesos[10])
        lModaPeso = 5;

    double dMatchProfissao = 20 * lModaPeso;

    cout << "\nVoce tem " << dMatchProfissao << "% de chance de dar certo com essa profissao! Boa sorte!" << endl;
}
