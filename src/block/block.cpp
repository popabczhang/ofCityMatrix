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

	x = (float(xStop) + .5) * g.cellSizeX;
	y = (float(yStop) + .5) * g.cellSizeY;
	z = 2.5;
}

void block::update() {

}

void block::draw() {
	ofSetColor(baseColor);
	glPushMatrix();
	glTranslatef(x, y, z);
	ofDrawBox(g.cellSizeX * g.shrink, g.cellSizeY * g.shrink, 5.);
	glPopMatrix();
}