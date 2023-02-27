#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D
{
public:
	Vector3D(double x = 0, double y = 0, double z= 0);

	static double getScalarProduct(const Vector3D&, const Vector3D&);
	static bool arePenperdicular(const Vector3D&, const Vector3D&);

	double getLength();
	Vector3D plus(Vector3D);

private:
	//coordinates
	double m_x;
	double m_y;
	double m_z;
};

#endif // VECTOR3D_H

