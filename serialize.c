/* Serialize mxArray into byte stream using hidden mex API
 */
#include "mex.h"

EXTERN_C mxArray* mxSerialize(const mxArray* arr);

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
  if (nrhs == 1 && nlhs < 2)
    plhs[0] = (mxArray*)mxSerialize(prhs[0]);
  else
    mexErrMsgIdAndTxt("serialize:invalidArg", "invalid arguments");
}
