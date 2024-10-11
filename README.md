# Mastermind Game in C

## Overview
This is a terminal-based implementation of the classic **Mastermind** game written in C. The objective is to guess a secret code of colors with limited attempts, based on feedback received for each guess.

## Features
- Dynamic difficulty levels.
- Simple ASCII-based board representation.
- Random code generation.

## How to Play
1. Start the game and select a difficulty level.
2. The game will generate a random code of colors.
3. You have a limited number of attempts to guess the code based on the feedback provided.

## Setup & Compilation
### Requirements
- GCC or any C compiler.
- Standard C libraries.

### Compilation
```bash
gcc -o mastermind main.c game.c board.c code.c