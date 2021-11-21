x = 0:0.1:6;
fx = (x./2) - tan(x);

plot(x,fx,'r-');
grid on; legend('fx = x/2 - tan(x)'); title('Questão 3a (Melina Almeida)');
hold on;

f=@(x) (x./2) - tan(x);
df=@(x) (x - ((x./2)-(tan(x))) / ((0.5)-(sec(x.^2))));

a=0; b=1; epsilon1=0.0001; epsilon2=0.0001; maxIteracoes=1000;
x0=4.25;

NewtonRaphson(f, df, x0, epsilon1, epsilon2, maxIteracoes);

function [r, k] = NewtonRaphson(f, df, x0, epsilon1, epsilon2, maxIteracoes)
r=x0; tmp=0; k=0;
if abs(f(x0))<epsilon1
  fprintf('O valor da raiz aproximada é %.4f, obtido em %d iterações.\n',r,k);
  return;
end

while k<maxIteracoes
  tmp=r;
  r=r-(f(r)/df(r));
  k=k+1;
  if abs(f(r))<epsilon1 || abs(r-tmp)<epsilon2
    fprintf('O valor da raiz aproximada é %.4f, obtido em %d iterações.\n',r,k);
    break;
  end
end
end


