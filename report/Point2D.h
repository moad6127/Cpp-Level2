#pragma once
class Point2D
{
	friend Point2D operator+(const Point2D& A, const Point2D& B);
	float mX;
	float mY;

public:
	Point2D();
	Point2D(float x, float y);
	void SetX(float value);
	void SetY(float value);
	float ZeroPointLength();
	void PirntX_Y();
};
Point2D operator+(const Point2D& A, const Point2D& B);
