/* Serialize mxArray into byte stream using hidden mex API
 */
#include "mex.h"

EXTERN_C mxArray* mxSerialize(const mxArray* arr);

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    if (nrhs != 1)
        mexErrMsgIdAndTxt("serialize:invalidArg",
                          "Wrong number of arguments: %d for 1.", nrhs);
    if (nlhs > 1)
        mexErrMsgIdAndTxt("serialize:invalidArg",
                          "Too many outputs: %d for 1.", nlhs);
    plhs[0] = (mxArray*)mxSerialize(prhs[0]);
}
