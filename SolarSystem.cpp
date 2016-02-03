#include "SolarSystem.h"

SolarSystem::SolarSystem(int planets, float x, float z)
{
	numPlanets = planets;
	m_X = x;
	m_Z = z;
	Center = Planet(0.0f, .4f, glm::vec3(0, 0, 0), glm::vec4(1,.5,.1,1), 
		glm::mat4(1.0), glm::vec3(x,0,z), 0);
}

SolarSystem::SolarSystem()
{
	
}

void SolarSystem::CreateSystem()
{
	float posX = m_X;
	float posZ = m_Z;

	one = Planet(200.0f, .5f, glm::vec3(4, 0, 4), glm::vec4(1, 1, .1, 1),
		glm::mat4(1.0), glm::vec3(m_X, 0, m_Z), 0);
	Center.Draw();
}

void SolarSystem::Movement(float dt)
{
	one.Update(dt);
	one.Draw();
}