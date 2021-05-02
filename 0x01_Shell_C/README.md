<div align="center"><img src="https://user-images.githubusercontent.com/66263776/98416555-43fa9b80-204d-11eb-800a-df8e19b62655.jpg" width="500" height= "200"> </div>

# <div align="center"><img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"> 0x01_Shell_C <img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"></div>

## :memo: Activities :memo:
### <u>Technical Conversation</u>
<details>
    <summary><b>💥What does <code>gcc</code> stand for?</b></summary>
</details>
<details>
    <summary><b>💥Who developed Emacs?</b></summary>
    
    Guido van Rossum
</details>
<details>
    <summary><b>💥When do you use <code>man</code>, and when do you use <code>help</code>?</b></summary>
</details>
<details>
    <summary><b>💥What do you find in the <code>/var/log</code> directory?</b></summary>
</details>
<details>
    <summary><b>💥What is the Linux command to translate or delete characters?</b></summary>
</details>
<details>
    <summary><b>💥How would you delete a file on Linux?</b></summary>
</details>
<details>
    <summary><b>💥In C, what is the operator used to get the size, in bytes, of a type?</b></summary>
</details>
<details>
    <summary><b>💥What happens when you type <code>gcc main.c</code>?</b></summary>
</details>


<details>
    <summary><b>💥 Who created the Python programming language?</b></summary>
    
    Guido van Rossum
</details>
<details>
    <summary><b>💥 What happens when you type <code>gcc main.c</code>?<b></summary>
    
    xxxx
</details>
<details>
    <summary><b>💥 When do you use <code>man</code>, and when do you use <code>help</code>?<b></summary>
    
    xxx
</details>
<details>
    <summary><b>💥 What do you find in the <code>/var/log</code> directory?<b></summary>
    
    xxx
</details>
<details>
    <summary><b>💥 What is the Linux command to translate or delete characters?<b></summary>
    
    xxx
</details>
<details>
    <summary><b>💥 How would you delete a file on Linux?<b></summary>
    
    xxx
</details>
<details>
    <summary><b>💥 In C, what is the operator used to get the size, in bytes, of a type?<b></summary>
    
    xxx
</details>
<details>
    <summary><b>💥 What does <code>gcc</code> stand for?<b></summary>
    
    It is a compiler of project GNU requires the follow step like:
    1) Preproccesor:
    * Remove comment in yuor code
    * Replaces macros. The macros will be replace to C proproccesor with their definitions throughout the program.
    *Include header file(.h). This contains all file of declaration (function, macros) that can be substituted into your program.
    2) Assembler:
    Convert the code into the pure binary or machine language
    3) Linker:
    And in this last step, object code becomes executable

</details>

---
<details>
<details>
    <summary><b>What is a queue, and how does it work?<b></summary>
    
    xxx
</details>
<details>
    <summary><b> What is a static method?<b></summary>
    
    A static method is a method inside a Class but not linked to this class or to an instance.
</details>
<details>
    <summary><b> What is a queue, and how does it work?<b></summary>
    
    xxx
</details>
## :gem:  :gem:
### 1) Who created the Python programming language?
> Rta: 
### 2) What happens when you type `gcc main.c`?
[Gcc.txt](https://github.com/CBarreiro96/Mock_Interview_Holberton/blob/main/Gcc.txt)
### 3) What is a queue, and how does it work?

[Queue.txt]()
### 4) What is a static method?
>Rta:A static method is a method inside a Class but not linked to this class or to an instance.
### 5) What is the difference between a class and an object or instance?
## :boom: Exercise of Shell, Bash and C :boom:
### 0) Being unique is better than being perfect
##### :interrobang: Create a script that takes a list of words as input and prints only words that appear exactly once.
* Input format: One line, one word
* Output format: One line, one word
* Words should be sorted

[Script_list of word](https://github.com/CBarreiro96/Mock_Interview_Holberton/blob/main/Script_list_of_word)
>Note: you need to created a list
### 1) Who are you?
##### :interrobang: Write a program that prints all the names defined by the compiled module hidden_4.pyc (please download it locally).
        * You should print one name per line, in alpha order
        * You should print only names that do not start with __
		* Your code should not be executed when imported
		* Make sure you are running your code in Python3.4.x (hidden_4.pyc has been compiled with this version)
> In operation
### 2) Singly linked list
##### :interrobang: Write a class Node that defines a node of a singly linked list by:
 * Private instance attribute: data:
 * property def data(self): to retrieve it
 * property setter def data(self, value): to set it:
 * data must be an integer, otherwise raise a TypeError exception with the message data must be an integer
    * Private instance attribute: next_node:
    * property def next_node(self): to retrieve it
    * property setter def next_node(self, value): to set it:
    * next_node can be None or must be a Node, otherwise raise a TypeError exception with the message next_node must be a Node object
    * Instantiation with data and next_node: def __init__(self, data, next_node=None):
And, write a class SinglyLinkedList that defines a singly linked list by:
 * Private instance attribute: head (no setter or getter)
 * Simple instantiation: def __init__(self):
 * Should be printable:
     * print the entire list in stdout
     * one node number by line
 * Public instance method: def sorted_insert(self, value): that inserts a new Node into the correct sorted position in the list (increasing order)
 * You are not allowed to import any module

[Singles_list_class.py](https://github.com/CBarreiro96/Mock_Interview_Holberton/blob/main/Single_list_class.py)
## 3) The eggs of the brood need to be an odd number
##### :interrobang: Write a script that prints every other line from the input, starting with the first line.
>Ubuntu$ \ls -1 | ./101-odd
>
>bin
>
>dev
>
>home
>
>lib
>
>lib64
>
>lost+found
>
>mnt
>
>proc
>
>run
>
>srv
>
>t
>
>t~
>
>usr
>
>vmlinuz
>
>Ubuntu$

[print_each_two_line](https://github.com/CBarreiro96/Mock_Interview_Holberton/blob/main/print_each_two_line)
## 4)  It is a good file that cuts iron without making a noise 
##### :interrobang: Write a shell script that creates a file named exactly \*\\'"Holberton School"\'\\*$\?\*\*\*\*\*:) containing the text Holberton School ending by a new line.

[Name_exactly](https://github.com/CBarreiro96/Mock_Interview_Holberton/blob/main/Name_exactly)
## 5) I feel like I am diagonally parked in a parallel universe 
##### :interrobang: write a function that draws a diagonal  line  on the terminal
 * Prototype **def print_diagonal(n)**
 * Where **n** is the number of times the character **\** should be printed
 * The diagonal should end with a **\n**
 * if **n** is **0** or less, the function should only print a **\n**
 * You are not allowed to import any module

[Diagonal.py](https://github.com/CBarreiro96/Mock_Interview_Holberton/blob/main/Diagonal.py)
</details>