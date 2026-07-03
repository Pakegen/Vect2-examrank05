#include "vect2.hpp"

vect2::vect2() : x(0), y(0) {}
vect2::vect2(int x, int y) : x(x), y(y) {}

int vect2::operator[](int i) const
{
	return (i == 0 ? x : y);
}

int& vect2::operator[](int i)
{
	return (i == 0 ? x : y);
}

vect2 vect2::operator-() const
{
	return vect2(-x, -y);
}

vect2& vect2::operator+=(const vect2& rhs)
{
	x += rhs.x;
	y += rhs.y;
	return *this;
}

vect2& vect2::operator-=(const vect2& rhs)
{
	x -= rhs.x;
	y -= rhs.y;
	return *this;
}

vect2& vect2::operator*=(int n)
{
	x *= n;
	y *= n;
	return *this;
}

vect2 vect2::operator+(const vect2& rhs) const
{
	return vect2(x + rhs.x, y + rhs.y);
}

vect2 vect2::operator-(const vect2& rhs) const
{
	return vect2(x - rhs.x, y - rhs.y);
}

vect2 vect2::operator*(int n) const
{
	return vect2(x * n, y * n);
}

vect2& vect2::operator++()
{
	++x;
	++y;
	return *this;
}

vect2 vect2::operator++(int)
{
	vect2 tmp(*this);
	++(*this);
	return tmp;
}

vect2& vect2::operator--()
{
	--x;
	--y;
	return *this;
}

vect2 vect2::operator--(int)
{
	vect2 tmp(*this);
	--(*this);
	return tmp;
}

bool vect2::operator==(const vect2& rhs) const
{
	return (x == rhs.x && y == rhs.y);
}

bool vect2::operator!=(const vect2& rhs) const
{
	return !(*this == rhs);
}

vect2 operator*(int n, const vect2& v)
{
	return v * n;
}

std::ostream& operator<<(std::ostream& os, const vect2& v)
{
	os << "{" << v[0] << ", " << v[1] << "}";
	return os;
}
