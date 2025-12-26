
#define FOSC 12000000    // CRYSTAL_OSC_FRQ

#define CCLK (FOSC * 5)  // CPU_CLK 60000000

#define PCLK (CCLK / 4)  // PERIPHERAL_CLK 15000000

#define PREINT_VAL (int)((PCLK/32768) - 1)              // 456.763671875

#define PREFRAC_VAL (PCLK - ((PREINT_VAL + 1) * 32768))

//#define CPU_LPC2148

#define SW_AL_1 20
#define SW_AL_2 25
#define BUZZER 24
#define LED 27
