/*
CityMatrix

written by "Ryan" Yan Zhang <ryanz@mit.edu>
for MIT Media Lab, Changing Place Group
April.18th.2016
*/

#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxAssimpModelLoader.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofEasyCam cam;
		ofFbo fbo;
		ofxPanel gui;
		ofParameter<int> scale;
		ofParameter<int> red;
		ofParameter<int> green;
		ofParameter<int> blue;
		ofParameter<int> alpha;

		ofxAssimpModelLoader model;
		
};
