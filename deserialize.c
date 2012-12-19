/* Deserialize mxArray into byte stream using hidden mex API
 */
#include "mex.h"

EXTERN_C mxArray* mxDeserialize(const void* data, size_t size);

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
  if (nrhs == 1 && nlhs < 2 && mxIsUint8(prhs[0]))
    plhs[0] = (mxArray*)mxDeserialize(mxGetData(prhs[0]),
                                      mxGetNumberOfElements(prhs[0]));
  else
    mexErrMsgIdAndTxt("deserialize:invalidArg", "invalid arguments");
}
