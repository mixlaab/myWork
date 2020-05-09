import cv2
import numpy as np

img = np.zeros([200,200,3])

img[:,:,0] = np.ones([200,200])*0
img[:,:,1] = np.ones([200,200])*255
img[:,:,2] = np.ones([200,200])*100

preimg = np.uint8(img)
bgrimg = cv2.cvtColor(preimg, cv2.COLOR_HSV2BGR)
np.savetxt('blue.csv', bgrimg[:,:,0], delimiter=',')
np.savetxt('green.csv',bgrimg[:,:,1], delimiter=',')
np.savetxt('red.csv', bgrimg[:,:,2], delimiter=',')

cv2.imshow("BGR", img)
cv2.imshow("HSV", bgrimg)
#cv2.imshow("image", img)
cv2.waitKey()
