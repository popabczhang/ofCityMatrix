#include "block_blank.h"

void block_blank::draw() {
	ofSetColor(ofColor::blue);
	glPushMatrix();
	glTranslatef(x, y, z);
	ofDrawBox(g.cellSizeX * g.shrink, g.cellSizeY * g.shrink, 5.);
	glPopMatrix();
}