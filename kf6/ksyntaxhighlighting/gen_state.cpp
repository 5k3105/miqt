#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__State
#include <state.h>
#include "gen_state.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

KSyntaxHighlighting__State* KSyntaxHighlighting__State_new() {
	return new (std::nothrow) KSyntaxHighlighting::State();
}

KSyntaxHighlighting__State* KSyntaxHighlighting__State_new2(const State* other) {
	return new (std::nothrow) KSyntaxHighlighting::State(*other);
}

void KSyntaxHighlighting__State_operatorAssign(KSyntaxHighlighting__State* self, const State* rhs) {
	self->operator=(*rhs);
}

bool KSyntaxHighlighting__State_operatorEqual(const KSyntaxHighlighting__State* self, const State* other) {
	return (*self == *other);
}

bool KSyntaxHighlighting__State_operatorNotEqual(const KSyntaxHighlighting__State* self, const State* other) {
	return (*self != *other);
}

bool KSyntaxHighlighting__State_indentationBasedFoldingEnabled(const KSyntaxHighlighting__State* self) {
	return self->indentationBasedFoldingEnabled();
}

void KSyntaxHighlighting__State_delete(KSyntaxHighlighting__State* self) {
	delete self;
}

