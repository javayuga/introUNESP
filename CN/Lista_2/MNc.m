function xi = MNc(f,df,x0,prec)
  while 1
    x1 = x0 - f(x0)/df(x0);
    if abs(x1-x0) < 10^(-prec) && abs(f(x1)) < 10^(-prec)
      break
    endif
    x0=x1;
  endwhile
endfunction