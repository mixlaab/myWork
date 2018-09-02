#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

int main(){
	struct termios toptions;
	int fd;

	fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY);

	cfsetispeed(&toptions, 9600);
	cfsetospeed(&toptions, 9600);

	toptions.c_lflag &= ~ICANON;
	tcsetattr(fd,TCSANOW,&toptions);

	char ch;
	char buf[10] = {0};
	printf("prueba3");

	while(1){
		int i = 0;
		do{
			int n = read(fd, &ch, 1);
			if (n > 0){
				buf[i++] = ch;
				printf("%d",i);
			}
		} while(ch != '\r' && i < 10);
	}
	buf[10] = 0;
	printf("%s", buf);
}
