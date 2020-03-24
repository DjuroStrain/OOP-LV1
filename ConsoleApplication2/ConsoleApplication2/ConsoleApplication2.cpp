#include <iostream>
#include "KompleksniBroj.h"

KompleksniBroj::KompleksniBroj(int x, int y)
{
	m_nx = x;
	m_ny = y;
}

void KompleksniBroj::IspisiKompleksniBroj()
{
	cout << m_nx << " + " << m_ny << "i" << endl;
}

KompleksniBroj::~KompleksniBroj()
{

}


int main()
{
	KompleksniBroj k1(2, 3);
	k1.IspisiKompleksniBroj();
	KompleksniBroj k2(1, 5);
	k2.IspisiKompleksniBroj();
	KompleksniBroj k3(10, 10);
	k3.IspisiKompleksniBroj();
	KompleksniBroj k4(1, 1);
	k4.IspisiKompleksniBroj();
	KompleksniBroj k5(6, 6);
	k5.IspisiKompleksniBroj();
}

