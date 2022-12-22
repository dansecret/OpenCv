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

	resize(img)
	imshow("Image", img);

	waitKey(0);

}