n=input('Insira o n�mero de vari�veis: ');

soma_b=0;
soma_quadrada=0;

if n<2 
  fprintf('Vc deve inserir pelo menos dois valores...');
else
  for i=1:1:n
    b=input('Agora, insira os valores de cada vari�vel: ');
    soma_b=soma_b+b;
    soma_quadrada=(soma_quadrada)+(b^2);
  endfor
end
media=(soma_b)/(n);
desvio=sqrt((n*soma_quadrada-soma_b^2)/(n*(n-1)));
coef_var=((media/desvio)*100);

fprintf('\nA m�dia desses valores � %5.2f\n', media);
fprintf('O desvio padr�o desses valores � %5.2f\n', desvio);
fprintf('O ceoef de varia��o desses valores � %5.2f\n', coef_var);