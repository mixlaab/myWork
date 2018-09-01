clc
close all

%Initialize vid to store incoming video
%videoinput gets video from webcam
%windows video, adaptor 1, resolution
%vid = videoinput('winvideo',1,'YUY2_320x240');
%set(vid,'FramesPerTrigger',Inf);
%set color format
%set(vid,'ReturnedColorSpace','rgb');
%extract screenshots/images every 5ms
%vid.FrameGrabInterval = 100;
cam = webcam(1);

while(1)
    data = snapshot(cam);
    
    diff_imR = imsubtract(data(:,:,1),rgb2gray(data));
    diff_imR = medfilt2(diff_imR,[3,3]);
    diff_imR = imbinarize(diff_imR,0.18);
    diff_imR = bwareaopen(diff_imR,300);
    
    diff_imG = imsubtract(data(:,:,2),rgb2gray(data));
    diff_imG = medfilt2(diff_imG,[3,3]);
    diff_imG = imbinarize(diff_imG,0.18);
    diff_imG = bwareaopen(diff_imG,300);
    
    diff_imB = imsubtract(data(:,:,3),rgb2gray(data));
    diff_imB = medfilt2(diff_imB,[3,3]);
    diff_imB = imbinarize(diff_imB,0.18);
    diff_imB = bwareaopen(diff_imB,300);
    
    bwR = bwlabel(diff_imR,8);
    bwG = bwlabel(diff_imG,8);
    bwB = bwlabel(diff_imB,8);
    
    statsR = regionprops(bwR,'BoundingBox','Centroid');
    statsG = regionprops(bwG,'BoundingBox','Centroid');
    statsB = regionprops(bwB,'BoundingBox','Centroid');
    
    imshow(data);
    
    hold on
    
    for(object=1:length(statsR))
        bbR = statsR(object).BoundingBox;
        bcR = statsR(object).Centroid;
        
        rectangle('Position',bbR,'EdgeColor','r','LineWidth',2)
        plot(bcR(1),bcR(2),'-m+')
    end
    
    for(object=1:length(statsG))
        bbG = statsG(object).BoundingBox;
        bcG = statsG(object).Centroid;
        
        rectangle('Position',bbG,'EdgeColor','g','LineWidth',2)
        plot(bcG(1),bcG(2),'-m+')
    end
    
    for(object=1:length(statsB))
        bbB = statsB(object).BoundingBox;
        bcB = statsB(object).Centroid;
        
        rectangle('Position',bbB,'EdgeColor','b','LineWidth',2)
        plot(bcB(1),bcB(2),'-m+')
    end
    
    hold off
    
end

%stop(vid)
%flushdata(vid);
clear cam
clear all;
