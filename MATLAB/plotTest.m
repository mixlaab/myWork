x = -1: 0.01: 1;
y1 = x.^2;
plot(x,y1,'b')
y2 = -x.^2+1;
hold on
plot(x,y2,'r')
y3 = 0.5*sin(pi*x)+0.5;
plot(x,y3,'g')
y4 = 0.5*sin((pi*x)-pi)+0.5;
plot(x,y4,'m')