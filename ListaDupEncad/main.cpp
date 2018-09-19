#include<iostream>
#include "celulaListaEncad.cpp"
#include "listaDupEncad.cpp"
using namespace std;

int main()
{
	Lista l;
	int opc , info;
	Celula * x;
	
	do{
		cout<<"(1) inserir \n";
		cout<<"(2) remover \n";
        cout<<"(3) listar \n";
        cout<<"(4) consultar \n";
        cout<<"(5) sair \n";
        cout<<"\nDigite a opcao \n";
        
        cin>>opc;
        
        switch(opc)
        {
			case 1:
			   cout<<"qual o valor a ser inserido? ";
			   cin>>info;
			   
			   x = new(mathrow) Celula(info);
			   
			   if(x!=NULL)
			   {
				   l.inserir(x);
				   cout<<"\n\nPronto!\n\n\n";
			   }
             
               else
                 cout<<"\n\nFalta memoria!\n\n\n";
                 
                 break;
             case 2:
                cout<<"qual o valor a ser removido ?";
                cin>>info;
                
                if(x != NULL)
                {
                 x = l.remover(x);
                 delete (x);    
                 cout<<"\n\nPronto\n\n\n";
			    }
			    
			    else 
			      cout<<"\n\n"<<info<<"nao consta na lista.\n\n\n";
			      
			      break;
			      
			   case 3:   
			      
         }
}
