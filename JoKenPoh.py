from time import sleep
from random import randint
while True:
    computador = randint(0,2)
    itens = ["PEDRA", "PAPEL", "TESOURA"]
    print("Suas Opcoes: ")
    print("[0] PEDRA")
    print("[1] PAPEL")
    print("[2] TESOURA")
    jogador = int(input("Qual a sua jogada: "))
    print("JO")
    sleep(1)
    print("KEN")
    sleep(1)
    print("POHH!!")
    print("-=-" * 15)
    print(f"computador jogou {itens[computador]} ".upper())
    print(f"Voce jogou {itens[jogador]} ".upper())
    print("-=-" * 15)
    if(computador == 0):
        if(jogador == 0):
            print("EMPATE!!!")
        elif(jogador == 1):
            print("JOGADOR GANHOU!!!")
        elif(jogador == 2):
            print("COMPUTADOR GANHOU!!!")
        else:
            print("JOGADA INVALIDA!!!")
    elif(computador == 1):
        if(jogador == 0):
            print("COMPUTADOR GANHOU!!!")
        elif(jogador == 1):
            print("EMPATE!!!")
        elif(jogador == 2):
            print("JOGADOR GANHOU!!!")
        else:
            print("JOGADA INVALIDA!!!")
    elif(computador == 2):
        if(jogador == 0):
            print("JOGADOR GANHOU!!!")
        elif(jogador == 1):
            print("JCOMPUTADOR GANHOU!!!")
        elif(jogador == 2):
            print("EMPATE!!!")
        else:
            print("JOGADA INVALIDA!!!")
    print()
    op = str(input('Quer jogar novamente? '))
    if op in 'Nn':
        break