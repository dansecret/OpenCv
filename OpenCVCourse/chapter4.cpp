#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/// <summary>
/// /// Drawing and shape text////
/// </summary>
/// 
void main() {
	// blank images
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

	circle(img, Point(256, 256), 250, Scalar(255, 0, 0),FILLED);
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255),FILLED);
	line(img, Point(130, 296), Point(382, 450), Scalar(255, 255, 255), 2);

	//put text
	putText(img, "Hamdandih ", Point(137, 262), FONT_HERSHEY_DUPLEX, 0.5, Scalar(0, 69, 255), 2);
	imshow("Image", img);
	waitKey(0);

}