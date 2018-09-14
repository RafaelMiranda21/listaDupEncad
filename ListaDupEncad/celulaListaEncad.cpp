#include<iostream>
using namespace std;

class Celula
{
	private:
	 int key;
	 Celula * next;
	 Celula * prev;
	 
	public: 
	 Celula(int info)
	 {
		 key = info;
	 }
};
