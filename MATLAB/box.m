%% Read images
ima_1 = imread('ejemplo1.jpeg');
ima_2 = imread('ejemplo2.jpeg');

%% Desplegar imágenes a color
%figure
%imshow(ima_1)
%figure
%imshow(ima_2)

%% Convertir imágenes a blanco y negro
gris_1 = rgb2gray(ima_1);
gris_2 = rgb2gray(ima_2);

%% Desplegar en blanco y negro
%figure
%imshow(gris_1);
%figure
%imshow(gris_2);

%% Resta de imágenes
resta = abs(gris_2 - gris_1);
figure
imshow(resta)

%% Inspeccionar imagen
imtool(resta)

%% Encontrar locación de intensidad máxima
maxResta = max(max(resta));
[row,col] = find(resta == maxResta);
[m,n] = size(resta);
imshow(resta)
hold on
plot(col,row,'r*');

%% Umbral
binario = resta > 80;
%umbral_2 = resta < 160;
%final = umbral_1 == umbral_2;
figure
imshow(binario)

%% Removing pixels
binario_2 = bwareaopen(binario,70);
imshow(binario_2)

%% Overlay
%sobre = imoverlay(
sobre = imoverlay(ima_2,binario_2,[1 0 1]);
imshow(sobre)

%% Creando imagen

mat = 255*ones(720,1280,3);
for fila=1:1:720
    for columna=1:1:1280
        if (binario_2(fila,columna) > 0)
            mat(fila,columna,1) = ima_1(fila,columna,1);
            mat(fila,columna,2) = ima_1(fila,columna,2);
            mat(fila,columna,3) = ima_1(fila,columna,3);
        end
    end
end
mat = uint8(mat);
imshow(mat)
