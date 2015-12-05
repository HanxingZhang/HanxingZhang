#include "Error.hh"
<<<<<<< HEAD
#include "Bitmap.hh"

virtual double Radar(double x, double y,double theta)const {
	//x,y = L1 L2 xiangjiao L1 L2 shi fan she zhi xian 
	if (theta < 15)
		prob = 0.95;
	else if (15<theta<30)
		prob = 0.9; 
	else if (30<theta<45) 
		prob = 0.8;
	else if (45<theta<60) 
		prob = 0.65;
	else if (60<theta<75)
		prob = 0.50;
	else if (75<theta<90)
		prob = 0.32;


};//Radarmeasures distance from the sensor to something else.
virtual double Gps(double x, double y)const {
//cannot find the algorithm!!!! 
};//Gps takes the real position of the robot and adds normally distributed error to x,y.
virtual double Sounder(double x, double y)const {};//work under water.
virtual double SetLocX(double x, double y, double Nx, double Ny)const {
	double xx;
	double probx = Nx/ x;
	if (probx>0.95)
		xx= Nx*a;
	else if (0.75<prob<0.95)
		xx = Nx*b;
	else if (0.55<prob<0.75)
		xx = Nx*c;
	else if (0.35<prob<0.55)
		xx = Nx*d;
	else if (0.15<prob<0.35)
		xx = Nx*e;
	else if (prob<0.15)
		xx = Nx*f;
	return xx;
};
virtual void GetLoc() const = 0;

virtual double SetLocY(double y, double Ny)const {
    double yy;
	double proby = Ny/ y;
	if (proby>0.95)
		yy= Ny*a;
	else if (0.75<prob<0.95)
		yy = Ny*b;
	else if (0.55<prob<0.75)
		yy = Ny*c;
	else if (0.35<prob<0.55)
		yy = Ny*d;
	else if (0.15<prob<0.35)
		yy = Ny*e;
	else if (prob<0.15)
		yy = Ny*f;
	return yy;

};
virtual double Getdirect(double dest) const {};//
friend double operator -(const Error& a1,const Error& a2){};
virtual bool safeDist(Error a) const {};//bool the Nx,Ny and x, y. discussing
virtual double Correct(Error a) const {};// Correct the trace.
=======

virtual double RadarX(double x, double y)const {};
virtual double Gps(double x, double y)const {};
virtual double Sounder(double x, double y)const {};
virtual double GetLoc(double x, double y, double Nx, double Ny)const {};
virtual double Getdirect(double dest) const {};
friend double operator -(const Error& a1,const Error& a2){};
virtual bool safeDist(Error a) const {};
virtual double Correct(Error a) const {};
>>>>>>> origin/master
};