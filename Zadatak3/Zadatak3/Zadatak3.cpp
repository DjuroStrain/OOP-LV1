#include <iostream>
#include "Krug.h"

using namespace std;

Krug::Krug(float p)
{
	m_fPolumjer = p;
}

float Krug::IspisiOpseg()
{
	float fOpseg;
	fOpseg = 2 * m_fPolumjer * PI;
	return fOpseg;
}

float Krug::IspisiPovrsinu()
{
	float fPovrsina;
	fPovrsina = m_fPolumjer * m_fPolumjer * PI;
	return fPovrsina;
}

Krug::~Krug()
{

}

int main()
{

}

