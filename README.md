                                                                        Brief Description of the Task:
  The card game you will be programming is competitive and can be played by two to nine players. The game uses only cards from seven to ace. At the beginning of each round, each player is dealt three cards. 
The goal is to determine the winner based on the value of their cards. This value is calculated as the sum of the card values, with specific rules for the values predefined (described below in the conditions).
The game is played in rounds. In each round, players examine their cards and place a bet. Once all bets are placed, the players reveal their cards. The player with the highest total score wins the round. 
If multiple players have the highest score, the game enters a "tie" mode, meaning the players compete for the already wagered points.The game can continue for multiple rounds, and the overall winner is the player 
who has accumulated the most points after a predetermined number of rounds. This game combines elements of chance with strategic planning, as players must evaluate both their own cards and the potential of their 
opponents.


                                                                                    Dealing Cards:
  At the beginning of the game, the user is asked how many players will participate (2-9). Once the selection is made, each player is dealt 3 cards randomly. When dealing, follow these two rules:
A single card cannot be dealt twice.
It must be ensured that the drawn card is available; instead of drawing repeatedly, a free card should be selected.

                                                                                          Card Evaluation:
  The score of the three cards dealt to each player is calculated based on the combinations in which all three cards participate. The goal of the game is to collect strong cards and have a total sum greater 
than that of the other players.

                                                                                            Card Dealing:
  At the start of the game, the user is asked how many players will participate (2-9). Once the selection is made, each player is dealt 3 random cards. When dealing the cards, keep in mind:
A card cannot be dealt twice.
Ensure that the drawn card is available before assigning it, rather than drawing repeatedly until a free card is found.
Card Scoring:
The total score of each player's three cards is calculated based on the combinations they form. The goal of the game is to collect strong cards and have a higher total score than the other players.



                                                                                      Card Values:
  Card	Points:
Ace	11
King	10
Queen	10
Jack	10
Ten	10
Nine	9
Eight	8
Seven	7



                                                                                Basic Combinations:
  Three of a kind scores the sum of the three cards. For example, three eights give 24 points (3 × 8 = 24), while three queens give 30 points (3 × 10 = 30).
Exception: Three sevens give 34 points, making it the strongest hand in the game.
If all three cards share the same suit, their points are summed.
Most pairs do not form a combination, except for aces and sevens:
Two aces + any third card → 22 points.
Two sevens + any third card → 23 points.
The 7♠ (Seven of Spades) acts as a wild card, meaning:
If paired with two same-rank cards, the score is 2 × (card value) + 11.
If paired with two same-suit cards, the score is (first card) + (second card) + 11.
If paired with two different cards, the score is (highest card) + 11.
If no valid combination is formed, the highest card’s value is taken as the score.


Examples:

Regular Hands:

7♥, 9♦, 9♣ (9 points) – Two nines don’t form a combination, so the highest card is taken.
10♠, 10♦, A♠ (11 points) – Different suits; the highest card (Ace) is taken.
J♣, Q♥, 10♣ (10 points) – Different suits; the highest card (10) is taken.
K♦, 9♥, Q♣ (19 points) – King and nine share the same suit, so their sum is taken.
Special Hands:
A♠, A♥, 10♣ (22 points) – Aces always pair together, regardless of suit.
A♥, K♥, 10♠ (21 points) – Ace and King share the same suit, so their sum is taken.
8♠, A♦, 7♣ (22 points) – 7♠ acts as a wildcard and combines with the Ace.
10♥, 9♥, J♥ (29 points) – All three cards share the same suit, so the sum is taken.
Q♣, Q♥, Q♦ (30 points) – Three of a kind, so the sum is taken.
7♣, K♥, K♦ (31 points) – Two Kings + wildcard 7♣.
7♣, K♥, Q♦ (21 points) – King and Queen are different suits, so the higher one (King) is taken + 11 from 7♣.
7♣, A♥, K♦ (32 points) – (10 from King) + (11 from Ace) + 11 from 7♣.
7♣, 7♥, 7♦ (34 points) – Strongest hand in the game.
A♣, A♥, A♦ (33 points) – Three aces combined.
Betting Phase:
Each player starts with 100 × CHIP_VALUE virtual chips (CHIP_VALUE = 10). At the start of the game, every player contributes CHIP_VALUE to the pot, which will be awarded to the winner.Each player has three options during betting:
Raise – The player can increase the bet, but at least by CHIP_VALUE above the previous bet.
Fold – The player forfeits the round and stops playing.
Call – The player matches the previous bet if they have enough chips.
The round ends when only one active player remains, or when all players have matched the highest bet (Call).
If two or more players tie, the game enters a TIE PHASE, where:
Losing players can join the tie by paying half of the pot.
If a player with zero chips joins the tie, they are given 50 chips.
Continuing the Game (Play Again):
At the end of each round, the game asks if players want to start a new round.
If "Yes", a new round begins with only players who have more than 0 chips.
If "No", player balances and progress are saved to a file.
On the next game start, players should have the option to Continue.
If players decline to continue, the game resets (new player count, etc.).
