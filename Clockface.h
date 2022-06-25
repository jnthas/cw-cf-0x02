#ifndef WordsClockFace_h
#define WordsClockFace_h

#include <Arduino.h>

#include <Adafruit_GFX.h>
#include <Tile.h>
#include <Locator.h>
#include <Game.h>
#include <Object.h>
#include <ImageUtils.h>

#include "hour8pt7b.h"
#include "minute7pt7b.h"
#include "small4pt7b.h"
#include "DateI18nPT.h"

// Commons
#include "IClockface.h"
#include "Icons.h"


class Clockface: public IClockface {
  private:
    Adafruit_GFX* _display;
    DateTime* _dateTime;
    void timeInWords(int h, int m, char* hWords, char* mWords);
    void updateTime();
    void updateDate();
    void updateTemperature();

  public:
    Clockface(Adafruit_GFX* display);
    void setup(DateTime *dateTime);
    void update();
};

#endif