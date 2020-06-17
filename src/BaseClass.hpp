#ifndef _BASE_CLASS
#define _BASE_CLASS
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace autoimage{
  class BaseClass {
  public:
    BaseClass(){}
    //pure virtual function
    virtual void process (cv::Mat& colorMat, cv::Mat& greyMat) const = 0;

  };

} //end namespace autoimage

#endif /*end of guard*/
