/*H**************************************************************************
* NAME:   adc_drv.h         
*----------------------------------------------------------------------------
* Copyright (c) 2008.
*----------------------------------------------------------------------------
* RELEASE:      2008.11.15
* REVISION:     1.0     
*----------------------------------------------------------------------------
* PURPOSE:
* This file contains the ADC driver definition
*****************************************************************************/

#ifndef _ADC_DRV_H_
#define _ADC_DRV_H_


/*_____ I N C L U D E S ____________________________________________________*/
#include "config.h"         /* configuration header */


/*_____ M A C R O S ________________________________________________________*/


/*_____ D E C L A R A T I O N ______________________________________________*/
void   adc_set_prio(Byte priority);   //设置ADC的中断优先级
void   adc_init(void);  


/*_____ D E F I N I T I O N ________________________________________________*/


#endif  /* _ADC_DRV_H_ */
