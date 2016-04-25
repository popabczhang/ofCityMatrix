#pragma once

#include "ofMain.h"
#include "../grid/grid.h"

class block {

	public:

		block();

		void setup(int _xs, int _ys, int _id, int _r, ofColor _c, grid _g);
		void update();
		void draw();

		int xStop;
		int yStop;
		int id;
		int rotation;
		grid g;
		float x;
		float y;
		float z;
		ofColor baseColor;
	
	private:

};