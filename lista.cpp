/*aça um programa na linguagem C++ que implemente uma Lista por meio de um vetor de inteiros, de tamanho n,
alocado dinamicamente.
 A implementação deverá contemplar as operações de busca, inserção (final da Lista) e remoção de elementos na lista.
 Para isso, o programa deverá apresentar um menu para que o usuário possa escolher a operação desejada.
 Após cada operação realizada a Lista deverá ser apresentada na tela.
Obs: Quando houver a remoção de um elemento, exceto o último, todos os elementos subsequentes deverão ser movidos
para uma posição à esquerda.*/
#include<iostream>
using namespace std;
int busca(int &v, int n, int vet[]);
int insencao(int &tamanho, int n,int vet[]);
int main()
{
    int tamanho=0, num,n,i=0,re;
    int esc=0;
    cout<<"informe  o tamanho da lista"<<endl;
    cin>>n;
    int vet[n];
    while(esc!=4)
    {
        cout<<"informe o que deseja fazer. para inserção digite 1, para busca 2, remocao 3 e 4 para encerrar"<<endl;
        cin>>esc;
        switch (esc)
        {
            case 1:
                insencao(tamanho, n, vet);
                break;
            case 2:
                busca(i, n,vet);
                i=busca(i, n,vet);
                cout<<"o valor está na posição: "<<i<<endl;

                break;
        }


    }

}
int insencao(int &tamanho, int n,int vet[])
{
    int i;

    if(tamanho<n)
    {
        cout<<"informe o numero: "<<endl;
        cin>>vet[tamanho];
        tamanho++;
    }


        for(i=0;i<tamanho;i++)
     {
         cout<<vet[i]<<endl;
     }
}
int busca(int &v, int n, int vet[])
{
    int i;
    cout<<"informe o valor procurado"<<endl;
    cin>>v;
    while(i<=n && vet[i]!=v)
        i++;
    if(i<n)
    {
        return i;
    }
    else
    {
        cout<<"não está na lista"<<endl;
    }
}



