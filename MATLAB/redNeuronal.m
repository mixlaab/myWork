x = rand(1,50);
y = rand(1,50);
hold on
for i = 1:50
    if(x(i) > y(i))
        plot(x(i),y(i),'*b')
    else
        plot(x(i),y(i),'or')
    end
end
