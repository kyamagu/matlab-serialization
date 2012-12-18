function obj = deserialize(bytes)
%DESERIALIZE decode a matlab object from a byte sequence
%
%    obj = deserialize(bytes)
%
% DESERIALIZE decodes matlab object from a byte sequence. The function depends
% on hidden mex API and may change in the future without notification.
%
% See also serialize
