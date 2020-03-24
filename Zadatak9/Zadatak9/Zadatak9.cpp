#include <iostream>
#include "VremenskaPrognoza.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

VremenskaPrognoza::VremenskaPrognoza(int p[])
{
	copy(p, p + 30, m_nPolje);
}

float VremenskaPrognoza::SrednjaMjesecnaTemperatura()
{
	float fSrednja;
	int nSuma = 0;
	for (int i = 0; i < 30; i++)
	{
		nSuma = nSuma + m_nPolje[i];
	}
	fSrednja = nSuma / 30.;
	return fSrednja;
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

	VremenskaPrognoza Sijecanj(nSijecanj);
	cout << "Srednja mjesecna temperatura sijecnja je: " << Sijecanj.SrednjaMjesecnaTemperatura() << endl;
	VremenskaPrognoza Veljaca(nVeljaca);
	cout << "Srednja mjesecna temperatura veljace je: " << Veljaca.SrednjaMjesecnaTemperatura() << endl;
	VremenskaPrognoza Ozujak(nOzujak);
	cout << "Srednja mjesecna temperatura je: " << Ozujak.SrednjaMjesecnaTemperatura() << endl;
	VremenskaPrognoza Travanj(nTravanj);
	cout << "Srednja mjesecna temperatura je: " << Travanj.SrednjaMjesecnaTemperatura() << endl;

	/* for (int i = 0; i < 30; i++)
	{
		VremenskaPrognoza Sijecanj = nSijecanj[i];
	}
	for (int i = 0; i < 30; i++)
	{
		VremenskaPrognoza Veljaca = nVeljaca[i];
	}
	for (int i = 0; i < 30; i++)
	{
		VremenskaPrognoza Ozujak = nOzujak[i];
	}
	for (int i = 0; i < 30; i++)
	{
		VremenskaPrognoza Travanj = nTravanj[i];  
	} */
	

}