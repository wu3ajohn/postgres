/*-------------------------------------------------------------------------
 *
 * geqo_misc.h
 *	  prototypes for printout routines in optimizer/geqo
 *
 * Portions Copyright (c) 1996-2003, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL: pgsql/src/include/optimizer/geqo_misc.h,v 1.25 2003/11/29 22:41:07 pgsql Exp $
 *
 *-------------------------------------------------------------------------
 */

/* contributed by:
   =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
   *  Martin Utesch				 * Institute of Automatic Control	   *
   =							 = University of Mining and Technology =
   *  utesch@aut.tu-freiberg.de  * Freiberg, Germany				   *
   =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
 */

#ifndef GEQO_MISC_H
#define GEQO_MISC_H

#include "optimizer/geqo.h"
#include "optimizer/geqo_recombination.h"
#include "nodes/relation.h"

#ifdef GEQO_DEBUG

extern void print_pool(FILE *fp, Pool *pool, int start, int stop);
extern void print_gen(FILE *fp, Pool *pool, int generation);
extern void print_edge_table(FILE *fp, Edge *edge_table, int num_gene);
#endif   /* GEQO_DEBUG */

#endif   /* GEQO_MISC_H */
