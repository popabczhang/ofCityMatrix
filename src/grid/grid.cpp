#include "grid.h"

grid::grid() {
}

void grid::setup(int _ex, int _ey, float _sx, float _sy) {
	extentX = _ex;
	extentY = _ey;
	siteSizeX = _sx;
	siteSizeY = _sy;
	cellSizeX = siteSizeX / extentX;
	cellSizeY = siteSizeY / extentY;
	shrink = .95;
}

void grid::update() {

}

void grid::draw() {

}