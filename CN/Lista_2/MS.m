function x1 = MS(f,x0,x1,prec)
  x2 = (x0*f(x1) - x1*f(x0))/(f(x1)-f(x0));
  %E = [-1.0];
  while abs(x2-x1) > 10^(-prec) || abs(f(x2)) > 10^(-prec)
    x0=x1;
    x1=x2;
    x2=(x0*f(x1) - x1*f(x0))/(f(x1)-f(x0));
    %E = [E, (x2-x1)];
  endwhile
  % plot [E,(x2-x1)];
endfunction