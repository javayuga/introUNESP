function [res,count]= PF(f,a,b,prec)
  count=0;
  x_=(a*f(b) - b*f(a))/(f(b)-f(a));
  while (abs(a-b) > 10^(-prec)) && abs(f(x_)) > 10^(-prec)
    x_=
  endwhile
