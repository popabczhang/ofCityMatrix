/*
CityMatrix

written by "Ryan" Yan Zhang <ryanz@mit.edu>
for MIT Media Lab, Changing Place Group
April.18th.2016
*/

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	// overall
	ofSetVerticalSync(true);


	// 3D
	cam.setDistance(500);

	model.loadModel("test_object_03.3ds", 20);
	//model.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 0);


	// 2D
	gui.setup();
	gui.add(scale.set("scale", 0, 0, 255));
	gui.add(red.set("red", 0, 0, 255));
	gui.add(green.set("green", 0, 0, 255));
	gui.add(blue.set("blue", 0, 0, 255));
	gui.add(alpha.set("alpha", 0, 0, 255));

	fbo.allocate(800, 800);
	fbo.begin();
	ofClear(255);
	fbo.end();

}

//--------------------------------------------------------------
void ofApp::update() {
	//model.setRotation(1, 270 + ofGetElapsedTimef() * 60, 0, 0, 1);
}

//--------------------------------------------------------------
void ofApp::draw() {


	// BG
	ofBackgroundGradient(ofColor(49), ofColor::black);

	// 3D
	ofEnableDepthTest();
	cam.begin();
	/*
	//lets tumble the world with the mouse
	glPushMatrix();
	//draw in middle of the screen
	glTranslatef(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	//tumble according to mouse
	glRotatef(-mouseY, 1, 0, 0);
	glRotatef(mouseX, 0, 1, 0);
	glTranslatef(-ofGetWidth() / 2, -ofGetHeight() / 2, 0);
	*/
	ofSetColor(255, 255, 255, 255);
	model.drawFaces();
	//glPopMatrix();

	cam.end();
	ofDisableDepthTest();


	// 2D
	fbo.draw(0, 0);
	gui.draw();
	// draw FPS
	ofSetColor(255, 255, 255, 255);
	ofDrawBitmapString("fps: " + ofToString(ofGetFrameRate(), 2), ofGetWidth() - 100, 15);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
	/*
	fbo.begin();
	ofPushStyle();
	ofSetColor(red, green, blue, alpha);
	ofDrawCircle(mouseX, mouseY, scale);
	ofPopStyle();
	fbo.end();
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
