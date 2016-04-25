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
#include "imageClass.h"
// ball
/*
#include "ball/ball.h"
#include "ball/ballBlue.h"
#include "ball/ballGreen.h"
#include "ball/ballRed.h"
*/
#include "grid/grid.h"
#include "block/block.h"
#include "block/block_blank.h"
#include "block/block_building.h"
#include "block/block_road.h"


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
		//ofFbo fbo; //brush code
		ofxPanel gui;
		ofParameter<int> scale;
		ofParameter<int> red;
		ofParameter<int> green;
		ofParameter<int> blue;
		ofParameter<int> alpha;

		ofxAssimpModelLoader model;

		imageClass img;
		
		// ball
		/*
		//#define NBALLS 2000
		vector <ball> myBall;
		ballBlue myBallBlue;
		ballGreen myBallGreen;
		ballRed myBallRed;
		*/

		// grid
		grid g;

		// block
		vector <block> blocks;

};
