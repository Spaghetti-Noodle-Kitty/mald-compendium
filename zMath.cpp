#include "zMath.h"

#pragma region Static Data
double zMath::ZPI		= 3.14159265358979;
double zMath::ZEuler	= 2.71828182845904;
double zMath::Deg2Rad	= 360 / (zMath::ZPI * 2);
double zMath::Rad2Deg	= (zMath::ZPI * 2) / 360;

#pragma endregion

#pragma region Datatypes
class Vector2D
{
public:
	double X, Y, R, F;
	Vector2D(double PosX, double PosY, double Rot, double Force)
	{
		X = PosX;
		Y = PosY;
		R = zMath::Clamp(0, 360, Rot);
		F = Force;
	}
};

class Vector3D
{
public:
	double X, Y, Z, Rx, Ry, Rz, F;
	Vector3D(double PosX, double PosY, double PosZ, double RotX, double RotY, double RotZ, double Force)
	{
		X = PosX;
		Y = PosY;
		Z = PosZ;
		Rx = zMath::Clamp(0, 360, RotX);
		Ry = zMath::Clamp(0, 360, RotY);
		Rz = zMath::Clamp(0, 360, RotZ);
		F = Force;
	}
};
#pragma endregion

#pragma region Functions
double zMath::Clamp(double Min, double Max, double Num)
{
	if (Num < Min)
		return Min;
	else if (Num > Max)
		return Max;
	else
		return Num;
}

double zMath::Sin(double AngleRad)
{
	double res = AngleRad;
	double term = AngleRad;
	int i = 3;
	while (i < 15)
	{
		term = -term * AngleRad * AngleRad / (i * (i - 1));
		res += term;
		i += 2;
	}
	return res;
}

double zMath::Cos(double AngleRad)
{
	double res = AngleRad;
	double term = AngleRad;
	int i = 2;
	while (i < 14)
	{
		term = -term * AngleRad * AngleRad / (i * (i - 1));
		res += term;
		i += 2;
	}
	return res;
}

double zMath::Tan(double AngleRad)
{
	return Sin(AngleRad) / Cos(AngleRad);
}

double zMath::Sqrt(double Num)
{
	double l = 0;
	double r = Num;
	double p = 1e-10;
	double m = 0;

	while (r - l > p)
	{
		m = (l + r) / 2;
		if (m * m < Num)
			l = m;
		else
			r = m;
	}
	return (l + r) / 2;
}

double zMath::Sign(double Num)
{
	if (Num > 0)
		return 1;
	else
		return 0;
}

double zMath::Pow(double Num, double Exp)
{
	double res = 1;
	for (int i = 0; i < Exp; i++)
		res *= Num;
	return res;
}

double zMath::Min(double Nums[])
{
	double res = Nums[0];
	for (int i = 1; i < (sizeof(Nums) / sizeof(Nums[0])); i++)
	{
		if (Nums[i] < res)
			res = Nums[i];
	}
	return res;
}

double zMath::Max(double Nums[])
{
	double res = Nums[0];
	for (int i = 1; i < (sizeof(Nums) / sizeof(Nums[0])); i++)
	{
		if (Nums[i] > res)
			res = Nums[i];
	}
	return res;
}

double zMath::Log(double Num)
{
	double res = 0;
	double term = Num - 1;
	double k = 1;
	while (term > 1e-10)
	{
		term = term * (Num - 1) / Num;
		res += term / k;
		k++;
	}
	return res;
}

double zMath::Log10(double Num)
{
	return Log(Num) / Log(10);
}

double zMath::Exp(double Num)
{
	return Pow(zMath::ZEuler, Num);
}

double zMath::Atan2(double y, double x)
{
	// https://github.com/DiamonDinoia my beloved <3 //

	double a, r, s, t, c, q, ax, ay, mx, mn;
	ax = x < 0 ? -x : x;
	ay = y < 0 ? -y : y;

	double ArrA[] = { ay, ax };

	mx = Max(ArrA);
	mn = Min(ArrA);
	a = mn / mx;
	s = a * a;
	c = s * a;
	q = s * s;
	r = 0.024840285f * q + 0.18681418f;
	t = -0.094097948f * q - 0.33213072f;
	r = r * s + t;
	r = r * c + a;
	if (ay > ax) r = 1.57079637f - r;
	if (x < 0) r = 3.14159274f - r;
	if (y < 0) r = -r;
	return r;
}

double zMath::Atan(double AngleRad)
{
	double res = 0;
	for (int n = 0; n < 15; n++)
		res += Pow(-1, n) * Pow(AngleRad, 2 * n + 1) / (2 * n + 1);
	return res;
}

double zMath::Asin(double AngleRad)
{
	return zMath::ZPI / 2 - Acos(AngleRad);
}

double zMath::Acos(double AngleRad)
{
	double Y = Sqrt(1 - AngleRad * AngleRad);
	return Atan2(Y, AngleRad);
}

double zMath::Floor(double Num)
{
	return Num < 0 ? (int)(Num - 0.5) : (int)(Num);
}

double zMath::Ceil(double Num)
{
	return Num < 0 ? (int)(Num) : (int)(Num + 0.5);
}
#pragma endregion

