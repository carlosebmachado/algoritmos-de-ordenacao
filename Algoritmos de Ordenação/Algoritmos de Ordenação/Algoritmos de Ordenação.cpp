#include "pch.h"
#include "sort.h"
#include "vetor.h"
#include <iostream>

using namespace std;

int main(void)
{
	int vetor[500], n = sizeof(vetor) / sizeof((vetor)[0]);
	int opcao;
	bool sair = 0;
	
	setlocale(LC_ALL, "Portuguese");

	while (!sair) {

		cout << "Selecione o algoritmo de ordenação: \n1 - Bubblesort\n2 - Selectionsort\n3 - Insertionsort\n4 - Quicksort\n5 - Shellsort\n6 - Mergesort\n7 - Sair\n\nOpção: ";
		cin >> opcao;

		system("cls");
		
		preencher_vetor(vetor, n);

		if (opcao != 7) {
			cout << "Vetor sem ordenação:\n\n";
			escrever_vetor(vetor, n);
		}

		switch (opcao)
		{
		case 1:
			bubblesort(vetor, n);
			break;
		case 2:
			selectionsort(vetor, n);
			break;
		case 3:
			insertionsort(vetor, n);
			break;
		case 4:
			quicksort(vetor, 0, n - 1);
			break;
		case 5:
			shellSort(vetor, n);
			break;
		case 6:
			mergesort(vetor, 0, n - 1);
			break;
		case 7:
			sair = 1;
			break;
		default:
			cout << "Opção inválida.\n\n";
		}
		if (!sair && opcao > 0 && opcao < 8) {
			cout << "Vetor ordenado:\n\n";
			escrever_vetor(vetor, n);
			system("pause");
			system("cls");
		}
	}

	return 0;
}