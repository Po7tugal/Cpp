#include <iostream>
#include <string>
using namespace std;

struct Viatura {
    string matricula;
    string tipoVeiculo;
    string marca;
    string modelo;
    string dataMatricula;
    string nomeDono;
    int nifDono;
};

Viatura mostraCarroMaisNovo(Viatura carroX, Viatura carroY) {

    int carroXAno = stoi(carroX.dataMatricula.substr(0, 4));
    int carroXMes = stoi(carroX.dataMatricula.substr(5, 2));
    int carroXDia = stoi(carroX.dataMatricula.substr(8, 2));
    int carroYAno = stoi(carroY.dataMatricula.substr(0, 4));
    int carroYMes = stoi(carroY.dataMatricula.substr(5, 2));
    int carroYDia = stoi(carroY.dataMatricula.substr(8, 2));

    Viatura res = carroX;

    if (carroXAno > carroYAno) { // comparar ano
        res = carroX;
    }
    else if (carroXAno < carroYAno) {
        res = carroY;
    } else { // comparar mes
        if (carroXMes > carroYMes) {
            res = carroX;
        }
        else if (carroXMes < carroYMes) {
            res = carroY;
        } else { // comparar dia
            if (carroXDia > carroYDia) {
                res = carroX;
            }
            else if (carroXDia < carroYDia) {
                res = carroY;
            }
        }
    }
    return res;
}

int main() {

    Viatura carro1;
    Viatura carro2;
    Viatura carro3;
    Viatura carroAux;

    carro1.matricula = "EU22KJ";
    carro1.tipoVeiculo = "Carro";
    carro1.marca = "Porshe";
    carro1.modelo = "Panamera";
    carro1.dataMatricula = "2020-08-20";
    carro1.nomeDono = "Mestre Luis Santos";
    carro1.nifDono = 33319245;

    carro2.matricula = "OI75LA";
    carro2.tipoVeiculo = "Carro";
    carro2.marca = "Porshe";
    carro2.modelo = "911";
    carro2.dataMatricula = "2010-02-24";
    carro2.nomeDono = "Filipe";
    carro2.nifDono = 12311515;

    carro3.matricula = "lO45CO";
    carro3.tipoVeiculo = "Carro";
    carro3.marca = "Nissan";
    carro3.modelo = "Skyline R34";
    carro3.dataMatricula = "2015-06-14";
    carro3.nomeDono = "Davi";
    carro3.nifDono = 124158357;

    carroAux = mostraCarroMaisNovo(carro1, carro2);
    carroAux = mostraCarroMaisNovo(carroAux, carro3);
    cout << carroAux.matricula;
    // cout << (stoi(carro2.dataMatricula.substr(0, 4)) + 1);

    return 0;
}
