//
// Created by djalma cunha on 16/09/2018.
//

#ifndef HOTEL_QUARTO_HPP
#define HOTEL_QUARTO_HPP
#include <iostream>
#include "Pessoa.hpp"
#include "Configuracoes.hpp"
<<<<<<< HEAD
=======
#include "Senha.hpp"
>>>>>>> e37bbf4ca020fbae6247235562b6fa37cfdb5204
using namespace std;
/*

* Edit Caio:Classe para cadastrar os quartos assim depois que cadastrar ,
 dependendo do tipo de quarto que a pessoa quiser só precisaremos chamar a classe.
 */
class Quarto: public Pessoa {
public:
//a funcao quarto serve apenas para iniciar tudo zerado
    Quarto() {
<<<<<<< HEAD
       
    }
/*
 * a laco é um laco de repeticao comum para todas as categorias de quarto e elas
 * dao valor por pessoa para o quarto levando em conta se sao ou nao criancas
 */

private:

  
=======
       valor_diaria = -1;
       nPessoas = -1;
       estado = false;
       tipoQuarto = "-1";
       descricao = "-1";
       numero = -1;
       andar = -1;
    }

    //para adcionar quartos, porem os unicos que pode fazer isso é o gerente e o dono
    void adcionaQuarto(){
    if(checaNivel() == 1){
        puts("Tipo do quarto");
        cin>>tipoQuarto;
        puts("Descrição");
        cin>>descricao;
        puts("Valor da diaria");
        cin>>valor_diaria;
    }
    else{
        puts("voce nao tem permissao para adcionar quartos");
    }

}


private:

    int checaNivel(){
        Senha var;
        return var.confereSenha();
}
>>>>>>> e37bbf4ca020fbae6247235562b6fa37cfdb5204

    float valor_diaria;
    int nPessoas;
    bool estado; //Disponivel ou Ocupado;
<<<<<<< HEAD
    String tipoQuarto;
    String descricao;//Exemplo:Quarto de frente pro mar
=======
    string tipoQuarto;
    string descricao;//Exemplo:Quarto de frente pro mar
>>>>>>> e37bbf4ca020fbae6247235562b6fa37cfdb5204
    int numero;
    int andar;
    //Fazer um List que armazena os quartos cadastrados,

};


#endif //HOTEL_QUARTO_HPP
