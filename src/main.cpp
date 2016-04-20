/*
CityMatrix

written by "Ryan" Yan Zhang <ryanz@mit.edu>
for MIT Media Lab, Changing Place Group
April.18th.2016
*/

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){

	ofSetupOpenGL(1024,768,OF_WINDOW); // <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
