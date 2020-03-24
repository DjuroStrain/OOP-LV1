
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
	Pravokutnik* p1 = new Pravokutnik(2, 3);
	cout << "Opseg pravokutnika je: " << p1->IspisiOpseg() << endl;
	cout << "Povrsina pravokutnika je: " << p1->IspisiPovrsinu() << endl;
	delete p1;

	Pravokutnik* p2 = new Pravokutnik(6, 6);
	cout << "Opseg pravokutnika je: " << p2->IspisiOpseg() << endl;
	cout << "Povrsina pravokutnika je: " << p2->IspisiPovrsinu() << endl;
	delete p2;

	Pravokutnik* p3 = new Pravokutnik(12, 15);
	cout << "Opseg pravokutnika je: " << p3->IspisiOpseg() << endl;
	cout << "Povrsina pravokutnika je: " << p3->IspisiPovrsinu() << endl;
	delete p3;
}
