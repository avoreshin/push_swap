###  Push swap

• Игра состоит из 2 стопок с именами a и b.<br>
• Начать с:

1. стек a содержит случайное количество отрицательных и/или положительных чисел
который не может быть продублирован.
◦ b пусто
2. Цель состоит в том, чтобы отсортировать числа в порядке возрастания в стеке a.
 
3. Для этого в вашем распоряжении следующие операции:

###Запуск чекера

```shell
$>chmod 777 ./checker_Mac
$>./checker 3 2 1 0
rra
pb
sa
rra
pa
  press "ctrl + d"
OK
```
```shell
$>./checker 3 2 1 0
sa
rra
pb
KO
```
```shell
$>./checker 3 2 one 0
Error
$>./checker "" 1
Error
$>
```
- ``sa : swap a`` — поменять местами первые 2 элемента в верхней части стека a. Ничего не делать, если есть
только один элемент или ни одного).
- ``sb : swap b`` — поменять местами первые 2 элемента в верхней части стека b. Ничего не делать, если есть
только один элемент или ни одного).
- ``ss : sa и sb`` одновременно.
- ``pa : push a`` — взять первый элемент в верхней части b и поместить его в верхнюю часть a. Делать
ничего, если b пусто.
- ``pb : push b`` — взять первый элемент в верхней части a и поместить его в верхнюю часть b. Делать
ничего, если a пусто.
- ``ra : rotate a`` — сдвинуть вверх все элементы стека a на 1. Первый элемент становится
последний.
- ``rb : rotate b`` — сдвинуть вверх все элементы стека b на 1. Первый элемент становится
последний.
- ``rr : ra и rb`` одновременно.
- ``rra : reverse rotate a``- сдвинуть вниз все элементы стека a на 1. Последний элемент
становится первым.
7
Push_swap Потому что Swap_push не такой естественный
- ```rrb : reverse rotate b``` — сдвинуть вниз все элементы стека b на 1. Последний элемент
становится первым.
- ``` ррр : рра и ррб``` одновременно

```shell

$ ARG=`ruby -e "puts (-540 .. 539).to_a.shuffle.join(' ')"`

$ ./push_swap $ARG | ./checker_Mac $ARG
```
##  Video
Связанные списки [Cмотреть ▶](https://youtube.com/playlist?list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)






