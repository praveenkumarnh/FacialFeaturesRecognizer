/****************************************************************************\
 * Copyright (c) 2018 Mani Kumar <maniyoung.d2@gmail.com>
 * ---------------------------------------------------------------------------
 * Project     :  FacialFeaturesRecognizer
 * Author      :  Mani Kumar
 * License     :  GNU GPL v3
 * Origin date :  08-Aug-2018
 *
 * Filename    :  agerecognizer.cpp
 * Description :  Concrete class for age recognition
 \***************************************************************************/

#include <agerecognizer.h>

namespace FFR {

AgeRecognizer::AgeRecognizer()
    : _className(FUNC_NAME) {
  m_featureType = FFR::Age;
  m_featureName = enum2str(m_featureType);
  m_result = AGE_RESULT_ADULT;
}

AgeRecognizer::~AgeRecognizer() {
  DEBUGLD("destructor called!\n");
}

FFR::String AgeRecognizer::getResult(/*const*/std::vector<float>& hog_fv) {
  CvMat sample = cvMat(1, 64, CV_32FC1, hog_fv.data());
  cvCreateData(&sample);
  float svm_res = 0.0f;
  svm_res = m_SVMobj.predict(&sample);
  // TODO: need to refactor to make robust
  switch ((int) svm_res) {
    case 0:
      m_result = AGE_RESULT_ADULT;
      break;
    case 1:
      m_result = AGE_RESULT_CHILD;
      break;
    case 2:
      m_result = AGE_RESULT_OLD;
      break;
    case 3:
      m_result = AGE_RESULT_TEEN;
      break;
    default:
      m_result = AGE_RESULT_ADULT;
      DEBUGLW("default case, svm_res=[%lf]\n", svm_res);
      break;
  }
  return m_result;
}

} /* namespace FFR */
