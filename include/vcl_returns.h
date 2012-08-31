/*
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit and run generate.py instead
 */

/*lint -save -e525 -e539 */

#ifdef VCL_RET_MAC
VCL_RET_MAC(deliver, DELIVER, VCL_MET_HIT | VCL_MET_FETCH | VCL_MET_DELIVER | VCL_MET_ERROR)
VCL_RET_MAC(error, ERROR, VCL_MET_RECV | VCL_MET_PIPE | VCL_MET_PASS | VCL_MET_MISS | VCL_MET_HIT | VCL_MET_FETCH)
VCL_RET_MAC(fetch, FETCH, VCL_MET_MISS)
VCL_RET_MAC(hash, HASH, VCL_MET_HASH)
VCL_RET_MAC(hit_for_pass, HIT_FOR_PASS, VCL_MET_FETCH)
VCL_RET_MAC(lookup, LOOKUP, VCL_MET_RECV)
VCL_RET_MAC(ok, OK, VCL_MET_INIT | VCL_MET_FINI)
VCL_RET_MAC(pass, PASS, VCL_MET_RECV | VCL_MET_PASS | VCL_MET_MISS | VCL_MET_HIT)
VCL_RET_MAC(pipe, PIPE, VCL_MET_RECV | VCL_MET_PIPE)
VCL_RET_MAC(restart, RESTART, VCL_MET_PASS | VCL_MET_MISS | VCL_MET_HIT | VCL_MET_FETCH | VCL_MET_DELIVER | VCL_MET_ERROR)
#endif

#ifdef VCL_MET_MAC
VCL_MET_MAC(recv,RECV,
     ((1U << VCL_RET_ERROR)
    | (1U << VCL_RET_PASS)
    | (1U << VCL_RET_PIPE)
    | (1U << VCL_RET_LOOKUP)
))
VCL_MET_MAC(pipe,PIPE,
     ((1U << VCL_RET_ERROR)
    | (1U << VCL_RET_PIPE)
))
VCL_MET_MAC(pass,PASS,
     ((1U << VCL_RET_ERROR)
    | (1U << VCL_RET_RESTART)
    | (1U << VCL_RET_PASS)
))
VCL_MET_MAC(hash,HASH,
     ((1U << VCL_RET_HASH)
))
VCL_MET_MAC(miss,MISS,
     ((1U << VCL_RET_ERROR)
    | (1U << VCL_RET_RESTART)
    | (1U << VCL_RET_PASS)
    | (1U << VCL_RET_FETCH)
))
VCL_MET_MAC(hit,HIT,
     ((1U << VCL_RET_ERROR)
    | (1U << VCL_RET_RESTART)
    | (1U << VCL_RET_PASS)
    | (1U << VCL_RET_DELIVER)
))
VCL_MET_MAC(fetch,FETCH,
     ((1U << VCL_RET_ERROR)
    | (1U << VCL_RET_RESTART)
    | (1U << VCL_RET_HIT_FOR_PASS)
    | (1U << VCL_RET_DELIVER)
))
VCL_MET_MAC(deliver,DELIVER,
     ((1U << VCL_RET_RESTART)
    | (1U << VCL_RET_DELIVER)
))
VCL_MET_MAC(error,ERROR,
     ((1U << VCL_RET_RESTART)
    | (1U << VCL_RET_DELIVER)
))
VCL_MET_MAC(init,INIT,
     ((1U << VCL_RET_OK)
))
VCL_MET_MAC(fini,FINI,
     ((1U << VCL_RET_OK)
))
#endif

/*lint -restore */