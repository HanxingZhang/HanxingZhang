//Hanxing Zhang
//use this in Gps and ship
#ifndef Bitmap_HH_
#define Bitmap_HH_

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

class Bitmap {
private:
	int* bitmap;
	int w;
	int h;
	double x,y;

public:
	int getXY(int x, int y) {
		return y*w + x;
	}
	void fill(int x, int y, int color) {
	     if (x < 0 || x >= cols || y < 0 || y >= rows)
				 return;
			 if ( bits[index(x,y)] != 0)
				 return;
			 bits[index(x,y)]  = color;
					 fill(x+1, y, color);
					 fill(x-1, y, color);
					 fill(x, y+1, color);
					 fill(x, y-1, color);
			 }
		

    void fill(int x, int y, int color) {
				 if ( bits[index(x,y)] != 0)
				 return;
			 bits[index(x,y)]  = color;
					 if (x+1 < cols) fill(x+1, y, color);
					 if (x-1 >= 0) fill(x-1, y, color);
					 if (y+1 < rows) fill(x, y+1, color);
					 if (y-1 >= 0) fill(x, y-1, color);
			 }

    void output(ofstream& out) {
		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++)
				out << bitmap[j + i*w];
			out << '\n';
		}
}
};
#endif
