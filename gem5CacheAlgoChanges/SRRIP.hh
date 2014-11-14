#ifndef __PARAMS__SRRIP__
#define __PARAMS__SRRIP__

class SRRIP;

#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/BaseTags.hh"

struct SRRIPParams
    : public BaseTagsParams
{
    SRRIP * create();
    bool sequential_access;
    int assoc;
};

#endif // __PARAMS__SRRIP__
