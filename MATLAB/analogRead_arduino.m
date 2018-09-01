clear all;
close all;
clc;

%Inicializas puerto serial
y = zeros(1,1000);
delete(instrfind({'Port'},{'COM3'}));
serPort = serial('COM3');
serPort.baudRate = 9600;

%Abres puerto serial
fopen(serPort);

% Num. de muestras
muestras = 1;

%Se abre figura
h = figure;

while(ishandle(h))
    valor = fscanf(serPort, '%d');
    length(valor);
    y(muestras) = valor();
    muestras
    hold on
    plot(muestras,y,'*')
    axis([0 50 0 1023])
    drawnow
    muestras = muestras + 1;
end

fclose(serPort);
delete(serPort);
%clear all;



