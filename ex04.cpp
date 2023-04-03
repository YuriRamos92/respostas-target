#include <iostream>
using namespace std;

int main()
{
    double vCarro = 110;   // km/h
    double vCaminhao = 80; // km/h
    double dCidades = 200; // km
    double tCarro, tCaminhao, dCarro, dCaminhao;

    // Calcula o tempo que cada veículo leva para chegar ao ponto de encontro
    tCarro = dCarro / vCarro;
    tCaminhao = dCaminhao / vCaminhao;

    // Calcula a distância percorrida por cada veículo até o ponto de encontro
    dCarro = (vCarro * tCaminhao) / (vCarro + vCaminhao) * dCidades;
    dCaminhao = dCidades - dCarro;

    // Determina qual veículo está mais próximo de Ribeirão Preto
    if (dCarro < dCaminhao)
    {
        cout << "O carro está mais próximo de Ribeirão Preto." << endl;
    }
    else
    {
        cout << "O caminhão está mais próximo de Ribeirão Preto." << endl;
    }

    return 0;
}
