/** ###################################################################
**     Filename  : LEDControl.C
**     Project   : LEDControl
**     Processor : 56858
**     Version   : Driver 01.14
**     Compiler  : Metrowerks DSP C Compiler
**     Date/Time : 2/16/2018, 12:17 PM
**     Abstract  :
**         Main module.
**         This module contains user's application code.
**     Settings  :
**     Contents  :
**         No public methods
**
** ###################################################################*/
/* MODULE LEDControl */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "RedLed.h"
#include "GreenLed.h"
#include "Button.h"
#include "Time_Green_Led.h"
#include "Bit1.h"
#include "EInt1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

void main(void)
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */

  for(;;) {}
}

/* END LEDControl */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.00 [04.35]
**     for the Freescale 56800 series of microcontrollers.
**
** ###################################################################
*/
