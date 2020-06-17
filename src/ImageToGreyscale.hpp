#ifndef IMAGE_TO_GREYSCALE
#define IMAGE_TO_GREYSCALE
#include "BaseClass.hpp"

namespace autoimage{
  class ImageToGreyscale : public BaseClass {
  public:
    ImageToGreyscale();
    
    void process (cv::Mat& colorMat, cv::Mat& greyMat) const override;
  };

} //end namespace autoimage



#endif
