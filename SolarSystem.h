#pragma once
#include "Planets.h"


class SolarSystem
{
public:
	SolarSystem();
	SolarSystem(int, float, float);
	void CreateSystem();
	void Movement(float);
private:
	float m_X, m_Z;

	int numPlanets;
	Planet Center;
	Planet one;
};