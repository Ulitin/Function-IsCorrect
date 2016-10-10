#include"Book.h"

Book::Book(const Book& a)
{
	int i = strlen(a.author);
	int j = strlen(a.name);
	this->year=a.year;
	this->author= new char[i+1];
	this->name= new char [j+1];
	for(int l=0;l<=i;l++)
		this->author[l]=a.author[l];
	for(int l=0;l<=j;l++)
		this->name[l]=a.name[l];
	
}


void Book::CopyIndex(const Book* c)
{
	Book a=*c;
	this->year=a.year;
	int i = strlen(a.author);
	int j = strlen(a.name);
	delete[] this->author;
	delete[] this->name;
	this->author= new char[i+1];
	this->name= new char [j+1];
	for(int l=0;l<=i;l++)
		this->author[l]=a.author[l];
	for(int l=0;l<=j;l++)
		this->name[l]=a.name[l];
}

void Book:: Print()
{
	printf("Author book - %s  ",author);
	printf("  Year book - %i  ",year);
	printf("  Name book - %s  ", name);
}

Book Book::operator =(const Book& a)
{
	int i = strlen(a.author);
	int j = strlen(a.name);
	delete[] this->author;
	delete[] this->name;
	this->year=a.year;
	this->author= new char[i+1];
	this->name= new char [j+1];
	for(int l=0;l<=i;l++)
		this->author[l]=a.author[l];
	for(int l=0;l<=j;l++)
		this->name[l]=a.name[l];
	return *this;
}

bool Book:: cmpA(Book book)
{
	int l=strlen(author);
	int r=strlen(book.author);
	if(l<=r)
		l=r;
	for(int s=0; s<l; s++)
		if(author[s]>book.author[s])
			return true;
		else
			if(author[s]<book.author[s])
				return false;
	return false;
}

bool Book:: cmpN(Book book)
{
	int l=strlen(name);
	int r=strlen(book.name);
	if(l<=r)
		l=r;
	for(int s=0; s<l; s++)
		if(name[s]>book.name[s])
			return true;
		else
			if(author[s]<book.author[s])
				return false;
	return false;
}

bool Book::cmpY(Book book)
{
	if(year>book.year)
		return true;
	return false;
}

char Book:: Author(int i )
{
	int q=strlen(author);
	if(i<=q)
		return author[i];
	else
	{
		printf("\n");
		printf("going beyond 'author'");
	}
	return 0;
}

char Book:: Name(int i)
{
	int q=strlen(name);
	if(i<=q)
		return name[i];
	else
	{
		printf("\n");
		printf("going beyond 'name'");
	}
	return 0;
}

int Book:: Year()
{
	return year;
}

void Book:: WreatA(const char* str )
{
	delete[] author;
	int i=strlen(str);
	author= new char[i+1];
	for(int j=0; j<=i; j++)
		author[j]=str[j];
}

void Book:: WreatN(const char* str )
{
	delete[] name;
	int i=strlen(str);
	name= new char[i+1];
	for(int j=0; j<=i; j++)
		name[j]=str[j];
}

void Book:: WreatY(int i )
{
	year=i;
}


Book::~Book()
{
	delete [] author;
	delete [] name;
}

