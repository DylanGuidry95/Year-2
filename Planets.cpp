#include "Planets.h"

Planet::Planet(float speed, float size, glm::vec3 pos, glm::vec4 color, glm::mat4 model, Planet c)
{
	m_Speed = speed;
	m_Size = size;
	m_Color = color;
	m_Children() = c;
	m_Model = glm::mat4(1.0);
	m_Pos = pos;
	
}

void Planet::Draw()
{
	Gizmos::addSphere(m_Pos, m_Size, 10, 10, m_Color);
}

void Planet::Update()
{
	if (m_Children != NULL)
	{
		/*m_Model = glm::rotate(m_Model, , glm::vec3(0,1,0));*/
	}
}