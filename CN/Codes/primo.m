function retorno = primo(n)
  
  if n <= 1
    retorno = 0
  else
    cont = 0
    for i = 2:1:(n-1)
      if mod(n,i)==0
        cont = cont+1;
      end
    end
    
    if cont==0
      retorno=1;
    else
      retorno=0;
    end
  end
endfunction