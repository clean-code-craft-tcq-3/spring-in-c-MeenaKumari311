#include "stats.h"

 struct Stats{
 int average,min,max; 
};

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
 int i;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    for(i=0;i<setlength;i++){
     s.average=s.average+*(numberset+i);
    }
 
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
   
{
}
