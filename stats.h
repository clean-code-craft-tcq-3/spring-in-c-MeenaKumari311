
// struct Stats compute_statistics(const float*, int);

typedef void (*alerter_funcptr)();
// void check_and_alert(float , alerter_funcptr , struct Stats);

extern int emailAlertCallCount=0;
extern int ledAlertCallCount=0;

