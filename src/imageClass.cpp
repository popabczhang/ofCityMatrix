#include "imageClass.h"

void imageClass::setup() {

	image.loadImage("Garfield_4.jpg");

}

void imageClass::draw() {
	
	//image.draw(100, 100, ofGetMouseX() - 100, ofGetMouseY() - 100); //draw according to mouse position

	image.draw(ofGetWidth() - 50, ofGetHeight() - 50, 40, 40); //draw as water mark on the right bottom

}