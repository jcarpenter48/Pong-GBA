# Pong-GBA
A GBA Homebrew Pong game developed for CS 2110

## PONG for GBA

![image](https://user-images.githubusercontent.com/70227084/174218939-28926fc9-eb8f-461d-a25c-2eaad9ab0548.png)

### Description:
Pong is a classic video game, and this is a recreation of it for the Gameboy Advance.

#### Controls:
	The player's controls consist of up and down on the D-Pad to move the leftmost paddle up and down.
	At any time, the player may press the SELECT button to return to the title screen.

#### Gameplay:
	As with any game of Pong, there is a ball bouncing around on screen between the Player's paddle and
	the Computer's paddle. Any time the ball strikes the top or bottom boundaries of the screen or collides
	with one of the paddles, it will be change direction and continue bouncing. 

	The player may score points when the ball moves off the right side of the screen, past the computer paddle.
	The computer may score points when the ball moves off the left side of the screen, past the player paddle.
	Upon scoring, the playfield resets and the player or computer attempts to score again.

	Score is displayed at the top of the screen (left for player, right for computer).

	Upon either the player or the computer reaching 10 points, the game ends, in favor of whoever scored 10 points.
	Depending on whether the player won or lost, a victory or defeat screen is shown.

	Upon winning or losing, the player may press START to play again or SELECT to return to the title screen.
