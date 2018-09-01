clear all
clc
a = arduino('com7', 'uno')
% methods(a)
% configurePin(a,'D7','pullup');
% readDigitalPin(a,'D7');
% readVoltage(a,'A0');

muestra = 0;
h = figure;

X = [];
Y = [];

grid

while(ishandle(h))
    X = [X muestra];
    valor = readVoltage(a,'A5');
    Y = [Y valor];
    hold on
    if (muestra <= 100)
        plot(X,Y,'b');
    else
        plot(X(muestra-100:muestra), Y(muestra-100:muestra),'b');
    end
    valor
    muestra = muestra + 1;
    axis([muestra-50 muestra+50 0 5]);
    drawnow
end