%Conversão de números fracionários da base decimal para binária
numReal = input('Informe um número real positivo na base 10: ');
precisao = input('Precisão da parte fracionária na conversão:' );
intePart = fix(numReal); fracPart = numReal - intePart;
%Conversão da parte inteira
nbase2 = [-1]; %será desconsiderado
while (intePart > 1)
aux = mod(intePart,2);
intePart = fix(intePart/2); nbase2 = [aux , nbase2];
end
if (intePart == 1) nbase2 = [1,nbase2]; else nbase2 = 0; end
%Conversão da parte fracionária
fra2 = [-1]; %será desconsiderado
for it = 1:1:precisao
if (fracPart == 0); %caso a conversão seja finita
fra2 = '0'; break;
end
conv = fix(fracPart * 2); fracPart = (fracPart * 2) - conv;
fra2 = [fra2 , conv];
end
disp(['Representação binária: ', num2str(nbase2(1:end-1)), ' . ' , ...
num2str(fra2(2:end))]);