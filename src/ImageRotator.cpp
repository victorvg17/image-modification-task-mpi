#include <iostream>
#include "ImageRotator.hpp"

using namespace std;
using namespace cv;

namespace autoimage {
    ImageRotator::ImageRotator(int theta) : 
        BaseClass(), theta(theta) {}

    void ImageRotator::process (cv::Mat& src, cv::Mat& dst) const{
        
        Point2f src_center(src.cols/2.0F, src.rows/2.0F);
        Mat rot_mat = getRotationMatrix2D(src_center, theta, 1.0);
        warpAffine(src, dst, rot_mat, src.size());

        cout << "Width: " << rot_mat.cols << endl;
        cout << "Height: " << rot_mat.rows << endl;
    }

}   //end namespace autoimage
