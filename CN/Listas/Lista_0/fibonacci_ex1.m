n = input('Digite quantos elementos tem na série: ');
a=1;
b=1;
x=n-1; 

for i=1:n
  fprintf('%d ', a);
  c=a+b;
  a=b;
  b=c;
end