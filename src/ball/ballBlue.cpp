#include "ballBlue.h"

void ballBlue::draw() {
	ofSetColor(ofColor::blue);    // this is a shortcut for full blue color ;)
	ofDrawCircle(x, y, dim);
}