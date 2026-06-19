#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__FoldingRegion
#include <foldingregion.h>
#include "gen_foldingregion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new() {
	return new (std::nothrow) KSyntaxHighlighting::FoldingRegion();
}

KSyntaxHighlighting__FoldingRegion* KSyntaxHighlighting__FoldingRegion_new2(const FoldingRegion* param1) {
	return new (std::nothrow) KSyntaxHighlighting::FoldingRegion(*param1);
}

bool KSyntaxHighlighting__FoldingRegion_operatorEqual(const KSyntaxHighlighting__FoldingRegion* self, const FoldingRegion* other) {
	return (*self == *other);
}

bool KSyntaxHighlighting__FoldingRegion_isValid(const KSyntaxHighlighting__FoldingRegion* self) {
	return self->isValid();
}

int KSyntaxHighlighting__FoldingRegion_id(const KSyntaxHighlighting__FoldingRegion* self) {
	return self->id();
}

Type KSyntaxHighlighting__FoldingRegion_type(const KSyntaxHighlighting__FoldingRegion* self) {
	return self->type();
}

FoldingRegion KSyntaxHighlighting__FoldingRegion_sibling(const KSyntaxHighlighting__FoldingRegion* self) {
	return self->sibling();
}

void KSyntaxHighlighting__FoldingRegion_delete(KSyntaxHighlighting__FoldingRegion* self) {
	delete self;
}

