package qt6

/*

#include "gen_qtestsupport_core.h"
#include <stdlib.h>

*/
import "C"

type QTest__Internal__WaitForResult int

const (
	QTest__Internal__Failed QTest__Internal__WaitForResult = -1
	QTest__Internal__NotYet QTest__Internal__WaitForResult = 0
	QTest__Internal__Done   QTest__Internal__WaitForResult = 1
)
