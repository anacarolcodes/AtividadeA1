#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[100];
	char dataNascimento[11];
	char cpf[12];
} Pessoa;

void imprimirPessoa(Pessoa *p) {
	printf("Nome: %s\n", p->nome);
	printf("Data de nascimento: %s\n", p->dataNascimento);
	printf("CPF: %s\n", p->cpf);
}

int main() {
	Pessoa pessoa;
    
    // inserindo os dados 
	strcpy(pessoa.nome, "João Silva");
	strcpy(pessoa.dataNascimento, "01/01/1990");
	strcpy(pessoa.cpf, "12345678901");
    
    // criando um ponteiro para a estrutura
	Pessoa *ponteiroPessoa = &pessoa;
    
    //chamando a funçao para imprimir os dados
	imprimirPessoa(ponteiroPessoa);

	return 0;
}
