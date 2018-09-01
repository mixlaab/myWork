%% Leer una imagen de MATLAB
img1 = imread('conmano.jpg');
img2 = imread('sinmano.jpg');

%% Mostrar imágenes
imshow(img1)
figure
imshow(img2)

%% Transformar a grises
gris1 = rgb2gray(img1);
gris2 = rgb2gray(img2);

%% Mostrar grises
figure
imshow(gris1)
figure
imshow(gris2)

%% Restar ambas imágenes
resta = abs(gris2 - gris1);
imshow(resta)

%% Binarizar imagen
binaria = resta > 10;
imshow(binaria)

%%Imagen sin puntos
sinp = bwareaopen(binaria,100);
imshow(sinp);
