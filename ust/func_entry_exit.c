#include "doom_tracepoint.h"

void __cyg_profile_func_enter(void *this_fn, void *call_site) __attribute__((no_instrument_function));

void __cyg_profile_func_exit(void *this_fn, void *call_site) __attribute__((no_instrument_function));

void __cyg_profile_func_enter(void *this_fn, void *call_site){
	tracepoint( doom_tracepoint, func_entry, (long)this_fn);
}

void __cyg_profile_func_exit(void *this_fn, void *call_site){
	tracepoint( doom_tracepoint, func_exit, (long)this_fn);
}
