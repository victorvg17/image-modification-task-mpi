#ifndef IMAGE_ROTATOR_
#define IMAGE_ROTATOR_
#include "BaseClass.hpp"

namespace autoimage{
  class ImageRotator : public BaseClass {
  public:
    ImageRotator(int theta);
    
    void process (cv::Mat& colorMat, cv::Mat& greyMat) const override;
  private:
    int theta;
  };

} //end namespace autoimage



#endif