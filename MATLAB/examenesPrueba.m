imagen = imread('conmano.jpg');
figure(1);
imshow(imagen);%%muestra la imagen 
g = rgb2gray(imagen);%% convierte imagen RGB a escala de grises 
figure(2);
imshow(g);
b = im2double(g); %% convierte la intensidad de la imagen a doble precisión
[m,n] = size(b);
s = zeros (m,n); %% tamaño de mi imagen 225 225
for i = 2:1:m-1
    for j = 2:1:n-1
        s(i,j) = (((b(i,j))+(b(i,j+1))+(b(i,j-1))+(b(i-1,j-1))+(b(i-1,j))+(b(i-1,j+1))+(b(i+1,j+1))+(b(i+1,j-1))+(b(i+1,j)))/9); %%obtengo el promedio de los valores 
    end
end
r = im2uint8(s);%% solo puede tomar valores de 0 a 255
figure(3);
imshow(r);

