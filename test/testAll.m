function testAll
%TESTALL Run tests.
  test1;
end

function test1
%TEST1
  x = magic(4);
  y = serialize(x);
  z = deserialize(y);
  assert(all(x(:)==z(:)));
  disp('Successfully run test1.');
end
