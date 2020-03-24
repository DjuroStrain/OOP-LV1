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

}

