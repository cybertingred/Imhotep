#include <iostream>

#include "render.h"

#ifdef _DEBUG
	#pragma comment(lib, "opencv_core231d.lib")
	#pragma comment(lib, "opencv_highgui231d.lib")
	#pragma comment(lib, "assimpd.lib")
	#pragma comment(lib, "freeglutd.lib")
#else
	#pragma comment(lib, "opencv_core231.lib")
	#pragma comment(lib, "opencv_highgui231.lib")
	#pragma comment(lib, "assimp.lib")
	#pragma comment(lib, "freeglut.lib")
#endif // _DEBUG

int main(int argc, char **argv) {
	Render render;
	render.Init(argc, argv, 512, 424);
	glutMainLoop();

	return 0;
}



