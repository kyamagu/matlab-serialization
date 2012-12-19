Matlab serialization
====================

Matlab object serialization functions built with undocumented mex functions
`mxSerialize` and `mxDeserialize`. These functions are unsupported and
Mathworks may change at any time without notice.

Compile
-------

Use the supplied `Makefile` in unix environment, with MATLAB installation path.

    $ make MATLABDIR=/usr/local/matlab

Alternatively, just call `mex` in the matlab shell.

    >> mex serialize.c
    >> mex deserialize.c

Usage
-----

Use `serlialize` to encode arbitrary matlab variable. The function returns
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

License
-------

The code may be redistributed under the BSD clause 3 license.
