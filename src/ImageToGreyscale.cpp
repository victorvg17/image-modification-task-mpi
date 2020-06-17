#include <iostream>
#include "ImageToGreyscale.hpp"

using namespace std;

namespace autoimage {
    ImageToGreyscale::ImageToGreyscale() : 
        BaseClass() {}

    void ImageToGreyscale::process (cv::Mat& colorMat, cv::Mat& greyMat) const{
        cv::cvtColor(colorMat, greyMat, cv::COLOR_BGR2GRAY);
        cout << "Width: " << greyMat.cols << endl;
        cout << "Height: " << greyMat.rows << endl;
    }

}   //end namespace autoimage
