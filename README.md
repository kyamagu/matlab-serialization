Matlab serialization
====================

Matlab object serialization functions built with undocumented mex functions
`mxSerialize` and `mxDeserialize`. The function can convert any ordinary matlab
variable into a uint8 array. These functions are unsupported and may change at
any time without notice in the future Matlab release.

The implementation is built upon the `loadlibrary` and `calllib` in Matlab.
This package also contains an example of MEX versions in the `mex` directory.

Usage
-----

Add path to the `matlab-serialization` before use.

    >> addpath('/path/to/matlab-serialization');

Use `serialize` to encode arbitrary matlab variable. The function returns
encoded variable as a `uint8` array.

    >> x = randn(1,4)

    x =

        0.7147   -0.2050   -0.1241    1.4897

    >> y = serialize(x)

    y =

      Columns 1 through 21

        0    1   73   77    0    0    0    0   14    0    0    0   80 ...

Use `deserialize` to retrieve the encoded variable.

    >> z = deserialize(y)

    z =

        0.7147   -0.2050   -0.1241    1.4897

MEX examples
------------

You may build a MEX version of `serialize` and `deserialize` in the `mex/`
directory.

    >> cd mex/
    >> mex serialize.c
    >> mex deserialize.c

License
-------

The code may be redistributed under the BSD clause 3 license.
