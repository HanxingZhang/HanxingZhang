#ifndef Error_HH_
#define Error_HH_

#include <Bitmap.hh>

class Error{
private:
	double x,y;
	double Nx,Ny;
	
public:
	Error(double x, double y){
		x=x;
		y=y;
	};
	virtual double Radar(double x, double y) const =0;
	virtual double Gps(double x, double y) const=0;
	virtual double Sounder(double x, double y) const=0;
	virtual double GetLocX(double x, double Nx) const=0;
	virtual double GetLocY(double y, double Ny) const=0;
	virtual void GetLoc() const = 0;
	virtual double Getdirect(double dest) const=0;
	friend double operator -(const Error& a1,const Error& a2){};
	virtual bool safeDist(Error a) const=0;
	virtual double Correct(Error a) const=0;
};
#endif