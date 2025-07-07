/* **************************************************************
 * Paulo Pedreiras, 2025/03, SETR
 * 
 * Skeleton for the implementation of an event queue library
 * 
 * At this moment stores just one event ... no queue! 
 * 
 * Implementing a FIFO queue is homework!
 * 
 ****************************************************************/

#ifndef MY_EVT_LIB
#define MY_EVT_LIB

	/* Error codes */ 
	#define MYEVT_OK		0  	/* Sucess */
	#define	MYEVT_EMPTY 	-1	/* Event quue is empty */

	/* Define events */
	typedef struct {
		uint16_t event_t;		/* The event */ 
		uint16_t event_arg;    	/* And its arguments (if appropriate) */		
	} EventType;

	/* Event management queue interface functions */
	int16_t getEVT(EventType * evt);
	void addEVT(EventType evt);
	void initEVT(void);
	
#endif
