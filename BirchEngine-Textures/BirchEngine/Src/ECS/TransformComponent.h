#pragma once
#include "Component.h"
class TransformComponent : public Component {

private:
	int xpos;
	int ypos;
public:
	TransformComponent() {
		xpos = 0;
		ypos = 0;
	}
	TransformComponent(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void update()override {
		xpos++;
		ypos++;
	}

	int x() { return xpos; }
	int y() { return ypos; }
	void y(int y) { ypos = y; }
	void x(int x) { ypos = x; }
};