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
	Krug k1(3.5);
	cout << "Opseg kruga je: " << k1.IspisiOpseg() << endl;
	cout << "Povrsina kruga je: " << k1.IspisiPovrsinu() << endl;
	Krug k2(10.1);
	cout << "Opseg kruga je: " << k2.IspisiOpseg() << endl;
	cout << "Povrsina kruga je: " << k2.IspisiPovrsinu() << endl;
	Krug k3(22.8);
	cout << "Opseg kruga je: " << k3.IspisiOpseg() << endl;
	cout << "Povrsina kruga je: " << k3.IspisiPovrsinu() << endl;
	
	getchar();
	return 0;
}

