//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeResult.h
//
// Identification: src/include/parser/executor/nodeResult.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeResult.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeResult.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODERESULT_H
#define NODERESULT_H

#include "parser/nodes/execnodes.h"

extern ResultState *ExecInitResult(Result *node, EState *estate, int eflags);
extern TupleTableSlot *ExecResult(ResultState *node);
extern void ExecEndResult(ResultState *node);
extern void ExecResultMarkPos(ResultState *node);
extern void ExecResultRestrPos(ResultState *node);
extern void ExecReScanResult(ResultState *node);

#endif   /* NODERESULT_H */