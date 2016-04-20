#include "ballRed.h"

void ballRed::draw() {
	ofSetColor(ofColor::red);    // this is a shortcut for full blue color ;)
	ofDrawCircle(x, y, dim);
}