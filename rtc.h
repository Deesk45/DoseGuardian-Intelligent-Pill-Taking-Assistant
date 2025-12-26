#include"types.h"

void rtc_init(void);

void lcd_create_arrows(void);

int med_time_set(s32 *hour,s32 *min,s32 *sec,s32 *day);

void alert_sys(s32 med_t,s32 cnt);

void alert(void);

void change_time(s32 med_t,s32 cnt);

void MORNING(s32 *hour,s32 *min,s32 *sec,s32 *day,s32 cnt);
	
void AFTERNOON(s32 *hour,s32 *min,s32 *sec,s32 *day,s32 cnt);
	
void NIGHT(s32 *hour,s32 *min,s32 *sec,s32 *day,s32 cnt);

void alert_set(s32 *hour,s32 *min,s32 *sec,s32 *day,s32 cnt);

int set_time_arrow_mode(s32 *hour, s32 *min, s32 *sec);

void lcd_show_time(s32 h, s32 m, s32 s, s32 sel);

int set_date_arrow_mode(s32 *date, s32 *month, s32 *year);

void lcd_show_date(s32 d, s32 m, s32 y, s32 sel);

u8 max_days_in_month(s32 month, s32 year);

int set_day_arrow_mode(s32 *day);

void lcd_show_day(s32 day);
