#ifndef BUTTONS_H
#define BUTTONS_H

#include <Arduino.h>
//#include "ioexpander.h"
#include "defines.h"

class Buttons
{
public:
    Buttons();
    virtual ~Buttons();
    void begin();

    int getActionCtn();
    int getPreviousCtn();
    int getNextCtn();
    int getBackCtn();
    bool getShutDown();

    void decrementActionCtn();
    void decrementPreviousCtn();
    void decrementNextCtn();
    void decrementBackCtn();
    
    void reset();
};

#endif
