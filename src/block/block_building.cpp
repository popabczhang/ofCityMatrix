#include "block_building.h"

void block_building::draw() {
	ofSetColor(ofColor::blue);    // this is a shortcut for full blue color ;)
	ofDrawCircle(x, y, dim);
}