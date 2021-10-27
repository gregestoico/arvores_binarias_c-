#include <iostream>
#include <stdio.h>

using namespace std;

class No
{
	private:
		No *esq, *dir;
		int chave;

	public:
		No(int chave)
			{
				this -> chave = chave;
				esq = NULL;
				dir = NULL;
			}

		int getChave()
			{
				return chave;
			}

		No* getEsq()
			{
				return esq;
			}

		No* getDir()
			{
				return dir;
			}

		void setEsq(No *no)
			{
				esq = no;
			}

                void setDir(No *no)
                        {
                                dir = no;
                        }
};

class Arvore
{
	private:
		No *raiz;

	public:
		Arvore()
		{
			raiz = NULL;
		}

		int getRaiz()
		{
			return raiz -> getChave();
		}

		void adicionarRaiz(int chave)
		{
			if(raiz == NULL)
				raiz = new No(chave);
			else
				printf("Já há um elemento como raiz da árvore\n");
		}

};

int main()
{
	Arvore arvore;
	arvore.adicionarRaiz(15);
	printf("A raiz da árvore é: %d\n", arvore.getRaiz());
	arvore.adicionarRaiz(16);
	return 0;
}
