uses crt;
var
  a,b,c:integer;
begin
clrscr;
  write('Input Side 1: ');readln(a);
  write('Input Side 2: ');readln(b);
  write('Input Side 3: ');readln(c);
  if (a=c) and (b=a) then
    write('Sama Sisi')
  else if (a=b) or (b=c) or (b=a) then
    write('Sama Kaki')
  else
    write('Sembarang');
  readln;
end.
