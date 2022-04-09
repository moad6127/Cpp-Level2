#pragma once
class Point2D
{
	friend Point2D operator+(const Point2D& A, const Point2D& B);
	friend Point2D operator-(const Point2D& A, const Point2D& B);
	friend std::ostream& operator<<(std::ostream& os, const Point2D& A);
private:
	float mX;
	float mY;

public:
	Point2D();
	Point2D(float x, float y);
	void SetX(float value);
	void SetY(float value);
	float ZeroPointLength();
	void PirntX_Y();
	Point2D& operator=(const Point2D& B);
};
Point2D operator+(const Point2D& A, const Point2D& B);
Point2D operator-(const Point2D& A, const Point2D& B);


