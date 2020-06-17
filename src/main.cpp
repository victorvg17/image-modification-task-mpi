#include <iostream>
#include <opencv2/opencv.hpp>
#include "ImageToGreyscale.hpp"
#include "ImageRotator.hpp"

using namespace cv;
using namespace autoimage;
using namespace std;

int main(int argc, char** argv )
{
    char* imageName = argv[1];
    Mat imageMat;
    Mat greyMat;
    Mat rotatedMat;
    imageMat = imread( imageName, 1);

    if ( argc != 2 || !imageMat.data ) {
        cout << "No image data" << endl; 
        return -1;
    }

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    namedWindow("Grey Image", WINDOW_AUTOSIZE);
    namedWindow("Rotated Image", WINDOW_AUTOSIZE);

    ImageToGreyscale* p_color = new ImageToGreyscale();
    p_color->process(imageMat, greyMat);

    ImageRotator* p_rotator = new ImageRotator(30);
    p_rotator->process(imageMat, rotatedMat);
    
    imshow("Display Image", imageMat);
    imshow("Grey Image", greyMat);
    imshow("Rotated Image", rotatedMat);

    imwrite("../greyImage.jpg", greyMat);
    imwrite("../rotatedImage.jpg", rotatedMat);
    waitKey(0);
    return 0;
}
