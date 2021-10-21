function res = soma_matriz(A,B)
  dimA = size(A);
  dimB = size(B);
  
  if size(A)==size(B)
  %if dimA==dimB
  %if (dimA(1)==dimB(1)) && (dimA(2)==dimB(2))
    res=A+B;
  else 
    %não é compativel
    res=-1
  end
  
  
endfunction 