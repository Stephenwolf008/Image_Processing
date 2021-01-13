#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;
int main()
{
    string image;
    cout << "Enter the name of image(in current directory) with its extension=";
    cin >> image;
    Mat srcImage = imread(image);
    if (srcImage.empty()) {
        cout << "Error!";
        cin.get();
        return -1;
    }
    int angle;
    cout << "Input angle to rotate=";
    cin >> angle;
    Point center(srcImage.cols / 2, srcImage.rows / 2);
    Mat r_matrix = getRotationMatrix2D(center, angle, 1.0);
    Mat output_img=Mat::zeros(srcImage.rows,srcImage.cols,srcImage.type());
    warpAffine(srcImage, output_img, r_matrix, output_img.size());
    imshow("ORIGINAL IMAGE", srcImage);
    imshow("ROTATED IMAGE", output_img);
    waitKey(0);
    return 0;
}
