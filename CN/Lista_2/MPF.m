function x1 = MPF(f,phi,x0,prec)
  x1=phi(x0);
  while abs(x1-x0) > 10^(-prec) || abs(f(x1)) > 10^(-prec)
    x0=x1;
    x1=phi(x0);
  endwhile
 endfunction