N = input('Defina N: ');
x = 1:1:N;
y = zeros(1,length(x));     %fun��o que faz y come�ar nulo e comprimento de x (j� definido)

for i= 1:1:N
  y(i) = primo(i);
endfor

plot(x,y,'ro')