/*  PUSH – Insere um elemento na pilha.
    POP – Retira um elemento da pilha.*/
#include<iostream>
using namespace std;
int remocao(int &v, int &n, int vet[]);
int insencao(int &tamanho, int n,int vet[]);
int push(int vet[]);
void  pop(int vet[]);
int  top=-1,tam;
int main()
{
    int tamanho=0,n,i=0;
    int esc=0;
    cout<<"informe  o tamanho da pilha"<<endl;
    cin>>n;
    tam=n;
    int vet[n];
    while(esc!=5)
    {
        cout<<"informe o que deseja fazer. para: PUSH digite 1, para POP 2,  inserção digite 3, remocao 4 e 5 para encerrar"<<endl;
        cin>>esc;
        cout<<"ultimo numero: "<<vet[top]<<endl;
        switch (esc)
        {
            case 1:
                push(vet);
                break;
            case 2:
                pop(vet);

                break;
            case 3:
                 insencao(tamanho, n, vet);

                break;

            case 4:
                remocao(i, n,vet);

                break;


        }


    }

}
int push(int vet[])
{
    int num;
    if(top==tam-1)
    {
        cout<<"pilha cheia: "<<endl;

    }
    else
    {
        cout<<"insira o elemento "<<endl;
        cin>>num;
        vet[top]=num;
        top=top+1;
        cout<<"ultimo numero: "<<vet[top]<<endl;
    }

}
void pop (int vet[])
{
    int num;
    if (top == - 1)
    {
        cout<<"Pilha vazia\n";
    }
    else
    {
        num = vet[top];
        cout<<vet[top];
        cout<<"Elemento retirado "<<num<<endl;
        top = top - 1;
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
