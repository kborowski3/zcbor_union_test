/*
 * Generated using zcbor version 0.6.99
 * https://github.com/NordicSemiconductor/zcbor
 * Generated with a --default-max-qty of 3
 */

#ifndef ZCBOR_UNION_TEST_H__
#define ZCBOR_UNION_TEST_H__

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include "zcbor_encode.h"
#include "zcbor_union_test_types.h"

#if DEFAULT_MAX_QTY != 3
#error "The type file was generated with a different default_max_qty than this file"
#endif


int cbor_encode_Foo(
		uint8_t *payload, size_t payload_len,
		const struct Foo_ *input,
		size_t *payload_len_out);


#endif /* ZCBOR_UNION_TEST_H__ */
