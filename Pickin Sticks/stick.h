#ifndef KR_STICK_H_
#define KR_STICK_H_

#include "image.h"
#include "bbox.h"
#include "vector2.h"

class Stick {
public:
	Stick();
	~Stick();

	Image* GetImage();
	BBox* GetBBox();
	Vector2* GetPosition();

	void RandomizePosition(int w, int h);

private:
	Image image;
	BBox bbox;
	Vector2 position; //I should have just ripped this from Ogre3D
};

#endif
