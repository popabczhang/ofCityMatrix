#include "ballGreen.h"

void ballGreen::draw() {
	ofSetColor(ofColor::green);    // this is a shortcut for full blue color ;)
	ofDrawCircle(x, y, dim);
}