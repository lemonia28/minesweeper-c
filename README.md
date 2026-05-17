# Minesweeper Game (C)

A simple **console-based Minesweeper game** written in **C**, featuring random mine generation, board logic, and win/lose conditions.  
The player selects coordinates to reveal cells, avoiding hidden mines.

---

## Features

- 10x10 playable board
- Random mine placement
- Automatic calculation of surrounding mine counts (1–8)
- Win condition (reveal all safe cells)
- Lose condition (hit a mine)

---

## How It Works

The program generates a hidden board containing mines and numbers:

- `9` = mine  
- `1-8` = number of mines around the cell  
- `0` = empty cell  

The player enters coordinates to reveal a field.  
If the revealed field contains a mine (`9`), the game ends.

---

## Project Structure
main.c

*(Source code is located in `minesweeper.c`.)*

---

## Requirements

- C compiler (GCC recommended)
- Windows / Linux / macOS terminal

---

## Compilation & Run

### Windows (GCC / MinGW)

```bash
gcc minesweeper.c -o minesweeper
minesweeper.exe

## Gameplay

When the program runs, it will display a 10x10 hidden board.

Example input:

3
5

This reveals the cell at row 3, column 5.


Notes

⚠️ The current version is a basic implementation:

It does not automatically reveal empty areas (flood fill)
It does not prevent repeated mine placement in the same cell
Input validation can be improved
Possible Improvements
Prevent duplicate mine placement
Add input validation (block invalid coordinates)
Implement automatic revealing of connected empty fields (flood fill)
Add flagging system (mark mines)
Add difficulty levels (easy/medium/hard)
Author

Created by Monika Wolniewicz

License

This project is open-source and available under the MIT License.