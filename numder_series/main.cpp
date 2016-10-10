#include"stdio.h"

int* namber(int posled)
{
	int* a;
	int chisl_j;
 	a = new int [10];
  	for(int i=0; i<10; i++)
		a[i]=-1;
  
	while(posled>0)
	{
      
		for(int j=0; j<10; j++)
			if(j==(posled%10))
			{
				a[j]=1;
				chisl_j=j;
				j=15;
			}

		posled=posled-chisl_j;
		posled=posled/10;
	}
	return a;
}

bool proverca(int* a)
{
	int flag=1;
	for(int i=0; i<10; i++)
	{
		if(a[i]==(-1))
			flag=0;
	}
	if(flag==1)
		return true;
	else
		return false;
}

bool cmdDate(int* chislo, int posled )
{
	int* namber_in_posled;
	namber_in_posled=namber(posled);
	for(int i=0; i<10; i++)
	{
		if((chislo[i]!=namber_in_posled[i])&&(namber_in_posled[i]!=(-1)))
			chislo[i]=namber_in_posled[i];
	}
	delete[] namber_in_posled;
	if(proverca(chislo))
		return true;
	else
		return false;
}

int Posled(int input)
{
	if(input>0)
	{
		int chislo[10];
		int p;
		for(int i=0; i<10; i++)
			chislo[i]=-1;
		
		if (input==0)
		{
			printf("FALL!");
			return 0;
		}
			
		for(int i=1; i!=0; i++)
		{
			p=input*i;
			if(cmdDate(chislo, p))
			{
				printf("%i",p);
				i=-1;
			}
		}
	}
	else
	{
		printf("FALL!");
		return 0;
	}
}


void main()
{
	Posled(0);
	printf("\n");
	Posled(1);
	printf("\n");
	Posled(10);
	printf("\n");
	Posled(11);
	printf("\n");
	Posled(12);
	printf("\n");
	Posled(-1);
	printf("\n");
	Posled(1692);
	printf("\n");
	Posled(3);
	printf("\n");
}