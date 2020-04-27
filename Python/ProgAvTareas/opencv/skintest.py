import cv2
import numpy as np
#cap = cv2.VideoCapture(0)
cap = cv2.VideoCapture('http://192.168.15.9:4747/video')
#fourcc = cv2.VideoWriter_fourcc(*'XVID')
#vidWrite = cv2.VideoWriter('test_video.avi', \
#                fourcc, 20, (640,480))
while(True):
    ret,frame = cap.read()
#    vidWrite.write(frame)
    imgHSV = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    imgGray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    newBGR  =  cv2.cvtColor(imgGray,cv2.COLOR_GRAY2BGR)
    lower_skin = np.array([0,58,50])
    upper_skin = np.array([30,255,255])
    skinMask = cv2.inRange(imgHSV,lower_skin,upper_skin)
    res = cv2.bitwise_and(frame, frame, mask=skinMask)
    skinGray = cv2.add(res,newBGR)
    cv2.imshow('video', skinGray)
    cv2.imwrite('lastFrame.png', frame)
    if cv2.waitKey(1) & 0xff == ord('q'):
        break
cap.release()
#vidWrite.release()
cv2.destroyAllWindows()
