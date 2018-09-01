%% Leer imagen
img1 = imread('conmano.jpg');
img2 = imread('sinmano.jpg');

%% Transformando a escala de grises
gray1 = rgb2gray(img1);
gray2 = rgb2gray(img2);

%% Resta de ambas imagenes
resta = abs(gray2-gray1);
imshow(resta);

%% Mayor valor de intensidad
maxResta = max(max(resta));
[row,col] = find(resta == maxResta);
figure
imshow(resta);
hold on
plot(col,row,'r*')
hold off

%% Binarizar imagen
bin = resta > 5;
figure
imshow(bin)

%% Quitar puntos
bin2 = bwareaopen(bin,50);
figure
imshow(bin2)

%% Poner pixeles de la imagen binarizada en imagen sin mano

sobre = imoverlay(img2,bin2,[1 0 1]);
imshow(sobre)

%% Poner pixeles de la mano en imagen binarizada
final = zeros(960,540,3);
for i = 1:1:960
    for j = 1:1:540
        if (bin2(i,j) > 0)
            final(i,j,1) = img1(i,j,1);
            final(i,j,2) = img1(i,j,2);
            final(i,j,3) = img1(i,j,3);
        end
    end
end
final = uint8(final);
imshow(final)
