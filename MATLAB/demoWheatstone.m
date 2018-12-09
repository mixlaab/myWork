I = 0:0.001:0.1;
V = 9;
R = V./I;
plot(I,R)
title('Current vs. resistance')
grid
xlabel('I')
ylabel('R')
