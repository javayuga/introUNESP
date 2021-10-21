N = input('Defina N: ');
x = 1:1:N;
y = zeros(1,length(x));     %função que faz y começar nulo e comprimento de x (já definido)

for i= 1:1:N
  y(i) = primo(i);
endfor

plot(x,y,'ro')