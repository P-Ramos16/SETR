#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include "myEvtLib.h" 

#include "queue.h" 

/* Event list (not really a list ... but it should be) */
/* Note the static. Manipulation of queue should be made via the interface functions */ 
static EventType evt;

/* Event management function implementation */

/* Get next event in queue (removing it) */
int16_t getEVT(EventType *headEvt){	
	
	EventType nextEvent = NULL;
	
	nextEvent = popFromQueue();

	if (nextEvent != NULL) { 
		/* There are events */
		/* Get event at the head of the list */	
		headEvt->event_t=nextEvent.event_t;
		headEvt->event_arg=nextEvent.event_arg;
	
		return MYEVT_OK;
	}
	else { 	
		/* If event queue is empty */
		return MYEVT_EMPTY; 
	}
	
}

/* Add a new event to the end of the queue */
void addEVT(EventType newevt){
	addToQueue(newevt);
	return;	
}

/* Init the list */
void initEVT(void) {	
	evt.event_t = 0;
	evt.event_arg = 0;
		
	return; 
}
