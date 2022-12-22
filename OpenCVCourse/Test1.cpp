#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


//void main() {
//	string path = "Resources/lambo.png";
//	Mat img = imread(path);
//	imshow("Images", img);
//	waitKey(0);
//	return 0;
//}
//void main() {
//	string path = "Resources/test_video.mp4";
//	VideoCapture cap(path);
//	Mat img;
//	while (true) {
//
//		cap.read(img);
//		imshow("Image", img);
//		waitKey(20);
//
//	}
//}

// webcam//
void main() {

	VideoCapture cap(1);
	Mat img;
	while (true) {

		cap.read(img);
		imshow("Image", img);
		waitKey(1);

	}
}