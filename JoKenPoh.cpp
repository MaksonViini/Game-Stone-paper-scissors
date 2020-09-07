#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    char novamente;
    int jogador, comp;
    novamente = 'S';
    while (novamente == 's' || novamente == 'S') {
    srand(time(NULL));
    comp = rand() % 2;
    cout << "[0] Para PEDRA" << endl;
    cout << "[1] Para PAPEL" << endl;
    cout << "[2] Para TESOURA" << endl;
    cout << "Faca sua escolha: ";
    cin >> jogador;
    Sleep(500);
    cout << "JO" << endl;
    Sleep(500);
    cout << "KEN" << endl;
    Sleep(500);
    cout << "POH!!!" << endl;
    if(jogador == 0) {
        if(comp == 0) {
            cout << "Computador jogou: " << comp << endl;
            cout << "EMPATE "<< endl;
         }
        if(comp == 1) {
            cout << "Computador jogou: " << comp << endl;
            cout << "COMPUTADOR GANHOU" << endl;
        }
        if(comp == 2) {
            cout << "Computador jogou: " << comp << endl;
            cout << "JOGADOR GANHOU" << endl;
        }
    }
    if(jogador == 1) {
        if(comp == 0) {
            cout << "Computador jogou: " << comp << endl;
            cout << "JOGADOR GANHOU" << endl;
        }
        if(comp == 1) {
            cout << "Computador jogou: " << comp << endl;
            cout << "EMPATE" << endl;
        }
        if(comp == 2) {
            cout << "Computador jogou: " << comp << endl;
            cout << "COMPUTADOR GANHOU" << endl;
        }
    }
    if(jogador == 2) {
        if(comp == 0) {
            cout << "Computador jogou: " << comp << endl;
            cout << "COMPUTADOR GANHOU" << endl;
        }
        if(comp == 1) {
            cout << "Computador jogou: " << comp << endl;
            cout << "JOGADOR GANHOU" << endl;
        }
        if(comp == 2) {
            cout << "Computador jogou: " << comp << endl;
            cout << "EMPATE" << endl;
        }
    }
    cout << "OBRIGADO POR JOGAR" << endl;
    cout << "Quer jogar novamente???" << endl;
    cin >> novamente;
    }
}
