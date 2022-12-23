#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/// <summary>
/// /// Warp Images////
/// </summary>
/// 
/// 
float w = 250, h = 350;
Mat matrix, imgWrap;


void main() {

	string path = "Resources/cards.jpg";
	Mat img = imread(path);


	Point2f src[4] = { {65,327},{336,282},{90,634},{400,572} };
	Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };

	for (int i = 0; i < 4; i++) {

		circle(img, src[i], 10, Scalar(0, 0, 255), FILLED);

	}
	
	matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWrap, matrix, Point(w, h));


	imshow("Image", img);
	imshow("Image Wrap ", imgWrap);
	waitKey(0);

}