%% Cargar imagen original
orig = imread('ejemplo1.jpeg');
%imshow(orig)

%% Convertir a grises
orig_gris = rgb2gray(orig);
[m, n] = size(orig_gris); %Se obtiene número de filas y columnas
%imshow(orig_gris)

%% Matriz de variaciones
v = int8(80*rand(m,n)-40);

%% Proceso de degradación
%deg_gris = zeros(m,n);
deg_gris = int8(orig_gris) + v;

%% Verificar que pixeles estén dentro del rango
for i = 1:1:m
    for j = 1:1:n
        if (deg_gris(i,j) > 255)
            deg_gris(i,j) = 255;
        end
        
        if (deg_gris(i,j) < 0)
            deg_gris(i,j) = 0;
        end
    end
end

deg_gris = uint8(deg_gris);

imshow(orig_gris)
figure
imshow(deg_gris)





