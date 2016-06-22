/***********************************************************************
MODULE:    ADC
VERSION:   1.02
CONTAINS:  Routines for controlling the ADC-DAC peripheral on the
           P89LPC936
COPYRIGHT: Embedded Systems Academy, Inc. - www.esacademy.com
LICENSE:   May be freely used in commercial and non-commercial code
           without royalties provided this copyright notice remains
           in this file and unaltered
WARNING:   IF THIS FILE IS REGENERATED BY CODE ARCHITECT ANY CHANGES
           MADE WILL BE LOST. WHERE POSSIBLE USE ONLY CODE ARCHITECT
           TO CHANGE THE CONTENTS OF THIS FILE
GENERATED: On "Sep 30 2010" at "21:16:49" by Code Architect 2.06
***********************************************************************/

#ifndef _ADCH_
#define _ADCH_

// adc trigger types
#define ADC_NONE          0
#define ADC_TIMER         1
#define ADC_IMMEDIATE     2
#define ADC_EDGE          3
#define ADC_DUALIMMEDIATE 4

// adc conversion types
#define ADC_FIXEDSINGLE    0
#define ADC_AUTOSCANSINGLE 1
#define ADC_FIXEDCONT      2
#define ADC_DUALCONT       3
#define ADC_AUTOSCANCONT   4
#define ADC_SINGLESTEP     5

// adc channel names
#define ADC0_CHANNEL0 0x01
#define ADC0_CHANNEL1 0x02
#define ADC0_CHANNEL2 0x04
#define ADC0_CHANNEL3 0x08
#define ADC1_CHANNEL2 0x40

/***********************************************************************
DESC:    Initializes the ADC
RETURNS: Nothing
CAUTION: Set EA to 1 after calling to enable all interrupts
************************************************************************/
extern void adc_init
  (
  void
  );

/***********************************************************************
DESC:    Configures ADC1 and starts conversions
         If trigger = ADC_NONE then ADC1 is configured and no conversions
         are started
RETURNS: Nothing
************************************************************************/
extern void adc_startadc1conversion
  (
    unsigned char trigger,   // ADC_TIMER, ADC_IMMEDIATE, ADC_EDGE, ADC_DUALIMMEDIATE, ADC_NONE
    unsigned char mode,      // ADC_FIXEDSINGLE    (select one channel in channels)
                             // ADC_FIXEDCONT      (select one channel in channels)
                             // ADC_AUTOSCANSINGLE (select one to four channels in channels)
                             // ADC_AUTOSCANCONT   (select one to four channels in channels)
                             // ADC_DUALCONT       (select two channels in channels)
                             // ADC_SINGLESTEP     (select one to four channels in channels)
    unsigned char channels   // one or more of: ADC1_CHANNEL0, ADC1_CHANNEL1, ADC1_CHANNEL2, ADC1_CHANNEL3
  );

/***********************************************************************
DESC:    Stops ADC1 conversions
RETURNS: Nothing
************************************************************************/
extern void adc_stopadc1conversion
  (
  void
  );

#endif // _ADCH_

