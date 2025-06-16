#ifndef _SGX_WASM_H
#define _SGX_WASM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "latte_platform.h"

#define SGX_WASM_SEC_NAME ".sgx_wasm"

uint8_t *sgx_get_wasm_sec_addr();

uint8_t *sgx_get_wasm_common_addr();

uint32_t sgx_get_wasm_size();

uint8_t *sgx_get_wasm();

#ifdef __cplusplus
}
#endif

#endif
