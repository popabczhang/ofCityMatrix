#include "block_blank.h"

void block_blank::draw() {
	ofSetColor(ofColor::blue);    // this is a shortcut for full blue color ;)
	ofDrawCircle(x, y, dim);
}