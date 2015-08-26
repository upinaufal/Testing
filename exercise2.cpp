uses crt;
var
  a,b,c,i:integer;
begin
clrscr;
  c:=1;
  i:=1;
  write('A: ');readln(a);
  write('B: ');readln(b);
  while (i<=b) do
  begin
    c:=c*a;
    i:=i+1;
  end;
  write('C: ',c);
  readln;
end.
