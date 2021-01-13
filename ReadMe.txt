This file contains the details about the project and how to install and run the project.


DESCRIPTION:

-This project is about the topic "Image Processing" in which the OpenCV library is used.
-The programming language used is C++.
-This project takes an image as input and rotates it by an angle input by the user.
-The code file is in source.cpp.

HOW TO INSTALL OPENCV LIBRARY AND OTHER FILES:

-First a compiler is needed for the project i.e MinGW-w64. It can be downloaded form this link https://sourceforge.net/projects/mingw/.
 Install it with the setting of architecture as x86_64. After the installation go to the folder and then
 mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin and add this to the path of environment variables.
-After this download the opencv library installer from https://opencv.org/releases/ .
 After it is installed go to the folder C:\opencv\build\x64\vc15\bin (in my case) and add it to the path of environment variables.
-Download the cmake installer from the link https://cmake.org/download/. Install it from the installer.
 After it is installed go to the folder C:\Program Files\CMake\bin (in my case) and add it to the path of environment variables.
-After it install the visual studio (in my case) community version from the link https://visualstudio.microsoft.com/downloads/ .
 Install it with the check mark option of downloading and installing c++ dependencies in it.
 It will install its own c++ libraries and other files required.
 
HOW TO SET UP VISUAL STUDIO:

-After the installation open it and click on new c++ project.
-Then create the project and when the window opens at the upper section there is x86 change it to x64.
-Then on the title bar click on Project and in the list click on Project1(in my case)Properties.
-Then select VC++ Directories then on the Include Directories click edit and add the path C:\opencv\build\include (in my case).
 Then click on Library Directories and click edit then add the path C:\opencv\build\x64\vc15\lib (in my case).
-Then select linker from the left section and then input and then go to the Additional Dependencies.
 Click edit and add the library with "d" in it i.e. opencv_world451d.lib (in my case).

ABOUT THE CONTENTS IN THE PROJECT CODE:

-Place the image in the folder of the code.
-The program will ask for image name and angle.
-If the image is empty the project will return -1 with a error message.
-Positive angle will rotate image in anti-clockwise and negative angle in clockwise direction.
-The imread function will take a string to read the image and imshow image will display the image with the title given to it.
-The program will convert the image to a matrix.
-The "Point" variable will create a point about which the image will be rotated i.e. center.
-The "getRotationMatrix2D()" function will take the center, angle and the scale as parameters and store it to a matrix variable r_matrix..
-Then a output matrix with similar properties as the input image matrix will be created.
-The "warpAffine()" function will take input image, output image, r_matrix(for angle and centre to rotate), size of output image.
-The "waitKey(0)" function is used to hold the image output screen with the parameter "0" to hold it infinitely untill a key is pressed.

