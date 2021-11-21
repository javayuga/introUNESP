x = -20:0.1:20;
y = x.^3;
z = x;
fx = x.^3 + x - 1000;

plot(x,y,'r--');
hold on;

plot(x,z,'b--');
hold on;

plot(x,fx,'c-');
grid on; legend('y = x^3','z = x)', 'fx = x^3 + x - 1000'); title('Questão 1c (Melina Almeida)');
hold on;