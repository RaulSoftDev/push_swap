<div align="center">
  <img width="175" src="https://img.shields.io/badge/Grade-98%25-00dd13?style=for-the-badge&logo=42"/>
</div>

<div align="center">
  <h1 align="center">push_swap</h1>
</div>

<p direction="auto">
  push_swap is a 42 Madrid Common Core project in which you have learn and code algorithms to sort a stack of data.
</p>

## About the project
<p direction="auto">
  push_swap is a program that will sort the numbers within a stack using the instructions of the <code>push swap</code> language, sending to the terminal standard output <code>stdout</code> the smallest possible list of instructions used to achieve this.
</p>
<h3>Mandatory parts</h3>
<ul>
  <li>You have two stacks, <code>a</code> and <code>b</code></li>
  <li>At the beginning of the execution, <code>a</code> will have a random not duplicated amount of positive and negative integers numbers and <code>b</code> will be empty.</li>
  <li>The program must sort <code>a</code> so that the smallest number is on top of the stack.</li>
  <li>The program will print to the terminal the shortest possible list of <code>push swap</code> language instructions used to sort <code>a</code>.</li>
</ul>
<h3>Push Swap Language Instructions</h3>
<ul>
  <li><code>sa</code> : swap the first two elements of <code>a</code> if the stack contains at least two elements.</li>
  <li><code>sb</code> : swap the first two elements of <code>b</code> if the stack contains at least two elements.</li>
  <li><code>ss</code> : executes both <code>sa</code> and <code>sb</code>.</li>
  <li><code>pa</code> : push the first element of <code>b</code>, if the stack is not empty, to be the first element of <code>a</code>.</li>
  <li><code>pb</code> : push the first element of <code>a</code>, if the stack is not empty, to be the first element of <code>b</code>.</li>
  <li><code>ra</code> : rotates <code>a</code> up. Moves all elements up one position, so that the first element becomes the last one.</li>
  <li><code>rb</code> : rotates <code>b</code> up. Moves all elements up one position, so that the first element becomes the last one.</li>
  <li><code>rr</code> : executes both <code>ra</code> and <code>rb</code>.</li>
  <li><code>rra</code> : rotates <code>a</code> down. Moves all elements down one position, so that the last element becomes the first one.</li>
  <li><code>rrb</code> : rotates <code>b</code> up. Moves all elements up one position, so that the last element becomes the first one.</li>
  <li><code>rrr</code> : executes both <code>rra</code> and <code>rrb</code>.</li>
</ul>

## Compilation
<h3>Requirements</h3>
<ul>
  <li>C compiler: <code>gcc</code>, <code>cc</code>, etc...</li>
  <li><code>make</code> utility.</li>
  <li><code>libft</code> library in the project root folder.</li>
</ul>

<h3>Make commands</h3>
<ul>
  <li><code>make</code>: compile project.</li>
  <li><code>make clean</code>: deletes compilation files except the executables.</li>
  <li><code>make fclean</code>: deletes all compilation files.</li>
  <li><code>make re</code>: executes <code>make fclean</code> and <code>make</code>.</li>
</ul>

<h3>Build project</h3>
<ol>
<li>
<p dir="auto">Clone the repository:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>git clone https://github.com/RaulSoftDev/push_swap.git
<span class="pl-c1">cd</span> push_swap/</samp></pre>
</div>
</li>
<li>
<p dir="auto">Build the project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>make</samp></pre>
</div>
</li>
<li>
<p dir="auto">Execute the program:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>./push_swap "n1, n2, n3..."</samp></pre>
</div>
</li>
</ol>
