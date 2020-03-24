#pragma once
#include <iostream>

using namespace std;

class VremenskaPrognoza
{
	public:
		int m_nPolje[30];

		float SrednjaMjesecnaTemperatura();

		VremenskaPrognoza(int p[]);

		~VremenskaPrognoza();

};

