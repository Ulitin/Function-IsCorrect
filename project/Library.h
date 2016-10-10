#ifndef _Library_C_
#define _Library_C_
#include"Book.h"

class Library
{
	char* name;
	Book* book;
	int size;

public:
	Library(const char* name = " " , const Book* book = 0, const int size = 0)
	{
		this->size=size;
		int i = strlen(name);
		this->name= new char [i+1];
		for(int j=0; j<=i; j++)
			this->name[j]=name[j];
		this->book= new Book [size];
		for(int j=0; j<size ; j++)
			this->book[j].CopyIndex(&book[j]);
	}

	Library (const Library& lib);

	Library operator =(const  Library& lib);

	void Library:: InputBook(const Book a, const int sort = 1)
	{
		size++;
		Book* b;
		b = new Book [size];
		int i;
		for(i=0; i<(size-1); i++)
			b[i]= book[i];
		b[i]=a;
		delete[] book;
		book=b;
		(*this).Sort(sort);
	}

	void Sort(const int sort);// 1- сортировка по автору 2- сортировка по дате 3- сортировка по названию
	
	void Print(int i = 0)	// 0-вывести все книги, а так выводит книгу номер которой написан 
	{
		if((i>=0)&&(i<size))
			book[i].Print();
		else
			for(int j=0; j<size; j++)
				book[j].Print();
	}

	~Library()
	{
		delete[] book;
		delete[] name;
	}
};
#endif