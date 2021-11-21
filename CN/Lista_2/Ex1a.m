x = -20:0.05:2;
y = 4 .* cos(x);
z = exp(2*x);
fx = 4 .* cos(x) - exp(2*x);

plot(x,y,'r--');
hold on;

plot(x,z,'b--');
hold on;

plot(x,fx,'m-');
grid on; legend('y = 4cos(x)','z = exp(2x)','fx = 4cos(x) - exp(2x)'); title('Questão 1a (Melina Almeida)');
hold on;