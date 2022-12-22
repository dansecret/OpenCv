#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/// <summary>
/// ///Basic Function////
/// </summary>
/// 
void main() {

	string path = "Resources/lambo.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur,imgCanny, imgDia, imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(3,3),3,0);
	Canny(imgBlur, imgCanny, 25, 75);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDia, kernel);
	erode(imgDia, imgErode, kernel);

	imshow("Image", img);
	imshow("Image Gray", imgGray);
	imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image dilasi", imgDia);
	imshow("Image erosi ", imgErode);
	waitKey(0);

}