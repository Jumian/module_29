# 29.4 ������������ ������ #
## � ������������ ������ ����: ###

������������ ������ ������� ���������, ��� �� ������� �������� ������. �� ����� ����� �� �������� ��������. 

�������������� ������ �������� ���, ��� ����� ��� ������� ���������������, ����� ������� �� ����������������. �� ����� ������ ���������� �� �� �������� � �������� �������� ����� ��������, ���� ��� �������������. 



### ���� ������������ ������ ### 
- ��������� ������ ������ � �������� C++.
- ������ ���������� �������� ��������� ���.
- ������� ������������� ����������� ������� ��� �������� �����������.


### ��� ������ � ������ ####
#### ������������ ������: #### 

- ������ 1. �������.  
#### �������������� ������: ####

- ������ 2. ��������� Shape (�� �������).


### ������ 1. ������� ### 
������ ������� �� �����. ��� ���� �������� ����� ������� � �������, �� ���� �������� ����� � ������������ �� ����� �������. �� ���, ���� ����� �������� �� ����� ���������, ��������, ������� ������� ��� ������ �� ������ �����. ���������� ����� Dog: ��� ������ ����� ����� � ������, � ��������� ������ ����� ������ �������. ����� �������� ��� �������� ������ Dog, �� ����� ������� ��� ���� ����� ����������� �������� � ����������� �� ���� ��� �����. �� ���, ���� �� ��� ������ ����� ������ �������, � ��������� �� ��� ������ �� ����� �������.���� ������ � ��������� ����� Dog ����� �������, ����� � ��� �������� ����� ���� ��������� ��������� ����� ������, �� ��� ���� �� ������ ��������� ��������� ������. ������ ������ ����� ���������� � ������� ������ show_talents().

### ��� ����� ������� ### 
- �������� ����� Dog, � �������� ����� ��������� ����� �����������.
- �������� ����������� ����� ������� (Talent), �� �������� ����� ������������� ��� ����������� �����������. ���� ����� ������������ ���: ������ ������� (Swimming), ������ ��������� (Dancing), ������ ������� (Counting), �� ������ �������� � ������.
- �������� � ������ Dog ����� show_talents() ��� ������ ���� ������������, �������� �������� ������.
### ���������� � ���������� ### 
����� Talent ������ ���� �����������. ��� ������, ��� ������� ������ ������ �� ������� �� ������, ��� ��� ���� �� ��� ������� ��������� ��� ������ ����������� (pure virtual).

������ �����������, ����������� �� ������������ ������ Talent, ������ ���� ������������ � ���� ���������� ������.

### ������ ���������� ### 
������ ������ � ������ Steve:
```C++
    Dog dog1("Steve")
```
- ��������� �� ������ ��������� � �������.

���� �� ������� ������ ������ show_talents(), �� �� ����� ����� ��������:
```
This is Steve and it has some talents: 
            It can �Dance� 
            It can �Swim�
```
###  ������ � ������������ ### 
- ��� �������� ������������ ����� ������������ ������.
- ��� �������� ������������ ������ ����������� ������������ �����, ��� ������� voice � ������ Animal ���� ��������� ������ �����������. ��� ������� � ���������� �������.
### ��� ����������� ### 
- ����� Talent �������� �����������.
- ��� ����������� �������� �������� � ����������� �� ������ Talent.
- ����� Dog �� ����������� �� ������ Talent.
- ��� ������ �� ������ show_talents � ������� ������ ���� ��������������� �������� ��� ������, �������� �������� ������.


### ������ 2. ��������� Shape (�������������� �������) ### 
� ��� ���� ����� ������� ��������� �������������� �����: ����(Circle), �������������(Rectangle) � �����������(Triangle), ������� ����������� �� ������ ������ �������������� ������ (Shape). ������ �� ���� ������� ����� ������ �������� �������, ������������ �������������� � ������ ����. ����� ���� ����� ������� printParams ������� �� ����������� �� ��������� �� ������ ���� �������������� ������ ������� �� ����� ��� ������.

### ��� ����� ������� ### 
- �������� ��������� Shape (������), ������� ������������� ��������� ������:
```C++
virtual double square() = 0; � ���������� ������� ���������� ������;

virtual BoundingBoxDimensions dimensions() = 0; � ������� ������������ ��������������;
```
BoundingBoxDimensions � ������� ���������, ������� �������� ������ � ������;
```
virtual std::string type() = 0; � �������� ����������� ����, ��������, ������� ������ Triangle ��� ������ Triangle;

void printParams(Shape *shape) � ���� ����� ����� ���������� ����� ������:

{ 
   std::cout <<"Type: " << shape->type() << std::endl;
```
���������� virtual � = 0; � ������ ����� ����������� �����. ��� ��������, ��� ����� ����� ����������� ������ ���� ������������ � ������-����������. ���� ����������� ������������ ���� ����� �� ������ ����������, �� ���������� ����� �������� �� ���������� �������, ��������� ��� virtual � = 0. �� ���� ����������� ����� �������� �������� ����� ������ � ���� �����, ����� ������� ������ ������ ����.

   
�������� ������-���������� Shape: Circle, Rectangle � Triangle.

� ������� �� ������� ����� ������ ����� �����: � ������������ ����� ��� ������� � ���� ���������� double, � ����� � ������, � � �������������� � ����� � ������. ��� ��� ��� ��� ����������� �� Shape, � ������ �� ������� ������� ����������� ������ ���������� �����������, ������� � �����, ������������ �������� ����.

������� ������������ ��� ��������� ������ ������ ��������� ��� ������ ������� ������:

sqrt(p * (p - a) * (p - b) * (p - c)), ��� p � ������������.

������� ������������ �������������� ��� ������������ ��������� �� ������� ������� � ������� ������� ������ ��������� ����������:

a * b * c / (4 * sqrt(p*(p - a)*(p - b)*(p - c))), ��� � � ����� ������������.

����� �������� ��� �� ��� � �������� ������� ��������, � ������� ������� �����������.

� ������� main �������� printParams �� ����� ������, ������� �� �������.

������
```
Triangle t(3,4,5); 
    printParams(&t);
```
�����
```
Type: Triangle 
Square: 6 
Width: 5 
Height: 5
```
### ��� ����������� ### 
- ���������� ������� � ������� ��������� � ���� ������, ������� ������������� ����������������.
- ������� ��������� ���������� ���� ������. ��� ������������� �������� � void.
- ������� ��������� ����� �������� ����������� �� ���������� Shape.
- ��������� ������� void � printParams (Shape *shape). ����� ������ �����������.


### ��� ��������� ������ �� �������� ### 
- ��������� ������ �� repl.it ��� ���� .��� � �������� ����� ����� ����.

- ��������� ��� .cpp- � .h-����� (� ������� �� ������� ������), main.cpp � CMakeLists.txt (������� ��������� ������). ���������� ������ ������ (�����-��������� shape) ��������� � ��������� �����.