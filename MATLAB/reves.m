clc
close all

cam = webcam('Integrated Webcam');
h = figure;

while (ishandle(h))
    data = snapshot(cam);
    %[f,c,d] = size(data);
    %R = zeros(f,c,d);
    %G = zeros(f,c,d);
    %B = zeros(f,c,d);
    %R(:,:,1) = data(:,:,1);
    %G(:,:,2) = data(:,:,2);
    %B(:,:,3) = data(:,:,3);
    %R= uint8(R);
    %G= uint8(G);
    %B= uint8(B);
    
    %R = inv(double(data));
    %subplot(1,3,1)
    size(data)
    [f,c,n] = size(data);
    new = zeros(f,c,n);
    for i = 1:f
        for j = 1:c
            for k = 1:n
                new(i,j,k) = data(i,c+1-j,k);
            end
        end
    end
    new = uint8(new);
    imshow(new)
    
    %subplot(1,3,2)
    %imshow(G)
    %subplot(1,3,3)
    %imshow(B)
    
    hold on
    drawnow
end

clear cam