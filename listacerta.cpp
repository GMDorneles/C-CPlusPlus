/*aça um programa na linguagem C++ que implemente uma Lista por meio de um vetor de inteiros, de tamanho n,
alocado dinamicamente.
 A implementação deverá contemplar as operações de busca, inserção (final da Lista) e remoção de elementos na lista.
 Para isso, o programa deverá apresentar um menu para que o usuário possa escolher a operação desejada.
 Após cada operação realizada a Lista deverá ser apresentada na tela.
Obs: Quando houver a remoção de um elemento, exceto o último, todos os elementos subsequentes deverão ser movidos
para uma posição à esquerda.*/
#include<iostream>
using namespace std;
int remocao(int &v, int &n, int vet[]);
int busca(int &v, int n, int vet[]);
int insencao(int &tamanho, int n,int vet[]);
int main()
{
    int tamanho=0, num,n,i=0;
    int esc=0;
    cout<<"informe  o tamanho da lista"<<endl;
    cin>>n;
    int vet[n];
    while(esc!=4)
    {
        cout<<"informe o que deseja fazer. inserção digite 1, para busca 2, remocao 3 e 4 para encerrar"<<endl;
        cin>>esc;
        switch (esc)
        {
            case 1:
                insencao(tamanho, n, vet);
                break;
            case 2:
                 cout<<"informe o valor procurado"<<endl;
                 cin>>num;
                busca(i, n,vet);
                i=busca(i, n,vet);
                cout<<"o valor está na posiçao: "<<i<<endl;

                break;
            case 3:
               remocao(i, n,vet);
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
    int i=0;

    while(i<=n || vet[i]!=v)
    {

        if(i<=n)
        {
            return i;
        }
            else
        {
            cout<<"não está na lista"<<endl;
        }
        i++;

    }

}
int remocao(int &v, int &n, int vet[])
    {
        int j=0,i;
        cout<<"informe o valor procurado"<<endl;
        cin>>v;
        while(vet[j]!=v && j<n)
        {
            j++;
        }
        if(vet[j]==v)
        {
            while(j<n)
            {
                vet[j]=vet[j+1];
                j++;
            }

        }
         cout<<"lista alterada: "<<endl;
        for(j=0;j<n-1;j++)
        {
            cout<<vet[j]<<endl;
        }
    }



