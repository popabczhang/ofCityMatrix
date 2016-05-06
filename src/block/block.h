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

		// lego dimension
		float d_base_x;
		float d_base_y;
		float d_base_z;
		float d_nub_x;
		float d_nub_y;
		float d_nub_z;

		// color ref list
		ofColor c_blank = ofColor(110);
		ofColor c_base_res = ofColor(225);
		ofColor c_base_off = ofColor(170);
		ofColor c_text_res = ofColor(150);
		ofColor c_text_off = ofColor(100);
		ofColor c_nub_res = ofColor(250, 255, 120); //bright yellow
		ofColor c_nub_off = ofColor(250, 120, 120); //pink-red
		ofColor c_sidewalk = ofColor(110);
		ofColor c_road = ofColor(65);
		ofColor c_bikelane = ofColor(85, 135, 85); //grayish green
		ofColor c_green = ofColor(165, 200, 45); //yellowish green
		ofColor c_parking = ofColor(195, 155, 100); //grayish oriange
	
	private:

};