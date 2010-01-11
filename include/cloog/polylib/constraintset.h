#ifndef CLOOG_POLYLIB_CONSTRAINTSET_H
#define CLOOG_POLYLIB_CONSTRAINTSET_H

#include <cloog/polylib/backend.h>

#if defined(__cplusplus)
extern "C" 
  {
#endif 

struct cloogconstraintset {
	CloogMatrix M;
};

struct cloogequalities {
	CloogConstraintSet	*constraints;
	int			*types;
};

struct cloogconstraint {
	CloogConstraintSet	*set;
	cloog_int_t		**line;
};

CloogConstraintSet *cloog_constraint_set_from_cloog_matrix(CloogMatrix *M);

#if defined(__cplusplus)
  }
#endif 
#endif /* define _H */
