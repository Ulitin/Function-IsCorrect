#include"Library.h"


Library:: Library (const Library& lib)
{
	this->size=lib.size;
	int i = strlen(lib.name);
	this->name= new char [i+1];
	for(int j=0; i<=j; j++)
		this->name[j]=lib.name[j];
	this->book= new Book [lib.size];
	for(int j=0; j<lib.size ; j++)
		this->book[j].CopyIndex(&lib.book[j]);
}

Library Library:: operator =(const  Library& lib)
{
	this->size=lib.size;
	int i = strlen(lib.name);
	delete[] this->name;
	this->name= new char [i+1];
	for(int j=0; i<=j; j++)
		this->name[j]=lib.name[j];
	delete[] this->book;
	this->book= new Book [lib.size];
	for(int j=0; j<lib.size ; j++)
		this->book[j].CopyIndex(&lib.book[j]);
	return *this;
}

void Library:: Sort(const int sort)
{
	Book box;
	if(sort==2)
	{
		for(int q=0; q<size; q++)
			for(int z=q+1; z<size; z++)
				if(book[q].cmpY(book[z]))
				{
					box=book[q];
					book[q]=book[z];
					book[z]=box;
				}
	}
	if(sort==3)
	{
		for(int q=0; q<size; q++)
			for(int z=q+1; z<size; z++)
			if(book[q].cmpN(book[z]))
				{
					box=book[q];
					book[q]=book[z];
					book[z]=box;
				}
	}

	if(sort==1)
	{
		for(int q=0; q<size; q++)
			for(int z=q+1; z<size; z++)
			if(book[q].cmpA(book[z]))
				{
					box=book[q];
					book[q]=book[z];
					book[z]=box;
				}
	}

}




