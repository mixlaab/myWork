%%Problema 1

%% Resistencias 
R1 = 9e3;
R2 = 4e3;
R3 = 3e3;
R4 = 6e3;
R5 = 18e3;

%%%Ley de Ohm
%Vr1 = R1*i1;
%Vr2 = R2*i2;
%Vo = R3*i3;
%Vo = R4*i4;
%Vr5 = R5*i5;
%
%%%LVK (4 incognitas)
%Vr1 = Vr2 + Vo;
%Vr2 + Vo = Vr5;
%
%%LCK (5 incognitas)
%i1 + i2 + i5 = 12;
%i1 + i3 + i4 + i5 = 12;
%
%%%Reescribiendo Ley de Ohm
%i1 = Vr1/R1;
%i2 = Vr2/R2;
%i3 = Vo/R3;
%i4 = Vo/R4;
%i5 = Vr5/R5;
%
%%Reescribiendo LCK (5 incognitas)
%Vr1/R1 + Vr2/R2 + Vr5/R5 = 12;
%Vr1/R1 + Vo/R3 + Vo/R4 + Vr5/R5 = 12;
%
%%Ecuaciones simultaneas
%Vo - Vr1 + Vr2 = 0;
%Vo + Vr2 - Vr5 = 0;
%(1/R1)*Vr1 + (1/R2)*Vr2 + (1/R5)*Vr5 = 12e-3;
%((1/R3)+(1/R4))*Vo+(1/R1)*Vr1+(1/R5)*Vr5 = 12e-3;

A = [1 -1 1 0; 1 0 1 -1; 0 1/R1 1/R2 1/R5; (1/R3)+(1/R4) 1/R1 0 1/R5];
b = [0; 0; 12e-3; 12e-3];

x = A\b;

