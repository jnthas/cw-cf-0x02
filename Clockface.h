#ifndef WordsClockFace_h
#define WordsClockFace_h

#include <Arduino.h>

#include <Display.hpp>
#include <Tile.h>
#include <Object.h>
#include <ImageUtils.h>

#include "hour8pt7b.h"
#include "minute7pt7b.h"
#include <fonts/small4pt7b.h>
#include "DateI18nPT.h"

// Commons
#include "IClockface.h"
#include "Icons.h"


class Clockface: public IClockface {
  private:
    void timeInWords(int h, int m, char* hWords, char* mWords);
    void updateTime();
    void updateDate();
    void updateTemperature();

  public:
    void setup();
    void update();
};

#endif