#include "block_road.h"

void block_road::draw() {
	ofSetColor(ofColor::blue);    // this is a shortcut for full blue color ;)
	ofDrawCircle(x, y, dim);
}