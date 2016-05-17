#include "block.h"

block::block() {
}

void block::setup(int _xs, int _ys, int _id, int _r, ofColor _c, grid _g) {
	xStop = _xs;
	yStop = _ys;
	id = _id;
	rotation = _r;
	g = _g;
	baseColor = _c;

	// lego dimension
	d_base_x = g.cellSizeX * g.shrink;
	d_base_y = g.cellSizeY * g.shrink;
	d_base_z = 5. * .01;
	d_nub_x = d_base_x / 4.;
	d_nub_y = d_base_y / 4.;
	d_nub_z = 10. * .01;

	// cplane orgin location
	x = (float(xStop) + .5) * g.cellSizeX;
	y = (float(yStop) + .5) * g.cellSizeY;
	z = 0;

}

void block::update() {

}

void block::draw() {

	// cplane begin
	glPushMatrix();
	glTranslatef(x, y, z);
	glRotatef(float(rotation), 0, 0, 1);
	
	// blank
	if (id == -1) {
		ofSetColor(c_blank);
		ofDrawBox(0, 0, d_base_z / 2, d_base_x, d_base_y, d_base_z);
	} 
	
	// buildings
	else if (id >= 0 && id <= 5) {
		// residential
		if (id <= 2) {
			// base
			ofSetColor(c_base_res);
			ofDrawBox(0, 0, d_base_z / 2, d_base_x, d_base_y, d_base_z);
			// nub
			ofSetColor(c_base_res); //use "c_nub_res" for colored nub
			ofDrawBox(-1.5 * d_nub_x, 1.5 * d_nub_y, d_base_z + d_nub_z / 2, d_nub_x, d_nub_y, d_nub_z);
			// id 0 - RL
			if (id == 0) {
				// text
				ofSetColor(c_text_res);
				//ofDrawBitmapString("RL", 0, 0, d_base_z + .5); //text tag
				//ofTrueTypeFont(); //3d text
				//ofdrawsStringAsShape();
				//myfont.drawString("hi!!", 100, 100);

				// people dots in
				// people dots out
			}
			// id 1 - RM
			else if (id == 1) {
				// text
				ofSetColor(c_text_res);
				//ofDrawBitmapString("RM", 0, 0, d_base_z + .5);
				// people dots in
				// people dots out
			}
			// id 2 - RS
			else {
				// text
				ofSetColor(c_text_res);
				//ofDrawBitmapString("RS", 0, 0, d_base_z + .5);
				// people dots in
				// people dots out
			}
		}
		// office
		else{
			// base
			ofSetColor(c_base_off);
			ofDrawBox(0, 0, d_base_z / 2, d_base_x, d_base_y, d_base_z);
			// nub
			ofSetColor(c_base_off); //use "c_nub_off" for colored nub
			ofDrawBox(-1.5 * d_nub_x, 1.5 * d_nub_y, d_base_z + d_nub_z / 2, d_nub_x, d_nub_y, d_nub_z);
		}
	}

	// road
	else {
		ofSetColor(c_road);
		ofDrawBox(0, 0, d_base_z / 2, d_base_x, d_base_y, d_base_z);
	}

	// cplane end
	glPopMatrix();



}