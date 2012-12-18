function bytes = serialize(obj)
%SERIALIZE serialize a matlab object into a byte sequence
%
%    bytes = serialize(obj)
%
% SERIALIZE takes arbitrary matlab object and encode it into a byte sequence.
% The result is given in uint8 array. The function depends on hidden mex
% API and may change in the future without notification.
%
% See also deserialize
