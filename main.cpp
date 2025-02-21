#include <iostream>
#include <time.h> 
#include "biblioteca.hpp"
using namespace std;

int main()
{
    int escolha, retorno;
	const int tamanho = 3; 
	Livro livros [tamanho];
	Usuario usuarios[tamanho];
	Multa multas[tamanho];
	Emprestimo emprestimos[tamanho];
	Usuario livrosEmprestados[2];

    cout << "-----------------------" << endl;
    cout << "Bem vindo a biblioteca!" << endl;
    cout << "-----------------------" << endl;
    do{
    cout << "(1) Cadastrar um livro." << endl;
    cout << "(2) Cadastrar um usuário." << endl;
    cout << "(3) Empréstimo e devolução." << endl;
    cout << "(4) Pesquisar livros." << endl;
    cout << "(6) Sair" << endl;
    cin >> escolha;
    
    switch (escolha){
        case 1:
            system("clear");
            cadastrarLivro(livros, tamanho);
            cout << endl <<"Digite 1 para voltar ao menu: ";
            cin >> retorno;
            system("clear");
            break;
        case 2:
            system("clear");
            cadastrarUsuario(usuarios, tamanho);
            cout << endl <<"Digite 1 para voltar ao menu: ";
            cin >> retorno;
            system("clear");
            break;
        case 3:
            system("clear");
            emprestarLivro(livros, usuarios, emprestimos, multas, tamanho,
            time(nullptr), 2.0);
            cout << endl << "Digite 1 para voltar ao menu: ";
            cin >> retorno;
            system("clear");
            break;
        case 4:
            system("clear");
            cout << "----------------" << endl;
            cout << "Pesquisar livros" << endl;
            cout << "----------------" << endl;
            cout << "(1) Listar livros por título." << endl;
            cout << "(2) Listar livros por autor." << endl;
            cout << "(3) Listar livros por ano de publicação." << endl;
            cout << "(4) Listar livros por número de identificação." << endl;
            cin >> escolha;
            pesquisarLivro(escolha, livros, usuarios, emprestimos, tamanho);
            cout << endl <<"Digite 1 para voltar ao menu: ";
            cin >> retorno;
            system("clear");
            break;
         case 6:
            // Sair do loop
            break;
        default:
            if (escolha != 6) // Verifica se não é o comando de sair
                cout << "Comando inválido!" << endl;
    }
    } while (escolha != 6);
    
    return 0;
}