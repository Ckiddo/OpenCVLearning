#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main(){
	cv::Mat srcImage = cv::imread("dog.jpg");

	cv::imshow("before",srcImage);

	cv::Mat element = cv::getStructuringElement(cv::MORPH_RECT,cv::Size(15,15));
	cv::Mat dstImage;
	cv::erode(srcImage,dstImage,element);

	cv::imshow("after",dstImage);
	cv::waitKey(0);
	return 0;
}