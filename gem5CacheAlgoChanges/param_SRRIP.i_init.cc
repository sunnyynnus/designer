#include "sim/init.hh"

extern "C" {
    void init_param_SRRIP();
}

EmbeddedSwig embed_swig_param_SRRIP(init_param_SRRIP);
