
#include <iostream>
#include "VremenskaPrognoza.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

VremenskaPrognoza::VremenskaPrognoza(int p)
{
	m_nPolje[30] = p;
}

VremenskaPrognoza::~VremenskaPrognoza()
{

}

int main()
{
	srand(time(NULL));
	int nSijecanj[30];
	for (int i = 0; i < 30; i++)
	{
		nSijecanj[i] = rand() % 30 + 1;
	}
	int nVeljaca[30];
	for (int i = 0; i < 30; i++)
	{
		nVeljaca[i] = rand() % 30 + 1;
	}
	int nOzujak[30];
	for (int i = 0; i < 30; i++)
	{
		nOzujak[i] = rand() % 30 + 1;
	}
	int nTravanj[30];
	for (int i = 0; i < 30; i++)
	{
		nTravanj[i] = rand() % 30 + 1;
	}
}

