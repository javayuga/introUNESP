x = -6:0.1:6;
y = 1./(x);
z = log(x);
fx = 1-x.*log(x);

plot(x,y,'r--');
hold on;

plot(x,z,'b--');
hold on;

plot(x,fx,'g-');
grid on; legend('y = 1/x','z = 1-xln(x)', 'fx=1-xln(x)'); title('Questão 1b (Melina Almeida)');
hold on;