#pragma once
#include <iostream>

using namespace std;

class Pravokutnik
{
	public:
		int m_nStranicaA;
		int m_nStranicaB;

		int IspisiOpseg();
		int IspisiPovrsinu();

		Pravokutnik(int sa, int sb);
		~Pravokutnik();
		
};

