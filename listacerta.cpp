/*a�a um programa na linguagem C++ que implemente uma Lista por meio de um vetor de inteiros, de tamanho n,
alocado dinamicamente.
 A implementa��o dever� contemplar as opera��es de busca, inser��o (final da Lista) e remo��o de elementos na lista.
 Para isso, o programa dever� apresentar um menu para que o usu�rio possa escolher a opera��o desejada.
 Ap�s cada opera��o realizada a Lista dever� ser apresentada na tela.
Obs: Quando houver a remo��o de um elemento, exceto o �ltimo, todos os elementos subsequentes dever�o ser movidos
para uma posi��o � esquerda.*/
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
        cout<<"informe o que deseja fazer. inser��o digite 1, para busca 2, remocao 3 e 4 para encerrar"<<endl;
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
                cout<<"o valor est� na posi�ao: "<<i<<endl;

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
            cout<<"n�o est� na lista"<<endl;
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



