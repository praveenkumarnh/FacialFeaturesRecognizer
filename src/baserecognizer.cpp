/****************************************************************************\
 * Copyright (c) 2018 Mani Kumar <maniyoung.d2@gmail.com>
 * ---------------------------------------------------------------------------
 * Project     :  FacialFeaturesRecognizer
 * Author      :  Mani Kumar
 * License     :  GNU GPL v3
 * Origin date :  08-Aug-2018
 *
 * Filename    :  baserecognizer.cpp
 * Description :  Base class for facial features recognizer.
 \***************************************************************************/

#include <baserecognizer.h>

namespace FFR {

BaseRecognizer::BaseRecognizer() {
  // TODO: YTI
}

BaseRecognizer::~BaseRecognizer() {
  // TODO: YTI
}

void BaseRecognizer::printLog() {
  DEBUGLE(" hello world\n");
}

int execute(int argc, char **argv) {
  BaseRecognizer br;
  br.printLog();
  // TODO: YTI
  return 0;
}

} /* namespace FFR */
