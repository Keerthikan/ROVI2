
%%%Matlab script for debugging.. 
clear
%(row,col) -- R notation... 
center = [-0.0199914, -0.191444, 1.19163];  
position = csvread('sphere_positions.csv');
z_vec = csvread('z_dir.csv');
y_vec = csvread('y_dir.csv');
x_vec = csvread('x_dir.csv');


matlab_z = bsxfun(@minus,position,center); 
matlab_sphere = bsxfun(@plus,center,z_vec); %Matlab_sphere with matlab_z


figure('units','normalized','outerposition',[0 0 1 1])
plot3(-0.0199914,-0.191444,1.19163, 'g.', 'markersize',30)
hold on
%plot3(position(:,1),position(:,2),position(:,3), 'r.')
hold on
%plot3(end_position(:,1),end_position(:,2),end_position(:,3), 'b.')
hold on
%plot3(matlab_sphere(:,1),matlab_sphere(:,2),matlab_sphere(:,3), 'r.')
hold on
grid on
hold on
xlabel('x')
hold on
ylabel('y')
hold on
zlabel('z')
hold on

vectorScale = 0.5;
error = []
for i = 1:100
    i
    trMatrix = vertcat(horzcat(x_vec(i,:)', y_vec(i,:)' , z_vec(i,:)', position(i,:)'),[0 0 0 1]);
    center = position(i,:);
    csX = x_vec(i,:);
    csY = y_vec(i,:);
    csZ = z_vec(i,:);
    
    if csZ == [0 0 -1]
        i
        error = [error i]
        display('Something aint right here');
    end
   
    quiver3(center(1), center(2), center(3), csX(1), csX(2), csX(3), vectorScale, 'r', 'LineWidth',3); 
    hold on
    quiver3(center(1), center(2), center(3), csY(1), csY(2), csY(3), vectorScale, 'g', 'LineWidth',3); 
    hold on
    quiver3(center(1), center(2), center(3), csZ(1), csZ(2), csZ(3), vectorScale, 'b', 'LineWidth',3); 
    hold on
end

