
#include <iostream>
#include "Pravokutnik.h"

using namespace std;

Pravokutnik::Pravokutnik(int sa, int sb)
{
	m_nStranicaA = sa;
	m_nStranicaB = sb;
}

int Pravokutnik::IspisiOpseg()
{
	int nOpseg;
	nOpseg = 2 * (m_nStranicaA + m_nStranicaB);
	return nOpseg;
}

int Pravokutnik::IspisiPovrsinu()
{
	int nPovrsina;
	nPovrsina = m_nStranicaA * m_nStranicaB;
	return nPovrsina;
}

Pravokutnik::~Pravokutnik()
{

}


int main()
{
}
