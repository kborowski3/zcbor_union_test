/*
 * Generated using zcbor version 0.6.99
 * https://github.com/NordicSemiconductor/zcbor
 * Generated with a --default-max-qty of 3
 */

#ifndef ZCBOR_UNION_TEST_TYPES_H__
#define ZCBOR_UNION_TEST_TYPES_H__

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include "zcbor_encode.h"

/** Which value for --default-max-qty this file was created with.
 *
 *  The define is used in the other generated file to do a build-time
 *  compatibility check.
 *
 *  See `zcbor --help` for more information about --default-max-qty
 */
#define DEFAULT_MAX_QTY 3

struct Foo_ {
	union {
		int32_t _Foo_int;
		struct zcbor_string _Foo_bstr;
	};
	enum {
		_Foo_int,
		_Foo_bstr,
	} _Foo_choice;
};


#endif /* ZCBOR_UNION_TEST_TYPES_H__ */
