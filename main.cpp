#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string gerarPassw(int tamanho, bool usarLetra, bool usarNum, bool usarSimb){

    std::string letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string numeros = "0123456789";
    std::string simbolos = "!@#$%^&*()-_=+<>?";

    std::string caractDisp = "";

    if (usarLetra) caractDisp += letras;
    if (usarNum) caractDisp += numeros;
    if (usarSimb) caractDisp += simbolos;

    if (caractDisp.empty()){
        return "Erro: Selecione um tipo de caractere!";
    }



std::string senha = "";
    for (int i = 0; i < tamanho; ++i){
        int indice = rand() % caractDisp.size();
        senha += caractDisp[indice];

    }

    return senha;

}


int main(){
    srand(time(0));

    int tamanho;
    char inclLetra, inclNum, inclSimb;

    std::cout << "Projeto: Gerador de senha Aleatorio\n\n\n";

    std::cout << "Tamanho da senha: ";
    std::cin >> tamanho;

    std::cout << "Deseja incluir letras? (s/n) ";
    std::cin >> inclLetra;

    std::cout << "Deseja incluir numeros: (s/n) ";
    std::cin >> inclNum;

    std::cout << "Deseja includir simbolos? (s/n) ";
    std::cin >> inclSimb;

    bool usarLetra = (inclLetra == 's' || inclLetra == 'S');
    bool usarNum = (inclNum == 's' || inclNum == 'S');
    bool usarSimb = (inclSimb == 's' || inclSimb == 'S');

    std::string passworld = gerarPassw(tamanho, usarLetra, usarNum, usarSimb);

    std::cout << "\n Sua senha gerada e: "<< passworld << "\n";

    return 0;
}