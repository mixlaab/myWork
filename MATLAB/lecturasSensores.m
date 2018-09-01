clear all
clc
a = arduino('com7', 'uno');

w = figure;
muestra = 0;

X = [];
Y = [];

while(ishandle(w))
    valor = readVoltage(a, 'A5');
    %valor
    hold on
    X = [X muestra];
    Y = [Y valor];
    plot(X, Y, 'g');
    axis([0 100 0 5]);
    if(muestra > 100)
       axis([muestra-100, muestra+1, 0, 5]);
    end
    muestra = muestra + 1;
    drawnow
end


