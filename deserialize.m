function obj = deserialize(bytes)
%DESERIALIZE Decode a matlab object from a byte sequence.
%
%    obj = deserialize(bytes)
%
% DESERIALIZE decodes matlab object from a byte sequence created by SERIALIZE.
%
% See also serialize
    loadlibmx();
    if ~isa(bytes, 'uint8')
      error('Input must be uint8: %s', class(bytes));
    end
    obj = calllib('libmx', 'mxDeserialize', bytes, numel(bytes));
end