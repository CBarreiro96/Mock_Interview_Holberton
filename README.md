<div align="center"><img src="https://user-images.githubusercontent.com/66263776/98416555-43fa9b80-204d-11eb-800a-df8e19b62655.jpg" width="500" height= "200"> </div>

# <div align="center"><img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30">    Mock_Interview_Holberton <img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"></div>

## :scroll: Description :scroll:
---
<h3 align="center">Content of repository</h3>
<div align="center">
    <table>
        <tr>
            <th align="center"><center>Interview</center></th>
            <th align="center">Content </th>
        </tr>
        <tr>
            <th align="center">0x00_Shell</th>
            <td>
                <h4>General conversation</h4>
                <ul>
                    <li>How did you get into programming?</li>
                    <li>Tell me about your background</li>
                    <li>What is Holberton School?</li>
                </ul>
                <h4>Technical conversation</h4>
                <ul>
                    <li>What command would you use to list files on Linux?</li>
                    <li><code>echo r | ls -l</code></li>
                    <li> What does LTS stand for? What is the difference between LTS and a non-LTS version of Ubuntu?</li>
                    <li>When do you use `man`, and when do you use `help`?</li>
                    <li>What is the <code>/tmp</code> directory?</li>
                    <li>What is the difference between a hard link and a symbolic link?</li>
                </ul>
                <h4>Code</h4>
                Three exercise to do.
            </td>
        </tr>
        <tr>
            <th align="center">0x01_Shell_C</th>
            <td>
                <h4>General conversation</h4>
                <ul>
                    <li>Tell me about you?</li>
                    <li>How do you usually communicate with the team?</li>
                    <li>How would your friends and family describe you, your personality?</li>
                    <li>What would be your perfect role in a company? What would be your different responsibilities?</li>
                </ul>
                <h4>Technical conversation</h4>
                <ul>
                    <li>What does <code>gcc</code> stand for?</li>
                    <li>Who developed Emacs?</li>
                    <li>When do you use <code>man</code>, and when do you use <code>help</code>?</li>
                    <li>What do you find in the <code>/var/log</code> directory?</li>
                    <li>What is the Linux command to translate or delete characters?</li>
                    <li> How would you delete a file on Linux?</li>
                    <li>In C, what is the operator used to get the size, in bytes, of a type?</li>
                    <li>What happens when you type <code>gcc main.c</code>?</li>
                </ul>
                <h4>Code</h4>
                <ul>
                    <li><b>Exercise #1:</b> <i>"Smile in the mirror"</i></li>
                    <li><b>Exercise #2:</b> <i>"Confused smiley"</i></li>
                    <li><b>Exercise #3:</b> <i>"Hello, printf"</i></li>
                    <li><b>Exercise#4:</b> <i>"Hello World"</i></li>
                    <li><b>Exercise #5:</b> <i>"Positive anything is better than negative nothing"</i></li>
                    <li><b>Exercise #6</b> <i>"Duplicate last line"</i></li>
                    <li><b>Exercise #7:</b> <i>"The success combination in business is: Do what you do better... and: do more of what you do..."</i> </li>
                </ul>
            </td>
        </tr>
        <tr>
            <th align="center">0x02_Shell_C</th>
            <td align="center"></td>
        </tr>
        <tr>
            <th align="center">0x03_Shell_C</th>
            <td align="center"></td>
        </tr>
    </table>
</div>


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
