
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER doom_tracepoint

#undef TRACEPOINT_INCLUDE_FILE
#define TRACEPOINT_INCLUDE_FILE ./doom_tracepoint.h

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


#if !defined(_DOOM_TRACEPOINT_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _DOOM_TRACEPOINT_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
	doom_tracepoint,
        func_entry,
        TP_ARGS(long, val),
            TP_FIELDS(
                ctf_integer_hex(long, address, val)
	)
)


TRACEPOINT_EVENT(
	doom_tracepoint,
        func_exit,
        TP_ARGS(long, val),
            TP_FIELDS(
                ctf_integer_hex(long, address, val)
	)
)

TRACEPOINT_LOGLEVEL(
	doom_tracepoint, func_entry, TRACE_INFO
)


TRACEPOINT_LOGLEVEL(
	doom_tracepoint, func_exit, TRACE_INFO
)

#endif /* _DOOM_TRACEPOINT_H */

#include <lttng/tracepoint-event.h>

#ifdef __cplusplus
}
#endif /* __cplusplus */

