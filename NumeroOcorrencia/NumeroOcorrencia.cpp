// NumeroOcorrencia.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <vector>

long NumeroOcorencia(std::vector<int> vetor, long ocorrencia) {
	int nOcorrencia = 0;
	for (int i = 0; i < vetor.size(); i++) {
		if (vetor[i] == ocorrencia)
		{
			nOcorrencia++;
		}
	}
	return nOcorrencia;

}

int main()
{
	std::vector<int> vet = {2,3,4,3,2,1};
    std::cout << NumeroOcorencia(vet, 3) << "\n";
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
