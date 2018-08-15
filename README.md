# FacialFeaturesRecognizer
Recognizes facial features such as `Age`, `Gender` and `Emotion`, using `HOG` and `SVM` alogrithms. Has working sample of `OpenCV 2.4.13r7`'s HOG computation and SVM prediction code in C++ (which is not available in internet easily).

### TODO: 
1. Fix results vector iterator issue
2. Handle false positives from haar cascade face detector.
3. Use threads to performance.
4. Upgrade to OpenCV for ease of use and imporved OpenCV performance
5. Improve the dataset, re-train, research or experiment with the different algorithms
6. Research alternative ML libraries such as `dlib` for performance improvement.
7. Add documentation to methods and the classes.
8. Add wiki page/blog as tutorial in doc folder explaining this project as a sample of OpenCV implementation of HOG and SVM as there are no tutorials/blogs available for the same in C++ only python versions exists.