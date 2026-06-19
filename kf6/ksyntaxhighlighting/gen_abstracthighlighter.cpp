#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter
#include <abstracthighlighter.h>
#include "gen_abstracthighlighter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

Definition KSyntaxHighlighting__AbstractHighlighter_definition(const KSyntaxHighlighting__AbstractHighlighter* self) {
	return self->definition();
}

void KSyntaxHighlighting__AbstractHighlighter_setDefinition(KSyntaxHighlighting__AbstractHighlighter* self, const Definition* def) {
	self->setDefinition(*def);
}

Theme KSyntaxHighlighting__AbstractHighlighter_theme(const KSyntaxHighlighting__AbstractHighlighter* self) {
	return self->theme();
}

void KSyntaxHighlighting__AbstractHighlighter_setTheme(KSyntaxHighlighting__AbstractHighlighter* self, const Theme* theme) {
	self->setTheme(*theme);
}

void KSyntaxHighlighting__AbstractHighlighter_delete(KSyntaxHighlighting__AbstractHighlighter* self) {
	delete self;
}

