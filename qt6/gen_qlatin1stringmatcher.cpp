#include <QLatin1StringMatcher>
#include <qlatin1stringmatcher.h>
#include "gen_qlatin1stringmatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLatin1StringMatcher* QLatin1StringMatcher_new() {
	return new (std::nothrow) QLatin1StringMatcher();
}

void QLatin1StringMatcher_setCaseSensitivity(QLatin1StringMatcher* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QLatin1StringMatcher_caseSensitivity(const QLatin1StringMatcher* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

void QLatin1StringMatcher_delete(QLatin1StringMatcher* self) {
	delete self;
}

