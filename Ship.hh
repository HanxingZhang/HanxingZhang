#ifndef Ship_HH_
#define Ship_HH_

#include "Error.hh"

class Ship :public Error{
private:
	  //name of ship;
	char* shape; //kind of ship;
	char* number;
	enum {len=20};
	
public:
	Ship(const char* num,const char* s,int radar,int gps,int sound,double x,double y):Error(radar,gps,sound,x,y){
		number = new char [len];
		shape = new char [len];
		strncpy(number,num,len-1);
		number[len-1]='\0';
		strncpy(shape,s,len-1);
		shape[len-1]='\0';

	}
	~Ship(){
		delete [] name;
		delete [] shape;
	}
	virtual void Getnumber()const = 0;
	virtual void Setnumber() =0;
	virtual void Getshape() const = 0;
	virtual void Setshape() =0;
	virtual void path() const = 0;


	};

#endif