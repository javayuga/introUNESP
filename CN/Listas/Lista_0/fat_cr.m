function fat=fat_cr(n)
  fat=1;
  if n>1
    fat=fat_cr(n-1)*n;
  else
    fat=1;
  end
endfunction