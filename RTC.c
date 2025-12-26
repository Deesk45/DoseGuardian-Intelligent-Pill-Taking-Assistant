#include<LPC21XX.h>
#include"rtc_defines.h"
#include"types.h"
#include"rtc.h"

//extern s32 hour,min,sec,day,d,m,y;

void rtc_init(void)
{
		
	CCR = 1 << 1;      // RESET CCR REGISTER   CTCRST BIT SET (1) --> RESET
	
	SEC = 1;
	 MIN = 10;
	HOUR = 11;
	
		DOM = 10;
	MONTH = 12;
	YEAR = 2025;
	
	DOW = 3;
	
	#ifndef CPU_LPC2148
	
	//CONFIG PRESCALAR REGISTER
	
	PREINT = PREINT_VAL;
	PREFRAC = PREFRAC_VAL;
	
	CCR = 1 << 0;       // ENABLE RTC REGISTER   CLKEN BIT SET (1) --> ENABLE
	
	#else
	CCR = (1<<0)|
				(1<<4);
	#endif
	
}
