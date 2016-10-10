#include"string.h"
#include"stdio.h"
#ifndef _BOOK_C_
#define _BOOK_C_



class Book
{
	char* author;
	int year;
	char* name;
public:

	Book(const char* author = " ",const int year = 0, const char* name = " ")
	{
		int i = strlen(author);
		int j = strlen(name);
		this->year=year;
		this->author= new char[i+1];
		this->name= new char [j+1];
		for(int l=0;l<=i;l++)
			this->author[l]=author[l];
		for(int l=0;l<=j;l++)
			this->name[l]=name[l];
	}

	Book(const Book& a);
	void CopyIndex(const Book*);
	Book operator =(const Book& a);

	

	//сравнивает this с book по названию книги 
	bool cmpA(Book book);
	bool cmpN(Book book);
	bool cmpY(Book book);
	//

	//переписать в книге автора/имя/год
	void WreatA(const char*  );
	void WreatN(const char* );
	void WreatY(int );
	//

	void Print();

	// чтение автора/имени/год книги
	char Author(int i);
	char Name(int i);
	int Year();
	//

	~Book();
};


#endif