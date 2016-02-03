#include "Planets.h"
#include <iostream>
Planet::Planet( float speed, float size, glm::vec3 pos, glm::vec4 color, glm::mat4 model,
	glm::vec3 parPos, int moon = NULL)
{
	m_Speed = speed;
	m_Size = size;
	m_Color = color;
	m_Model = glm::mat4(.1f);
	m_Pos = pos;
	numMoons = moon;
	parentPos = parPos;
}

Planet::Planet()
{
	m_Speed = 20;
	m_Size = 10;
	m_Color = glm::vec4(1,1,1,1);
	m_Model = glm::mat4(.1f);
	m_Pos = glm::vec3(0,0,0);
	numMoons = 0;
}

void Planet::Draw()
{
	Gizmos::addSphere(m_Pos, m_Size, 10, 10, m_Color);
}

void Planet::Update(float dt)
{	
	m_Model = glm::rotate(m_Model, m_Speed * dt, glm::vec3(0,1,0));

	//m_Pos -= center;

	float rad = m_AngleOfOrbit * (3.14 / 180);
	m_Pos.x = 0 - (1 * cos(rad));
	m_Pos.z = 0 - (1 * sin(rad));

	m_AngleOfOrbit += m_Speed * dt;

	Gizmos::addSphere(m_Pos, m_Size, 10, 10, m_Color);
}