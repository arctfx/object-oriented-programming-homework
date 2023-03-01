#include "Vector3D.h"

Vector3D::Vector3D(double x, double y, double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

double Vector3D::getScalarProduct(const Vector3D&, const Vector3D&)
{
	return 0.0;
}

bool Vector3D::arePenperdicular(const Vector3D&, const Vector3D&)
{
	return false;
}

double Vector3D::getLength()
{
	return 0.0;
}

Vector3D Vector3D::plus(Vector3D)
{
	return Vector3D();
}
