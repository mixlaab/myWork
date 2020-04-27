import cv2
img = cv2.imread('color_balls_small.png')
x,y = img.shape[:2]
resImg = cv2.resize(img, (y*3/2, x*3/2), interpolation = cv2.INTER_LINEAR)
cv2.imshow('image', img)
cv2.imshow('resized', resImg)
cv2.waitKey(0)
