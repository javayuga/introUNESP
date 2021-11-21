%Convers�o de n�meros fracion�rios da base decimal para bin�ria
numReal = input('Informe um n�mero real positivo na base 10: ');
precisao = input('Precis�o da parte fracion�ria na convers�o:' );
intePart = fix(numReal); fracPart = numReal - intePart;
%Convers�o da parte inteira
nbase2 = [-1]; %ser� desconsiderado
while (intePart > 1)
aux = mod(intePart,2);
intePart = fix(intePart/2); nbase2 = [aux , nbase2];
end
if (intePart == 1) nbase2 = [1,nbase2]; else nbase2 = 0; end
%Convers�o da parte fracion�ria
fra2 = [-1]; %ser� desconsiderado
for it = 1:1:precisao
if (fracPart == 0); %caso a convers�o seja finita
fra2 = '0'; break;
end
conv = fix(fracPart * 2); fracPart = (fracPart * 2) - conv;
fra2 = [fra2 , conv];
end
disp(['Representa��o bin�ria: ', num2str(nbase2(1:end-1)), ' . ' , ...
num2str(fra2(2:end))]);