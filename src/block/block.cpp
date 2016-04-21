#include "block.h"
block::block() {
}

void block::setup() {
	x = ofGetWidth()*.5;
	y = ofGetHeight()*.5;
	dim = ofRandom(30, 60);

	speedX = ofRandom(-1, 1);
	speedY = ofRandom(-1, 1);

	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void block::update() {
	if (x < 0) {
		x = 0;
		speedX *= -1;
	}
	else if (x > ofGetWidth()) {
		x = ofGetWidth();
		speedX *= -1;
	}

	if (y < 0) {
		y = 0;
		speedY *= -1;
	}
	else if (y > ofGetHeight()) {
		y = ofGetHeight();
		speedY *= -1;
	}

	x += speedX;
	y += speedY;
}

void block::draw() {
	ofSetColor(color);
	ofDrawCircle(x, y, dim);
}