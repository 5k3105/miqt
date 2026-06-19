package multimedia

/*

#include "gen_qtvideo.h"
#include <stdlib.h>

*/
import "C"

type QtVideo__Rotation int

const (
	QtVideo__None         QtVideo__Rotation = 0
	QtVideo__Clockwise90  QtVideo__Rotation = 90
	QtVideo__Clockwise180 QtVideo__Rotation = 180
	QtVideo__Clockwise270 QtVideo__Rotation = 270
)
