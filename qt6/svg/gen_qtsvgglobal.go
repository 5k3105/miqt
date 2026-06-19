package svg

/*

#include "gen_qtsvgglobal.h"
#include <stdlib.h>

*/
import "C"

type QtSvg__Option uint

const (
	QtSvg__NoOption              QtSvg__Option = 0
	QtSvg__Tiny12FeaturesOnly    QtSvg__Option = 1
	QtSvg__AssumeTrustedSource   QtSvg__Option = 2
	QtSvg__DisableSMILAnimations QtSvg__Option = 16
	QtSvg__DisableCSSAnimations  QtSvg__Option = 32
	QtSvg__DisableAnimations     QtSvg__Option = 240
)
