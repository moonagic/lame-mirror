#ifndef L3PSY_DOT_H_
#define L3PSY_DOT_H_

/* l3psy.c */
#include "l3side.h"
void L3psycho_anal( short int *buffer[2], int chn, 
		    int gr , layer *info,
		    FLOAT8 sfreq, 
		    int check_ms, FLOAT8 *ms_ener_ratio, 
		    FLOAT8 ratio_d[2][21], FLOAT8 ratio_ds[2][12][3],
		    FLOAT8 pe[2], 
                    int blocktype_d[2]); 
#endif
