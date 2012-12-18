/* Serialize mxArray into byte stream using hidden mex API
 */
#include "mex.h"

#ifndef EXTERN_C

#ifdef __cplusplus
  #define EXTERN_C extern "C"
#else
  #define EXTERN_C extern
#endif

#endif

EXTERN_C mxArray* mxSerialize(const mxArray* arr);

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
  if (nrhs == 1 && nlhs < 2)
    plhs[0] = (mxArray*)mxSerialize(prhs[0]);
  else
    mexErrMsgIdAndTxt("serialize:invalidArg", "invalid arguments");
}
