struct Stats{
 float average,min,max; 
};
struct Stats compute_statistics(float*, int);
void emailAlerter(void);
void ledAlerter(void);
    
typedef void (*alerter_funcptr)();
void check_and_alert(float , alerter_funcptr[] , struct Stats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

