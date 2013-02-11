/* Deserialize mxArray into byte stream using hidden mex API
 */
#include "mex.h"

EXTERN_C mxArray* mxDeserialize(const void* data, size_t size);

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
  if (nrhs != 1)
    mexErrMsgIdAndTxt("deserialize:invalidArg",
                      "Wrong number of arguments: %d for 1.", nrhs);
  if (nlhs > 1)
    mexErrMsgIdAndTxt("deserialize:invalidArg",
                      "Too many outputs: %d for 1.", nlhs);
  if (!mxIsUint8(prhs[0]))
    mexErrMsgIdAndTxt("deserialize:invalidArg",
                      "Input must be a UINT8 array.");
  plhs[0] = (mxArray*)mxDeserialize(mxGetData(prhs[0]),
                                    mxGetNumberOfElements(prhs[0]));
}
