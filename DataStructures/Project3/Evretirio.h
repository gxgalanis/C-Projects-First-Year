#ifndef __Evr__
#define __Evr__

#include <stdlib.h>
#include <stdio.h>
#include "TSEvr.h"
#include "TSDDA.h"

typedef struct EvrNode *EvrPtr;

EvrPtr EvrConstruct(int MaxSize);	/* gia erwthma 1 */
int EvrDestruct(EvrPtr *E);		/* gia erwthma 5 */

int EvrInsert(EvrPtr E, TStoixeiouEvr Data); /* gia erwthma 2 */
int EvrSearch(EvrPtr E, keyType key, int InOut, int * found); /* gia erwthma 3 */
int EvrPrintAll(EvrPtr E, FILE *out, int *counter); /* gia Erwthma 4 */

int Evr_EisagwghAnaxwrhsewnAfijewn(FILE *from,EvrPtr E,int *notFound,int *yesFound);
int MetraEisagwgh(int );

int EvrAVLorBST();
#endif
