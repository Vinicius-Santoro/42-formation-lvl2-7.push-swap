# 42-formation-lvl2-6.push-swap

### _Project 7: Push Swap - Seventh project for the formation of software engineers at school 42 São Paulo._

- This project aims to recreate the Unix pipe ( | ) command.

## _This project was like this:_

![pipex](https://user-images.githubusercontent.com/83036509/154865901-1208e1a5-4b7a-4e8c-aba1-f49e4a5d2133.gif)

## _How to test it_

For you to test this project, you should use the following way:

```bash
./pipex file1 "cmd1" "cmd2" file2
```
Just in case: file1 and file2 are file names, cmd1 and cmd2 are shell commands with their parameters.

The execution of the pipex program should do the same as the next shell command:

```bash
< file1 cmd1 | cmd2 > file2
```

<h1></h1>

<b>Example 1:<b>
```bash
./pipex infile "ls -l" "wc -l" outfile
```
<b>Should be the same as:<b>
```bash
< infile ls -l | wc -l > outfile
```

<h1></h1>

<b>Example 2:<b>
```bash
 ./pipex infile "grep a1" "wc -w" outfile
```
<b>Should be the same as:<b>
```bash
< infile grep a1 | wc -w > outfile
```

<!--
## _How i did (mandatory)_

-   []()
-   []()
-   []()
-   []()
-->
