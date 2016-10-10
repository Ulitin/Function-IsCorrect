#include"Library.h"
#include <Windows.h>

void main()
{
	Book test;
	printf("Hi! This is test my class. Let's go!\n");
	Sleep(2000);
	printf("It is book.\n");
	test.Print();
	printf("\n");
	Sleep(3500);
	printf("Book is empty, but my programm is fill it.\n");
	test.WreatA("Programm");
	test.WreatN("Paper");
	test.WreatY(2016);
	Sleep(4000);
	test.Print();
	printf("\n");
	Sleep(3000);
	Book t1("Klaxon",2007,"Golden Skans");
	Book t2("Twenty one pilots",2016,"Heathens");
	Book t3("Plazma",2000,"Take My Love");
	Book t4("Twenty one pilots",2016,"Stressed");
	Book t5("New politics",2010,"Yeah Yeah Yeah");
	Book t6("OK Go",0,"Let it rain");
	Book t7("IOWA",2015,"140");
	Book t8("Pacito",2006,"");
	Book t9("Nan",45612,"Take");
	Book t10("",45612,"140");

	printf("Now program creates a library and fill it.\n");
	Library test2;
	test2.InputBook(t1);
	test2.InputBook(t2);
	test2.InputBook(t3);
	test2.InputBook(t4);
	test2.InputBook(t5);
	test2.InputBook(t6);
	test2.InputBook(t7);
	test2.InputBook(t8);
	test2.InputBook(t9);
	test2.InputBook(t10);
	Sleep(1000);
	printf("\n");
	printf("\n");
	printf("Program sort on author.\n");
	for(int i=0; i<10; i++)
	{
		test2.Print(i);
		printf("\n");

	}
	test2.Sort(2);
	Sleep(6000);
	printf("\n");
	printf("\n");
	printf("Program sort on year.\n");
	for(int i=0; i<10; i++)
	{
		test2.Print(i);
		printf("\n");

	}
	test2.Sort(3);
	Sleep(6000);
	printf("\n");
	printf("\n");
	printf("Program sort on name book.\n");
	for(int i=0; i<10; i++)
	{
		test2.Print(i);
		printf("\n");

	}
}