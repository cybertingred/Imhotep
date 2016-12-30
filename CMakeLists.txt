cmake_minimum_required(VERSION 2.8)
project(3dTracker)

set(INCLUDE_DIR
	D:/lib/eigen-3.2.8
	D:/lib/assimp-3.3.1/include
	D:/lib/boost-1.61
	D:/lib/opencv-2.3.1/build-x64/install/include
	D:/lib/freeglut-3.0.0/include
)
include_directories(${INCLUDE_DIR})

set(LINK_DIR
	D:/lib/opencv-2.3.1/build-x64/install/lib
	D:/lib/assimp-3.1.1/build-x64/lib
	D:/lib/boost-1.61/stage/lib
	D:/lib/freeglut-3.0.0/build-x64/lib
)
link_directories(${LINK_DIR})

set(MARKER_SRC
	marker_main.cc
	render.h
	render.cc
)

add_executable(MarkerTracker ${MARKER_SRC})
#target_link_libraries(xxx xxx.lib xxx.lib)