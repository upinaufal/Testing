uses crt;
var
  a,b,c:integer;
  x1,x2:real;

begin
clrscr;
  write('Input A: ');readln(a);
  write('Input B: ');readln(b);
  write('Input C: ');readln(c);
  x1:=((-b)+(sqrt(b*b-4*a*c)))/2*a;
  x2:=((-b)-(sqrt(b*b-4*a*c)))/2*a;
  write('X1= ',x1:0:2);
  write('X2= ',x2:0:2);
  readln;
end.
