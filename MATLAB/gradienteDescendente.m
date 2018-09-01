axis([0 100 0 100])

h = figure(1);

X = [0 2 6 30 42 57 75 81 83 95];
Y = [20 23 33 37 40 51 67 92 95 99];

m = 0;
b = 0;
tasa = 0.00001;

plot(X,Y,'*')

X2 = 0:0.1:100;
Y2 = m*X2+b;
hold on
plot(X2,Y2)

while(ishandle(h))
    for i = 1: length(X)
        hold off
        plot(X,Y,'*')
        Y_guess = m*X(i)+b;
        error = Y(i) - Y_guess;
        ajuste_m = error*X(i);
        ajuste_b = error;
        m = m + ajuste_m*tasa;
        b = b + ajuste_b*tasa;
        plot(X,Y,'*')
        hold on
        Y2 = m*X2+b;
        plot(X2,Y2)
        drawnow
    end  
end