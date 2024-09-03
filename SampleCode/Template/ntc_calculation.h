/*_____ I N C L U D E S ____________________________________________________*/
#include <stdio.h>
#include "NuMicro.h"

/*_____ D E C L A R A T I O N S ____________________________________________*/

/*_____ D E F I N I T I O N S ______________________________________________*/

#define ENABLE_NTC_DECIMAL

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/

float NTC_LookupTable_10K_3_3V_Search(uint16_t mv);
float NTC_LookupTable_100K_3_3V_Search(uint16_t mv);
float NTC_LookupTable_100K_5V_Search(uint16_t mv);
float NTC_temperature_calculate(uint32_t AVdd_vol, float vol);


