#pragma once
#include <iostream>
#include <string>

#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

class Filter
{
    public:
    virtual Mat ProcessImage(Mat image) = 0 {}
};
class GrayFilter : public Filter
{
private:

public:
	Mat ProcessImage(Mat image) ;
};

class ResizeFilter : public Filter
{
private:
	int width;
	int height;
public:
	ResizeFilter(int newWidth, int newHeight) {
		width = newWidth;
		height = newHeight;
	};
    Mat ProcessImage(Mat image);
};