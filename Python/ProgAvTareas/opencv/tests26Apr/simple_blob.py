import cv2
import numpy as np
img = cv2.imread('colorBalls.jpg')
imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

#setup parameters
params = cv2.SimpleBlobDetector_Params()
params.filterByColor = False
params.filterByArea = True
params.minArea = 5000
params.maxArea = 20000
params.filterByInertia = False
params.filterByConvexity = False
params.filterByCircularity = False

#create blob detector
det = cv2.SimpleBlobDetector_create(params)

lowerBlue = np.array([80,130,130])
upperBlue = np.array([130,255,255])
blueMask = cv2.inRange(imgHSV, lowerBlue, upperBlue)
blur = cv2.blur(blueMask,(10,10))
blueFilter = cv2.bitwise_and(img,img,mask = blueMask)

#get keypoints
keypnts = det.detect(blur)

#draw keypoints
cv2.drawKeypoints(img, keypnts, img, (0,0,255), cv2.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS)

cv2.imshow('img',img)
cv2.imshow('mask',blueMask)
cv2.imshow('filtered',blueFilter)
cv2.imshow('blurred',blur)


for k in keypnts:
    print k.pt[0], k.pt[1], k.size
cv2.waitKey(0)
