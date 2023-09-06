cd 'C:\Users\xxxxxxxxxxxx'
clc
%a = arduino('com3', 'Mega2560','Libraries','Servo');
%s = servo(a,'D9');
%out = evalfis([.1 .2 .3 .4 .5],readfis('SM'))

aux1=4;
aux2=4;
aux3=4;
aux4=4;
aux5=4;
writePosition(s,.5)

% for i=1:1
%     a1 = readVoltage(a, 'A1');
%     a2 = readVoltage(a, 'A2');
%     a3 = readVoltage(a, 'A3');
%     a4 = readVoltage(a, 'A4');
%     a5 = readVoltage(a, 'A5');
%    a11(i)=a1;
%    a12(i)=a2;
%    a13(i)=a3;
%    a14(i)=a4;
%    a15(i)=a5;
%     disp('Aguarde, Calibrando o circuito')
%    pause(1)
% clc
% end
% 
% var(a11)
% var(a12)
% var(a13)
% var(a14)
% var(a15)
% pause(1)
for i=1:1000
    clc
a1 = readVoltage(a, 'A1')
a2 = readVoltage(a, 'A2')
a3 = readVoltage(a, 'A3')
a4 = readVoltage(a, 'A4')
a5 = readVoltage(a, 'A5')

a1=a1-4.0274;
a2=a2-3.8123;
a3=a3-4.0371;
a4=a4-4.0567;
a5=a5-3.9687;

out = ((evalfis(3*[a1 a2 a3 a4 a5 ],readfis('SM')))+1)*90

writePosition(s,out/180)
pause(1);
end