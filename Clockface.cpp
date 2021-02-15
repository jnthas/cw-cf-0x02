
#include "Clockface.h"

const char* FORMAT_TWO_DIGITS = "%02d";

unsigned long lastMillis = 0;

char hInWords[20];
char mInWords[20]; 
char formattedDate[20];

int temperature = 26;

DateI18nPT i18n;

void Clockface::setup() {
  Display::setTextWrap(true, true);
  Display::fillRect(0, 0, Display::WIDTH, Display::HEIGHT, 0x0000);  

  updateTime();
  updateDate();
  updateTemperature();
}


void Clockface::update() 
{  
  if (millis() - lastMillis >= 1000) {

    if (DateTime::getSecond() == 0) {
      updateTime();
    }

    if (DateTime::getMinute() == 0 && DateTime::getSecond() == 0) {
      updateDate();    
    }

    if (DateTime::getMinute() % 15 == 0 && DateTime::getSecond() == 0) {
      updateTemperature();
    }
    
    lastMillis = millis();
  }  
}

void Clockface::updateTime() {

  Display::fillRect(0, 0, 64, 40, 0x0000);  

  i18n.timeInWords(DateTime::getHour(), DateTime::getMinute(), hInWords, mInWords);  
  //timeInWords(5, 6, hInWords, mInWords);  

  // Hour
  Display::setFont(&hour8pt7b);  
  Display::setCursor(1, 14);
  Display::setTextColor(0x2589);
  Display::println(hInWords);
  
  // Minute
  Display::setFont(&minute7pt7b);
  Display::setCursor(0, 25);
  Display::setTextColor(0xffff);
  Display::println(mInWords);

  // Separator line
  Display::drawHLine(1, 40, 62, 0xffff);
}


void Clockface::updateDate() {  
  Display::fillRect(0, 41, 46, 13, 0x0000);

  // Date
  Display::setFont(&minute7pt7b);
  Display::setCursor(0, 52);
  Display::setTextColor(0x2589);
    
  const char* fmt = i18n.formatDate(DateTime::getDay(), DateTime::getMonth());

  Display::print(fmt);

  const int dateWidth = Display::getTextWidth(fmt);

  // Weekday
  Display::setFont(&small4pt7b);
  //Display::setFont(&minute7pt7b);
  Display::setCursor(dateWidth + 2, 52);
  Display::setTextColor(0xffff);
  Display::println(i18n.weekDayName(DateTime::getWeekday()));  
}


void Clockface::updateTemperature() {

  Display::fillRect(46, 41, 18, 13, 0x0000);
  Display::setFont(&minute7pt7b);

  // Temperature
  // TODO get temperature
  temperature++;
  if (temperature > 30) temperature = 20;

  char buffer[4];  
  sprintf(buffer, "%d~", temperature);
   
  const int tempWidth = Display::getTextWidth(buffer);
 
  Display::setCursor(62-tempWidth, 52);
  Display::setTextColor(0xffff);
  Display::println(buffer);


  Display::draw(WIFI, 1, 55, 8, 8);
  Display::draw(MAIL, 12, 55, 8, 8);
  Display::draw(WEATHER_CLOUDY_SUN, 55, 55, 8, 8);
}
