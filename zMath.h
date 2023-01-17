#pragma once
class zMath
{
public:
	class Vector2D
	{
	public:
		double X, Y, R, F;
		Vector2D(double PosX, double PosY, double Rot, double Force);
	};
	class Vector3D
	{
	public:
		double X, Y, Z, Rx, Ry, Rz, F;
		Vector3D(double PosX, double PosY, double PosZ, double RotX, double RotY, double RotZ, double Force);
	};

	// Static values //
	static double ZPI;
	static double ZEuler;
	static double Deg2Rad;
	static double Rad2Deg;

	// Functions //
	/// <summary>
	/// Clamps the Num-Value to be between Min&Max,
	/// if Num is smaller than Min, Min will be returned
	/// if Num is larger than Max, Max will be returned
	/// otherwise Num will be returned
	/// </summary>
	/// <param name="Min">Minimum value</param>
	/// <param name="Max">Maximum value</param>
	/// <param name="Num">Clamp value</param>
	/// <returns></returns>
	static double Clamp	(double Min, double Max, double Num);
	/// <summary>
	/// Gets the sine of an angle represented in radians
	/// </summary>
	/// <param name="AngleRad">The angle in radians</param>
	/// <returns></returns>
	static double Sin	(double AngleRad);
	/// <summary>
	/// Gets the cosine of an angle represented in radians
	/// </summary>
	/// <param name="AngleRad">The angle in radians</param>
	/// <returns></returns>
	static double Cos	(double AngleRad);
	/// <summary>
	/// Gets the tangent of an angle in radians
	/// </summary>
	/// <param name="AngleRad">The angle in radians</param>
	/// <returns></returns>
	static double Tan	(double AngleRad);
	/// <summary>
	/// Gets the arc-sine of an angle represented in radians
	/// </summary>
	/// <param name="AngleRad">The angle in radians</param>
	/// <returns></returns>
	static double Asin	(double AngleRad);
	/// <summary>
	/// Gets the arc-cosine of the angle represented in radians
	/// </summary>
	/// <param name="AngleRad">The angle in radians</param>
	/// <returns></returns>
	static double Acos	(double AngleRad);
	/// <summary>
	/// Gets the arc-tangent of the angle represented in radians
	/// </summary>
	/// <param name="AngleRad">The angle in radians</param>
	/// <returns></returns>
	static double Atan	(double AngleRad);
	/// <summary>
	/// Gets the value of Atan2() in radians
	/// </summary>
	/// <param name="y">Y</param>
	/// <param name="x">X</param>
	/// <returns></returns>
	static double Atan2	(double y, double x);
	/// <summary>
	/// Returns the square-root of the passed Number via approximation
	/// </summary>
	/// <param name="Num">Number to get Square-root</param>
	/// <returns></returns>
	static double Sqrt	(double Num);
	/// <summary>
	/// Returns 1 if the number is positive
	/// Returns 0 if the number is negative
	/// </summary>
	/// <param name="Num">The number to be checked</param>
	/// <returns></returns>
	static double Sign	(double Num);
	/// <summary>
	/// Returns Num raised to the power of Exp
	/// </summary>
	/// <param name="Num"></param>
	/// <param name="Exp"></param>
	/// <returns></returns>
	static double Pow	(double Num, double Exp);
	/// <summary>
	/// Return the lowest value in the Nums[] array
	/// </summary>
	/// <param name="Nums">Array of doubles</param>
	/// <returns></returns>
	static double Min	(double Nums[]);
	/// <summary>
	/// Returns the highest number in the Nums[] array
	/// </summary>
	/// <param name="Nums">Array of doubles</param>
	/// <returns></returns>
	static double Max	(double Nums[]);
	/// <summary>
	/// Returns the logarithm of the specified number
	/// </summary>
	/// <param name="Num">A number</param>
	/// <returns></returns>
	static double Log	(double Num);
	/// <summary>
	/// Returns the Base-10 logarithm of the passed number
	/// </summary>
	/// <param name="Num">A number</param>
	/// <returns></returns>
	static double Log10	(double Num);
	/// <summary>
	/// Returns Euler's raised to the power of passed number
	/// </summary>
	/// <param name="Num">A number</param>
	/// <returns></returns>
	static double Exp	(double Num);
	/// <summary>
	/// Floors the number to nearest integer
	/// </summary>
	/// <param name="Num">A double</param>
	/// <returns></returns>
	static double Floor	(double Num);
	/// <summary>
	/// Ceils the number to nearest integer
	/// </summary>
	/// <param name="Num">A double</param>
	/// <returns></returns>
	static double Ceil	(double Num);
};