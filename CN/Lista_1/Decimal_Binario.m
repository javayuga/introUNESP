%Convers�o de n�meros inteiros em base 10 para base bin�ria

nbase10 = input('Informe um n�mero inteiro pos. na base 10: ');

nbase2 = [-1]; %sera desconsiderado
while (nbase10 > 1)
aux = mod(nbase10,2);
nbase10 = fix(nbase10/2);
nbase2 = [aux,nbase2];
end

if (nbase10 == 1)
nbase2 = [1,nbase2];
else
nbase2 = 0;
end

disp(['Representa��o bin�ria: ',num2str(nbase2(1:end - 1))]);