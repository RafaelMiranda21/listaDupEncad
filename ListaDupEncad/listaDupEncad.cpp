#include<iostream>
#include "listaDupEncad.cpp"
using namespace std;

class Lista
{
	private:
	 Celula *head;
    public:
     Lista()
     {
      head = new celula(0); 
      head -> prev = head -> next = head;
     }
    
    bool listaVazia()
    {
		return head -> next == head;
	}
	
	void Inserir(Celula * z)
	{
		celula * x;
		
		x = head -> next;
		
		while(x != head && z -> key >= x-> key)
		{
			x = x-> next;
		}
		
		z-> next = x;
		z -> prev = x -> prev;
		z -> next -> prev = z; //x -> prev = z;
		z -> prev -> next = z;
	}
	
	Celula * Remover(Celula * x) //verificar se o endereço e valido
	{
		x -> prev -> next = x-> next;
		x -> next -> prev = x -> prev;
		return x;
	}
    
    Celula * Consultar(int info)
    {
		Celula * x;
		x = head;
		
		while(x!=head && info > x-> key)
		   x = x -> next;
		if(x != head && x -> key == info)
		{
			return x;
		}   
		    return head;
	}
	
	void Listar()
	{
		Celula * x;
		x = head -> next;
		while(x != head)
		{
		 cout<< x -> key<<" ";
	    }
	    cout<<"\nFIM\n";
	}
	
	~Lista() //nao e necessario em PO ja faz automatico
	{
      Celula * x;
      while(!listaVazia())
      {
        x = remover(head -> next);
      }
        delete x; 
    }
};    


