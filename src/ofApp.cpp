/*
CityMatrix

written by "Ryan" Yan Zhang <ryanz@mit.edu>
for MIT Media Lab, Changing Place Group
April.18th.2016
*/

#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup() {

	//// overall

	// vertical sync
	ofSetVerticalSync(true);

	// smooth in 2D
	//ofEnableSmoothing();


	//// 3D

	// easy cam
	cam.setDistance(500);

	
	// load 3D model

	// test load model
	/*
	model.loadModel("test_object_03.3ds", 20);
	//model.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	*/

	// grid
	g.setup(16, 16, 1000., 1000.);
	
	// blocks
	block tmpBlock;
	for (int j = 0; j < g.extentY; j ++) {
		for (int i = 0; i < g.extentX; i ++) {
			tmpBlock.setup(i, j, 0, 0, ofColor::white, g);
			blocks.push_back(tmpBlock);
		}
	}


	//// 2D

	// gui
	gui.setup();
	gui.add(scale.set("scale", 0, 0, 255));
	gui.add(red.set("red", 0, 0, 255));
	gui.add(green.set("green", 0, 0, 255));
	gui.add(blue.set("blue", 0, 0, 255));
	gui.add(alpha.set("alpha", 0, 0, 255));

	// image class
	img.setup();

	// ball
	/*
	for (int i = 0; i<myBall.size(); i++) {
		float size = (i + 1) * 0.001; // defining the size of each ball based on its place in the array
		float randomX = ofRandom(0, ofGetWidth()); //generate a random value bigger than 0 and smaller than our application screen width
		float randomY = ofRandom(0, ofGetHeight()); //generate a random value bigger than 0 and smaller than our application screen height
		myBall[i].setup();
	}
	*/

	// brush
	/*
	fbo.allocate(800, 800);
	fbo.begin();
	ofClear(255);
	fbo.end();
	*/

}

//--------------------------------------------------------------
void ofApp::update() {

	//// overall


	//// 3D


	//// 2D

	// ball
	/*for (int i = 0; i<myBall.size(); i++) {
		myBall[i].update();
	}
	myBallBlue.update();
	myBallGreen.update();
	myBallRed.update();*/

}

//--------------------------------------------------------------
void ofApp::draw() {

	//// overall

	// BG
	ofBackgroundGradient(ofColor(49), ofColor::black);


	//// 3D

	// begin 3D & cam
	ofEnableDepthTest();
	glShadeModel(GL_SMOOTH);
	cam.begin();

	
	// draw 3D model
	/*
	ofSetColor(255, 255, 255, 255);
	model.drawFaces();
	*/

	// draw block
	for (int i = 0; i < blocks.size(); i++) {
		blocks[i].draw();
	}

	// end 3D & cam
	cam.end();
	ofDisableDepthTest();


	//// 2D

	// draw ball
	/*
	for (int i = 0; i<myBall.size(); i++) {
		myBall[i].draw();
	}
	ofEnableBlendMode(OF_BLENDMODE_ADD);
	myBallBlue.draw();
	myBallGreen.draw();
	myBallRed.draw();
	ofEnableBlendMode(OF_BLENDMODE_DISABLED
	*/

	// draw FPS
	ofSetColor(255, 255, 255, 255);
	ofDrawBitmapString("fps: " + ofToString(ofGetFrameRate(), 2), ofGetWidth() - 100, 15);

	// draw image class
	img.draw();

	// draw gui
	gui.draw();

	// brush
	/*
	fbo.draw(0, 0);
	*/

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	// ball
	/*if (key == '1') {
		myBallBlue.setup();
	}
	else if (key == '2') {
		myBallGreen.setup();
	}
	else if (key == '3') {
		myBallRed.setup();
	}*/
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

	// brush
	/*
	fbo.begin();
	ofPushStyle();
	ofSetColor(red, green, blue, alpha);
	ofDrawCircle(mouseX, mouseY, scale);
	ofPopStyle();
	fbo.end();
	*/

	// ball
	/*
	if (button == 0) {
		ball tempBall;				// create the ball object
		tempBall.setup();			// setup its initial state
		myBall.push_back(tempBall);	// add it to the vector
	}
	else if (button == 1) {
		for (int i = 0; i < myBall.size(); i++) {
			float distance = ofDist(x, y, myBall[i].x, myBall[i].y); // a method oF gives us to check the distance between two coordinates

			if (distance < 100.) {
				myBall.erase(myBall.begin() + i); // we need to use an iterator/ reference to the vector position we want to delete
			}
		}
	}
	else if (button == 2) {
		myBall.clear();
	}
	*/

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
