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

## _How i did (mandatory)_

-   [Makefile](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/01.makefile.md)
-   [so_long.c](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/02.so_long.md)
-   [verify_error.c](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/03.verify_error.md)
-   [read_map.c](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/04.read_map.md)
-   [render_game.c](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/05.render_game.md)
-   [move.c](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/06.move.md)
-   [exit_free.c](https://github.com/Vinicius-Santoro/42-formation-lvl1-5.so-long/blob/main/READMES/07.exit_free.md)
