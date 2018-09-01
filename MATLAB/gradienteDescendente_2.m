axis([0 100 0 100])

X = [2 4.5 15.3 22.2 30 32 45 77 88 90];
Y = [5 7 11 33 56 67.7 82.2 90.4 92.1 95.1];

plot(X,Y,'*')

m = 0.2;
b = 0;

X2 = 0:0.1:100;
Y2 = m*X2+b;
hold on
plot(X2,Y2)

while(ishandle(h))
    for i = 1: length(X)
        hold off
        plot(X,Y,'*')
        Y_guess = m*X(i)+b;
        error = Y(i)-Y_guess;
        ajuste_m = error*X(i);
        ajuste_b = error;
        m = m + ajuste_m;
        b = b + ajuste_b;
        Y2 = m*X2+b;
        hold on
        plot(X2,Y2)
        drawnow
    end
end
