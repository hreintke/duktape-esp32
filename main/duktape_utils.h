/*
 * duktape_utils.h
 *
 *  Created on: Nov 18, 2016
 *      Author: kolban
 */

#ifndef MAIN_DUKTAPE_UTILS_H_
#define MAIN_DUKTAPE_UTILS_H_
#include <duktape.h>
void esp32_duktape_console(const char *message);
void esp32_duktape_addGlobalFunction(
		duk_context *ctx,
		char *functionName,
		duk_c_function func,
		duk_int_t numArgs);

#endif /* MAIN_DUKTAPE_UTILS_H_ */