//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "light_system.h"
#include "bright_control.h"
#include "light_level_control.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration and initialization of private global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

static float dutyCycleR = 0.5f;
static float dutyCycleG = 0.5f;
static float dutyCycleB = 0.5f;

//=====[Implementations of public functions]===================================

void lightSystemInit()
{
    brightControlInit();
}

void lightSystemUpdate()
{
    dutyCycleR = lightLevelControlReadR();
    dutyCycleG = lightLevelControlReadG();
    dutyCycleB = lightLevelControlReadB();

    setDutyCycle( RGB_LED_RED, dutyCycleR );
    setDutyCycle( RGB_LED_GREEN, dutyCycleG );
    setDutyCycle( RGB_LED_BLUE, dutyCycleB );

}

//=====[Implementations of private functions]==================================
