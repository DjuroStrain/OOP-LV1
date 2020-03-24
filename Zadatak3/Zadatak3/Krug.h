#pragma once
#include <iostream>

using namespace std;
class Krug
{
	public:
		float m_fPolumjer;
		float PI = 3.14159;

		float IspisiOpseg();
		float IspisiPovrsinu();

		Krug(float p);
		~Krug();
};

