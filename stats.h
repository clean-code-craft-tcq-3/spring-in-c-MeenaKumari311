
// struct Stats compute_statistics(const float*, int);
void emailAlerter(void);
void ledAlerter(void);
#include "stats.h"

    
typedef void (*alerter_funcptr)();
// void check_and_alert(float , alerter_funcptr , struct Stats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

