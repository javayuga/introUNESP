f=@(x) 1/x;
a=0; b=1; epsilon1=0.0001; epsilon2=0.0001; maxIteracoes=1000; x0=a;x1=b;

MS(f, x0, x1, epsilon1, epsilon2, maxIteracoes);

function [r, k] = MS(f, x0, x1, epsilon1, epsilon2, maxIteracoes)
tmp=x0; r=x1; k=0;

if abs(f(tmp))<epsilon1
  fprintf('O valor da raiz aproximada é %.12f, obtido em %d iterações.\n',tmp,k);
  return;
end

if abs(f(r))<epsilon1 || abs(r-tmp)<epsilon2
  fprintf('O valor da raiz aproximada é %.4f, obtido em %d iterações.\n',r,k);
  return;
end

while k < maxIteracoes
  tmp2=r; r=r-(f(r)/(f(r)-f(tmp)))*(r-tmp); k=k+1;
  if abs(f(r))< epsilon1 || abs(r-tmp2)< epsilon2
    fprintf('O valor da raiz aproximada é %.12f, obtido em %d iterações.\n',r,k);
    break;
  end
  tmp=tmp2;
end
end