
a = input('Informe a ');
b = input('Informe b ');
c = input('Informe c ');

delta = b^2 - 4*a*c;

if delta < 0 
 fprintf('%5.2fx^2+%5.2fx+%5.2f=0 não possui raiz real', a,b,c);
else
 x1=(-b+sqrt(delta))/(2*a);
 x2=(-b-sqrt(delta))/(2*a);
 if delta==0
   fprintf('%5.2fx^2+%5.2fx+%5.2f=0 possui %5.2f como raiz real', a,b,c,x1);
 else
   fprintf('%5.2fx^2+%5.2fx+%5.2f=0 possui %5.2f e %5.2f como raizes reais', a,b,c,x1,x2);
 end
end

%plotar o gráfico

inf = input ('defina o inf: ');
sup = input ('defina o sup: ');
pass = input ('defina os passos entre pontos: ');

x = inf:pass:sup; 
y = a*x.^2+b*x+c;  
plot(x,y,'r-');