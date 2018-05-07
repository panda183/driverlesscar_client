#ifndef LANE_DETECTOR_H
#define LANE_DETECTOR_H

#include <iostream>
#include <opencv2/opencv.hpp>
#include <cmath>
#include "Utilities.h"

#define RIGHT 2
#define LEFT 1
#define NO_SIGN 0
#define STOP 3


using namespace cv;
using namespace std;

namespace ld
{
    extern int xCenterLane;
    extern Vec3f laneCurve;
    extern int hugLane;
    void findLane();
    int avgX(Mat &window,int whitePixel);
    Vec3f CurveEstimation(vector<Point2f> lanePoints);
    void drawCurve(Mat &InputMat,Vec3f &curve);
}
#endif
