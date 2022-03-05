#include "stats.h"
#include <math.h>
struct Stats compute_statistics(float* numberset, int setlength) {
    struct Stats s;
 int i;
    s.average = 0;
    s.min = *numberset;
    s.max = *numberset;
    
    if(*numberset==NAN)
    {
         s.average = NAN;
    s.min = NAN;
    s.max = NAN;
    }
        else
        {
    for(i=0;i<setlength;i++){
     s.average=s.average+*(numberset+i);
     if(*(numberset+i)<s.min)
     {
      s.min=*(numberset+i);
     }
     if(*(numberset+i)>s.max)
     {
      s.max=*(numberset+i);
     }
    }
    s.average=s.average/setlength;
        }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
   
{
    int i;
   
    
 if(computedStats.max>maxThreshold)
 {
     for(i=0;i<2;i++)
         if(alerters)
         {
             emailAlerter();
         }
     else 
     {
    ledAlerter();
     }
 }
}
