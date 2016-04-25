#pragma once

#include "ofMain.h"

class grid {

	public:

		grid();

		void setup(int _ex, int _ey, float _sx, float _sy);
		void update();
		void draw();

		int extentX;
		int extentY;
		float siteSizeX;
		float siteSizeY;
		float cellSizeX;
		float cellSizeY;
		float shrink;
	
	private:

};