function obj = deserialize(bytes)
%DESERIALIZE Decode a matlab object from a byte sequence.
%
%    obj = deserialize(bytes)
%
% DESERIALIZE decodes matlab object from a byte sequence created by SERIALIZE.
%
% See also serialize
    loadlibmx();
    assert(isa(bytes, 'uint8'), 'Input must be uint8: %s', class(bytes));
    obj = calllib('libmx', 'mxDeserialize', bytes, numel(bytes));
end