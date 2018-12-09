syms a1 a2 a3 th0 th1 th2

A1 = [cos(th0) -sin(th0) 0 a1*cos(th0); sin(th0) cos(th0) 0 a1*sin(th0); 0 0 1 0; 0 0 0 1];
A2 = [cos(th1) -sin(th1) 0 a2*cos(th1); sin(th1) cos(th1) 0 a2*sin(th1); 0 0 1 0; 0 0 0 1];
A3 = [cos(th2) -sin(th2) 0 a3*cos(th2); sin(th2) cos(th2) 0 a3*sin(th2); 0 0 1 0; 0 0 0 1];

parcial = A1*A2*A3;

final = simplify(parcial);

%Matriz de rotación
R = final(1:3,1:3);

%Matriz de traslación
T = final(1:3,4);
