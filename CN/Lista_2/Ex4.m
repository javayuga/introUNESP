f=@(x) x.^3 - 2*x.^2 - 3*x + 10 ;
df=@(x) 3*x.^2 - 4*x - 3;

a=0; b=1; epsilon1=0.0001; epsilon2=0.0001; maxIteracoes=1000;
x0=1.9;

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


