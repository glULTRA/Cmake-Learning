#! /bin/sh/

cmake -D GLFW_BUILD_DOCS=OFF -S . -B out/build/ -G "MinGW Makefiles"