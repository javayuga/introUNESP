function x1 = MN(f,df,x0,prec)
  x1 = x0-f(x0)/df(x0);
  E = [x1-x0];
  while abs(x1-x0) > 10^(-prec) || abs(f(x1)) > 10^(-prec)
    x0=x1;
    x1=x0-f(x0)/df(x0);
    E = [E,(x1-x0)];
  endwhile
  plot(E)
 endfunction