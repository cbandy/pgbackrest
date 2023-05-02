/***********************************************************************************************************************************
IO Sink Filter

Consume all bytes sent to the filter without passing any on. This filter is useful when running size/hash filters on a remote when
no data should be returned.
***********************************************************************************************************************************/
#ifndef COMMON_IO_FILTER_SINK_H
#define COMMON_IO_FILTER_SINK_H

#include "common/io/filter/filter.h"

/***********************************************************************************************************************************
Filter type constant
***********************************************************************************************************************************/
#define SINK_FILTER_TYPE                                     STRID5("sink", 0x5b9330)

/***********************************************************************************************************************************
Constructors
***********************************************************************************************************************************/
FN_EXTERN IoFilter *ioSinkNew(void);

#endif
