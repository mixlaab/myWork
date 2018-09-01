%% Leer imagenes
img1 = imread('ejemplo1.jpeg');
img2 = imread('ejemplo2.jpeg');

%% Mostrar imagenes a color
imshow(img1);
figure
imshow(img2);

%% Convertir imágenes a blanco y negro
gris1 = rgb2gray(img1);
gris2 = rgb2gray(img2);

%% Mostrar imagen gris
figure
imshow(gris1)
figure
imshow(gris2)
%% Resta de imagenes 
resta = abs(gris2 - gris1);
imshow(resta)
