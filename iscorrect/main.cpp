#include"stdio.h"

struct Str 
{
	char letter;
	Str* next;
};

void DeleteElement(Str* first_el, Str** element)
{
	if(first_el!=0)
	{
		if(first_el->next!=0)
		{
			while(first_el->next!=0)
			{
				(*element)=first_el;
				first_el=first_el->next;
			}
			(*element)->next=0;
			delete first_el;
		}
		else
		{
			(*element)->letter=' ';
		}
	}
}


bool isCorrect(char* string)
{
	char simvol;
	Str* element;
	Str* first_el;
	element=new Str;
	first_el=new Str;
	int i=0;
	first_el=element;
	element->letter=' ';
	element->next=0;
	for(int j=0; string[j]!=0; j++)
	{		
		while((string[j]=='(')||(string[j]=='{')||(string[j]=='['))
		{		
			if(i!=0)
			{
				element->next= new Str;
				element=element->next;	
				element->letter=string[j];
				element->next=0;
			}
			else
			{
				element->letter=string[j];
			}
			i++;
			j++;
		}
		simvol='0';
		if(string[j]==']')
		{
			simvol='[';
		}	
		if(string[j]=='}')
		{
			simvol='{';
		}
		if(string[j]==')')
		{
			simvol='(';
		}
		if(element->letter==simvol)
		{
			DeleteElement(first_el,&element);
			i--;
		}
		else
		{
			return false;
		}
	}
	delete first_el;
	return true;
}




void main()
{
	char* s1 = "([]{})";
	char* s2 = "{}()[]";
	char* s3 = "{[()]}";
	char* s4 = ")]}";
	char* s5 = "{[(";
	char* s6 = "";
	char* s7 = "{[(){]}";
	char* s8 = "{[({([{}()])}{})]}";
	char* s9 = "{[]}}";
	char* s10 = "{[({([{{]}()])}{})]}";
	if(isCorrect(s1))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s2))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s3))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s4))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s5))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s6))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s7))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s8))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s9))
		printf("Good!\n");
	else
		printf("Bad!\n");
	if(isCorrect(s10))
		printf("Good!\n");
	else
		printf("Bad!\n");

}
