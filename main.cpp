/*Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (variáveis A, B, C e D). Ao final o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado da soma (variável S) do segundo com o quarto valor.*/

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int const n = 4;
int registros = -1;

typedef struct valores tabval;
struct valores
{
  int valores [n];
};

tabval tab1;

int lerValores ();
void novoValor ();
void exibir ();
void controle ();

int main ()
{
  setlocale (LC_ALL, "Portuguese");
  system ("clear");
  controle ();  
  return 0;
}

int lerValores ()
{
  for (int i = 0; i < n-1; i++)
  {
    int valor;
    cout << "\nDigite um valor.: ";
    cin >> valor;
    return valor;
  }
  
}

void novoValor ()
{
  registros ++;
  int val = 0;
  if (registros > n - 1)
  {
    system ("clear");
    cout << "\nLimite de Valores atingidos!" << endl;
    system ("sleep 3");
    return;
  }
  
  for (int i = 0; i < n; i++)
  {
    val = lerValores ();
    tab1.valores [registros] = val;
    registros ++;
  }
  
}

void exibir ()
{
  int produtoP = 0, soma = 0;
  system ("clear");
  cout << "\n***   Exibir Resultados   ***\n\n";
  produtoP = tab1.valores [0] * tab1.valores [2];
  soma = tab1.valores [1] + tab1.valores [3];
  cout << "O Produto entre o 1º e 3º Valor é: " << produtoP;
  cout << "\nA soma entre o 2º e 4º Valor é...: " << soma << endl;
  system ("sleep 5");
}

void controle ()
{
  int opcMenu = 0;
  while (true)
  {
    system ("clear");
    cout << "\n***   Menu Principal   ***\n";
    cout << "\nSelecione a opção desejada.:";
    cout << "\n1 - Ler Valores \n2 - Exibir \n3 - Sair \n\nOpção: ";
    cin >> opcMenu;

    switch (opcMenu)
    {
      case 1: novoValor (); break;
      case 2: exibir (); break;
      case 3: exit (0); break;
    }
  }


}



